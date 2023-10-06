
#ifdef WIN32
#ifndef _SYSTEM_DRAWING_GDIPLUSSREAMHELPER_H_
#define _SYSTEM_DRAWING_GDIPLUSSREAMHELPER_H_

#include "Aspose.Cells.Systems/object.h"
#include "Aspose.Cells.Systems/System.h"
#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/ArgumentException.h"
#include "Aspose.Cells.Systems/OutOfMemoryException.h"
#include "Aspose.Cells.Systems/NotSupportedException.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Convert.h"
#include "Aspose.Cells.Systems/ArrayHelper.h"

using namespace Aspose::Cells::Systems::IO;


////////

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				class ASPOSE_CELLS_API  GdiPlusStreamHelper  : public Object
				{
				public:
					GdiPlusStreamHelper()
					{
						//sghd = NULL;
						//sgbd = NULL;
						//skd = NULL;
						//spbd = NULL;
						//scd = NULL;
						//ssd = NULL;
					}
					static intrusive_ptr<Stream> stream;

				public:
					/*
					typedef int(GdiPlusStreamHelper::*StreamGetHeaderDelegate) (Byte*, int);
					typedef int(GdiPlusStreamHelper::*StreamGetBytesDelegate) (Byte*, int, bool);
					typedef long(GdiPlusStreamHelper::*StreamSeekDelegate) (int, int);
					typedef int(GdiPlusStreamHelper::*StreamPutBytesDelegate) (Byte*, int);
					typedef void(GdiPlusStreamHelper::*StreamCloseDelegate) ();
					typedef long(GdiPlusStreamHelper::*StreamSizeDelegate) ();

					StreamGetHeaderDelegate sghd;
					StreamGetBytesDelegate sgbd;
					StreamSeekDelegate skd;
					StreamPutBytesDelegate spbd;
					StreamCloseDelegate scd;
					StreamSizeDelegate ssd;
					*/

				private:
					static intrusive_ptr<Aspose::Cells::Systems::Array1D< Aspose::Cells::Systems::Byte>> start_buf;
					static int	start_buf_pos;
					static int	start_buf_len;
					static intrusive_ptr<Aspose::Cells::Systems::Array1D< Aspose::Cells::Systems::Byte>> managedBuf;
					const int default_bufsize = 4096;

				public:
					GdiPlusStreamHelper(intrusive_ptr<Stream> s, bool seekToOrigin)
					{
						managedBuf = NEW Aspose::Cells::Systems::Array1D< Aspose::Cells::Systems::Byte>(default_bufsize);
						stream = s;
						if (stream != NULL && stream->CanSeek() && seekToOrigin) {
							stream->Seek(0, SeekOrigin_Begin);
						}
					}


					static int StreamGetHeaderImpl(Byte* buf, int bufsz)
					{

						int	bytesRead;
						start_buf = NEW Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>(bufsz);
						try {
							bytesRead = stream->Read(start_buf, 0, bufsz);
						}
						catch (ArgumentException& a) {
							return -1;
						}

						if (bytesRead > 0 && buf != NULL)//IntegerPtr::Zero
						{
							// Marshal.Copy(start_buf, 0, (IntPtr)(buf.ToInt64()), bytesRead); //front -> back 
							memcpy(buf, start_buf->ArrayPoint(), bytesRead);
						}
						start_buf_pos = 0;
						start_buf_len = bytesRead;
						return bytesRead;
					}


					static int StreamGetBytesImpl(Byte* buf, int bufsz, bool peek)
					{
						if (buf == NULL && peek) {
							return -1;
						}

						if (bufsz > managedBuf->GetLength())
							managedBuf = NEW Aspose::Cells::Systems::Array1D< Aspose::Cells::Systems::Byte>(bufsz);
						int bytesRead = 0;
						long streamPosition = 0;

						if (bufsz > 0) {
							if (stream->CanSeek()) {
								streamPosition = stream->GetPosition();
							}
							if (start_buf_len > 0) {
								if (start_buf_len > bufsz) {
									ArrayHelper::Copy(start_buf, start_buf_pos, managedBuf, 0, bufsz);
									start_buf_pos += bufsz;
									start_buf_len -= bufsz;
									bytesRead = bufsz;
									bufsz = 0;
								}
								else {
									// this is easy
									ArrayHelper::Copy(start_buf, start_buf_pos, managedBuf, 0, start_buf_len);
									bufsz -= start_buf_len;
									bytesRead = start_buf_len;
									start_buf_len = 0;
								}
							}

							if (bufsz > 0) {
								try {
									bytesRead += stream->Read(managedBuf, bytesRead, bufsz);
								}
								catch (ArgumentException&) {
									return -1;
								}
							}

							if (bytesRead > 0 && buf != NULL) {
								memcpy(buf, managedBuf->ArrayPoint(), bytesRead);
							}

							if (!stream->CanSeek() && (bufsz == 10) && peek) {
								// Special 'hack' to support peeking of the type for gdi+ on non-seekable streams
							}

							if (peek) {
								if (stream->CanSeek()) {
									// If we are peeking bytes, then go back to original position before peeking
									stream->Seek(streamPosition, SeekOrigin_Begin);
								}
								else {
									throw new NotSupportedException();
								}
							}
						}

						return bytesRead;
					}

					static long StreamSeekImpl(int offset, int whence)
					{
						// Make sure we have a valid 'whence'.
						if ((whence < 0) || (whence > 2))
							return -1;

						// Invalidate the start_buf if we're actually going to call a Seek method.
						start_buf_pos += start_buf_len;
						start_buf_len = 0;

						SeekOrigin origin;

						// Translate 'whence' into a SeekOrigin enum member.
						switch (whence)
						{
						case 0: origin = SeekOrigin_Begin;   break;
						case 1: origin = SeekOrigin_Current; break;
						case 2: origin = SeekOrigin_End;     break;

							// The following line is redundant but necessary to avoid a
							// "Use of unassigned local variable" error without actually
							// initializing 'origin' to a dummy value.
						default: return -1;
						}

						// Do the actual seek operation and return its result.
						return stream->Seek((long)offset, origin);
					}


					static int StreamPutBytesImpl(Byte* buf, int bufsz)
					{
						if (bufsz > managedBuf->GetLength())
							managedBuf = NEW Aspose::Cells::Systems::Array1D< Aspose::Cells::Systems::Byte>(bufsz);;

						memcpy(buf, managedBuf->ArrayPoint(), bufsz);
						//Marshal.Copy(buf, managedBuf, 0, bufsz);
						stream->Write(managedBuf, 0, bufsz);
						return bufsz;
					}

					static void StreamCloseImpl()
					{
						stream->Close();
					}


					static long StreamSizeImpl()
					{
						try {
							return stream->GetLength();
						}
						catch (...)
						{
							return -1;
						}
					}



				};
				////////

			}
		}
	}
}
#endif
#else
#ifndef _SYSTEM_CALLBACK_H_
#define _SYSTEM_CALLBACK_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Exception.h"

