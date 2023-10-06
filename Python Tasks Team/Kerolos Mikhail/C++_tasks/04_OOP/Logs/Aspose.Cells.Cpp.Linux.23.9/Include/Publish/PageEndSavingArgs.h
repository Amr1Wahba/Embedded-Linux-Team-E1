#pragma once
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Object.h"
#include "PageSavingArgs.h"
#define STATIC_PAGEENDSAVINGARGS() 


namespace Aspose {
namespace Cells {
namespace Rendering {
#ifdef WIN32

	class ASPOSE_CELLS_API PageEndSavingArgs : public Aspose::Cells::Rendering::PageSavingArgs
#else
	class PageEndSavingArgs : public Aspose::Cells::Rendering::PageSavingArgs
#endif


	{
	public:

			 PageEndSavingArgs(Aspose::Cells::Systems::Int32 pageIndex , Aspose::Cells::Systems::Int32 pageCount);
	private:

			void Init_Vars();
			bool mHasMorePages;
	public:

			bool HasMorePages();
			void SetHasMorePages(bool value);
			 PageEndSavingArgs();
		public:
			virtual ~PageEndSavingArgs();
	};

}

}

}
