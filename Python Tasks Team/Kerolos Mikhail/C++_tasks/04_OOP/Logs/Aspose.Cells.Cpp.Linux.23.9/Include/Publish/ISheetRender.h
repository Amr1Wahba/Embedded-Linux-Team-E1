#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Drawing/Graphics.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Drawing/Bitmap.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PrinterSettings.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PrintPageEventArgs.h"

namespace Aspose {
	namespace Cells {
		class IWorksheet;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class IImageOrPrintOptions;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Rendering{
			/// <summary>
			/// Represents a worksheet render which can render worksheet to various images such as (BMP, PNG, JPEG, TIFF..)
			/// The constructor of this class , must be used after modification of pagesetup, cell style.    
			/// </summary>
	class ASPOSE_CELLS_API ISheetRender : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the total page count of current worksheet.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetPageCount()=0;
			/// <summary>
			/// Gets calculated page scale of the sheet.
			/// Returns the set scale if <see cref="PageSetup.Zoom" />
			///  is set. Otherwise, returns the calculated scale according to <see cref="PageSetup.FitToPagesWide" />
			///  and <see cref="PageSetup.FitToPagesTall" />
			/// .
			/// </summary>
			/// <example><code>
			/// Workbook wb = new Workbook("Book1.xlsx");
			/// 
			/// SheetRender sheetRender = new SheetRender(wb.Worksheets[0], new ImageOrPrintOptions());
			/// 
			/// //Gets calculated page scale of the sheet.
			/// double pageScale = sheetRender.PageScale;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetPageScale()=0;
			/// <summary>
			/// Get page size in inch of output image.
			/// </summary>
			/// <param name="pageIndex" >The page index is based on zero.</param>
			/// <returns>Page size of image, [0] for width and [1] for height</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Single>> GetPageSizeInch(Aspose::Cells::Systems::Int32 pageIndex)=0;
			/// <summary>
			/// Render certain page to a Graphics
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="g" >The object where to render to.</param>
			/// <param name="x" >The X coordinate (in pixels) of the top left corner of the rendered page.</param>
			/// <param name="y" >The Y coordinate (in pixels) of the top left corner of the rendered page.</param>
			/// <param name="width" >The maximum width (in pixels) that can be occupied by the rendered page.</param>
			/// <param name="height" >The maximum height (in pixels) that can be occupied by the rendered page.</param>
			 virtual void ToImage(Aspose::Cells::Systems::Int32 pageIndex , intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> g , Aspose::Cells::Systems::Single x , Aspose::Cells::Systems::Single y , Aspose::Cells::Systems::Single width , Aspose::Cells::Systems::Single height)=0;
			/// <summary>
			/// Render certain page to a Graphics
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="g" >The object where to render to.</param>
			/// <param name="x" >The X coordinate (in pixels) of the top left corner of the rendered page.</param>
			/// <param name="y" >The Y coordinate (in pixels) of the top left corner of the rendered page.</param>
			 virtual void ToImage(Aspose::Cells::Systems::Int32 pageIndex , intrusive_ptr<Aspose::Cells::Systems::Drawing::Graphics> g , Aspose::Cells::Systems::Single x , Aspose::Cells::Systems::Single y)=0;
			/// <summary>
			/// Render certain page to a file.
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="fileName" >filename of the output image</param>
			/// <example>
			/// The following code outputs the first page of the first sheet to png image.
			/// <code>
			/// //load the source file with images.
			/// Workbook wb = new Workbook("Book1.xlsx");
			/// 
			/// ImageOrPrintOptions imgOpt = new ImageOrPrintOptions();
			/// 
			/// //set output image type.
			/// imgOpt.ImageType = ImageType.Png;
			/// 
			/// //render the first sheet.
			/// SheetRender sr = new SheetRender(wb.Worksheets[0], imgOpt);
			/// 
			/// //output the first page of the sheet to image.
			/// sr.ToImage(0, "output.png");
			/// </code>
			/// </example>
			 virtual void ToImage(Aspose::Cells::Systems::Int32 pageIndex , intrusive_ptr<Aspose::Cells::Systems::String> fileName)=0;
			/// <summary>
			/// Render certain page to a stream.
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <param name="stream" >the stream of the output image</param>
			 virtual void ToImage(Aspose::Cells::Systems::Int32 pageIndex , intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream)=0;
			/// <summary>
			/// Render certain page to a Bitmap object.
			/// </summary>
			/// <param name="pageIndex" >indicate which page is to be converted</param>
			/// <returns>the bitmap object of the page</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Bitmap> ToImage(Aspose::Cells::Systems::Int32 pageIndex)=0;
			/// <summary>
			/// Render whole worksheet as Tiff Image to stream.
			/// </summary>
			/// <param name="stream" >the stream of the output image</param>
			 virtual void ToTiff(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="printerName" >the name of the printer , for example: "Microsoft Office Document Image Writer"</param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::Systems::String> printerName)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="printerName" >the name of the printer , for example: "Microsoft Office Document Image Writer"</param>
			/// <param name="jobName" >set the print job name </param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::Systems::String> printerName , intrusive_ptr<Aspose::Cells::Systems::String> jobName)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="printerSettings" > the settings of printer, e.g. PrinterName, Duplex</param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::Systems::Drawing::Printing::PrinterSettings> printerSettings)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="printerSettings" > the settings of printer, e.g. PrinterName, Duplex</param>
			/// <param name="jobName" >set the print job name </param>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::Systems::Drawing::Printing::PrinterSettings> printerSettings , intrusive_ptr<Aspose::Cells::Systems::String> jobName)=0;
			/// <summary>
			/// Render worksheet to Printer
			/// </summary>
			/// <param name="printerName" >the name of the printer , for example: "Microsoft Office Document Image Writer"</param>
			/// <param name="printPageIndex" >the 0-based index of the first page to print, it must be in Range [0, SheetRender.PageCount-1]</param>
			/// <param name="printPageCount" >the number of pages to print, it must be greater than zero</param>
			/// <remarks>NOTE: This method is now obsolete. 
			/// Instead, please use ToPrinter(string PrinterName) and ImageOrPrintOptions.PageIndex, PageCount to set the first page and the number of pages to print.
			/// This property will be removed 12 months later since December 2021. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void ToPrinter(intrusive_ptr<Aspose::Cells::Systems::String> printerName , Aspose::Cells::Systems::Int32 printPageIndex , Aspose::Cells::Systems::Int32 printPageCount)=0;
			/// <summary>
			/// Client can control page setting of printer when print each page using this function.
			/// </summary>
			/// <param name="nextPageAfterPrint" >If true , printer will go to next page after print current page</param>
			/// <param name="printPageEventArgs" >System.Drawing.Printing.PrintPageEventArgs</param>
			/// <returns>Indirect next page index,  based on zero</returns>
			 virtual Aspose::Cells::Systems::Int32 CustomPrint(bool nextPageAfterPrint , intrusive_ptr<Aspose::Cells::Systems::Drawing::Printing::PrintPageEventArgs> printPageEventArgs)=0;
			/// <summary>
			/// Releases resources created and used for rendering.
			/// </summary>
			 virtual void Dispose()=0;

	};
}
}
}