using namespace Aspose::Cells;
using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::IO;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				class GdiPlusStreamHelper : public Object
				{
				public:
					//typedef int(GdiPlusStreamHelper::*StreamGetHeaderDelegate) (int*, int);
					static intrusive_ptr<Aspose::Cells::Systems::Array1D< Aspose::Cells::Systems::Byte>> start_buf;
					static int	start_buf_pos;
					static int	start_buf_len;
					static intrusive_ptr<Aspose::Cells::Systems::Array1D< Aspose::Cells::Systems::Byte>> managedBuf;
					static intrusive_ptr<Stream> stream;

					const int default_bufsize = 4096;
				private:

				public:
					GdiPlusStreamHelper(intrusive_ptr<Stream> s, bool seekToOrigin);
					//static int  GdiPlusStreamHelperImp(Byte* buf, int bufsz);
					static int  StreamGetHeaderImpl(Byte* buf, int bufsz);
					static int  StreamGetBytesImpl(Byte* buf, int bufsz, bool peek);
					static long StreamSeekImpl(int offset, int whence);
					static int  StreamPutBytesImpl(Byte* buf, int bufsz);

					static void StreamCloseImpl()
					{
						stream->Close();
					}

					static long StreamSizeImpl()
					{
						try {
							return stream->GetLength();
						}
						catch (...)
						{
							return -1;
						}
					}

                    ~GdiPlusStreamHelper(){};
                    virtual void add_ref() {++ref_count_;}
		            virtual int  release_ref() {return --ref_count_;}
				};
			}
		}
	}
}


#endif
#endif


