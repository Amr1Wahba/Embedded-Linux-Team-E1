#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "SaveFormat.h"
#include "Aspose.Cells.Systems/String.h"
#include "PrintCommentsType.h"
#include "HtmlCrossType.h"
#include "HtmlHiddenColDisplayType.h"
#include "HtmlHiddenRowDisplayType.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "HtmlExportDataOptions.h"
#include "HtmlLinkTargetType.h"
#include "ISaveOptions.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
		enum PrintCommentsType;
		class ICellArea;
		enum HtmlCrossType;
		enum HtmlHiddenColDisplayType;
		enum HtmlHiddenRowDisplayType;
		enum HtmlExportDataOptions;
		enum HtmlLinkTargetType;
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
			/// <summary>
			/// Represents the options for saving html file.
			/// </summary>
	class ASPOSE_CELLS_API IHtmlSaveOptions : virtual public Aspose::Cells::ISaveOptions
	{
		public:
			/// <summary>
			/// Indicate whether exporting those not visible shapes
			/// </summary>
			/// <remarks>
			/// The default values is false.
			/// </remarks>
			 virtual bool GetIgnoreInvisibleShapes()=0;
			/// <summary>
			/// Indicate whether exporting those not visible shapes
			/// </summary>
			/// <remarks>
			/// The default values is false.
			/// </remarks>
			 virtual void SetIgnoreInvisibleShapes(bool value)=0;
			/// <summary>
			/// The title of the html page.
			/// Only for saving to html stream.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPageTitle()=0;
			/// <summary>
			/// The title of the html page.
			/// Only for saving to html stream.
			/// </summary>
			 virtual void SetPageTitle(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// The directory that the attached files will be saved to.
			/// Only for saving to html stream.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetAttachedFilesDirectory()=0;
			/// <summary>
			/// The directory that the attached files will be saved to.
			/// Only for saving to html stream.
			/// </summary>
			 virtual void SetAttachedFilesDirectory(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Specify the Url prefix of attached files such as image in the html file.
			/// Only for saving to html stream.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetAttachedFilesUrlPrefix()=0;
			/// <summary>
			/// Specify the Url prefix of attached files such as image in the html file.
			/// Only for saving to html stream.
			/// </summary>
			 virtual void SetAttachedFilesUrlPrefix(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Specify the default font name for exporting html, the default font will be used  when the font of style is not existing,
			/// If this property is null, Aspose.Cells will use universal font which have the same family with the original font,
			/// the default value is null.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDefaultFontName()=0;
			/// <summary>
			/// Specify the default font name for exporting html, the default font will be used  when the font of style is not existing,
			/// If this property is null, Aspose.Cells will use universal font which have the same family with the original font,
			/// the default value is null.
			/// </summary>
			 virtual void SetDefaultFontName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates if zooming in or out the html via worksheet zoom level when saving file to html, the default value is false.
			/// </summary>
			 virtual bool GetWorksheetScalable()=0;
			/// <summary>
			/// Indicates if zooming in or out the html via worksheet zoom level when saving file to html, the default value is false.
			/// </summary>
			 virtual void SetWorksheetScalable(bool value)=0;
			/// <summary>
			/// Indicates if exporting comments when saving file to html, the default value is false.
			/// </summary>
			 virtual bool IsExportComments()=0;
			/// <summary>
			/// Indicates if exporting comments when saving file to html, the default value is false.
			/// </summary>
			 virtual void SetExportComments(bool value)=0;
			/// <summary>
			/// Represents type of exporting comments to html files.
			/// </summary>
			 virtual Aspose::Cells::PrintCommentsType GetExportCommentsType()=0;
			/// <summary>
			/// Represents type of exporting comments to html files.
			/// </summary>
			 virtual void SetExportCommentsType(Aspose::Cells::PrintCommentsType value)=0;
			/// <summary>
			/// Indicates if disable Downlevel-revealed conditional comments when exporting file to html, the default value is false.
			/// </summary>
			 virtual bool GetDisableDownlevelRevealedComments()=0;
			/// <summary>
			/// Indicates if disable Downlevel-revealed conditional comments when exporting file to html, the default value is false.
			/// </summary>
			 virtual void SetDisableDownlevelRevealedComments(bool value)=0;
			/// <summary>
			/// Indicates whether exporting image files to temp directory.
			/// Only for saving to html stream.
			/// </summary>
			 virtual bool IsExpImageToTempDir()=0;
			/// <summary>
			/// Indicates whether exporting image files to temp directory.
			/// Only for saving to html stream.
			/// </summary>
			 virtual void SetExpImageToTempDir(bool value)=0;
			/// <summary>
			/// Indicates whether using scalable unit to describe the image width
			/// when using scalable unit to describe the column width.
			/// The default value is true.
			/// </summary>
			 virtual bool GetImageScalable()=0;
			/// <summary>
			/// Indicates whether using scalable unit to describe the image width
			/// when using scalable unit to describe the column width.
			/// The default value is true.
			/// </summary>
			 virtual void SetImageScalable(bool value)=0;
			/// <summary>
			/// Indicates whether exporting column width in unit of scale to html.
			/// The default value is false.
			/// </summary>
			 virtual bool GetWidthScalable()=0;
			/// <summary>
			/// Indicates whether exporting column width in unit of scale to html.
			/// The default value is false.
			/// </summary>
			 virtual void SetWidthScalable(bool value)=0;
			/// <summary>
			/// Indicates whether exporting the single tab when the file only has one worksheet.
			/// The default value is false.
			/// </summary>
			 virtual bool GetExportSingleTab()=0;
			/// <summary>
			/// Indicates whether exporting the single tab when the file only has one worksheet.
			/// The default value is false.
			/// </summary>
			 virtual void SetExportSingleTab(bool value)=0;
			/// <summary>
			/// Specifies whether images are saved in Base64 format to HTML, MHTML or EPUB.
			/// </summary>
			/// <remarks>
			/// When this property is set to true image data is exported directly on the
			///     img elements and separate files are not created.
			/// </remarks>
			 virtual bool GetExportImagesAsBase64()=0;
			/// <summary>
			/// Specifies whether images are saved in Base64 format to HTML, MHTML or EPUB.
			/// </summary>
			/// <remarks>
			/// When this property is set to true image data is exported directly on the
			///     img elements and separate files are not created.
			/// </remarks>
			 virtual void SetExportImagesAsBase64(bool value)=0;
			/// <summary>
			/// Indicates if only exporting the active worksheet to html file.
			/// If true then only the active worksheet will be exported to html file;
			/// If false then the whole workbook will be exported to html file.
			/// The default value is false.
			/// </summary>
			 virtual bool GetExportActiveWorksheetOnly()=0;
			/// <summary>
			/// Indicates if only exporting the active worksheet to html file.
			/// If true then only the active worksheet will be exported to html file;
			/// If false then the whole workbook will be exported to html file.
			/// The default value is false.
			/// </summary>
			 virtual void SetExportActiveWorksheetOnly(bool value)=0;
			/// <summary>
			/// Indicates if only exporting the print area to html file. The default value is false.
			/// </summary>
			 virtual bool GetExportPrintAreaOnly()=0;
			/// <summary>
			/// Indicates if only exporting the print area to html file. The default value is false.
			/// </summary>
			 virtual void SetExportPrintAreaOnly(bool value)=0;
			/// <summary>
			/// Gets or Sets the exporting CellArea of current active Worksheet.
			/// If you set this attribute, the print area of current active Worksheet will be omitted.
			/// Only the specified area will be exported when saving the file to html.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetExportICellArea()=0;
			/// <summary>
			/// Gets or Sets the exporting CellArea of current active Worksheet.
			/// If you set this attribute, the print area of current active Worksheet will be omitted.
			/// Only the specified area will be exported when saving the file to html.
			/// </summary>
			 virtual void 		SetExportICellArea(intrusive_ptr<Aspose::Cells::ICellArea> value)=0;
			/// <summary>
			/// Indicates whether html tag(such as <c>div/div</c>
			/// ) in cell should be parsed as cell value or preserved as it is.
			/// The default value is true.
			/// </summary>
			 virtual bool GetParseHtmlTagInCell()=0;
			/// <summary>
			/// Indicates whether html tag(such as <c>div/div</c>
			/// ) in cell should be parsed as cell value or preserved as it is.
			/// The default value is true.
			/// </summary>
			 virtual void SetParseHtmlTagInCell(bool value)=0;
			/// <summary>
			/// Indicates if a cross-cell string will be displayed in the same way as MS Excel when saving an Excel file in html format.
			/// By default the value is Default, so, for cross-cell strings, there is little difference between the html files created by Aspose.Cells and MS Excel.
			/// But the performance for creating large html files,setting the value to Cross would be several times faster than setting it to Default or Fit2Cell.
			/// </summary>
			 virtual Aspose::Cells::HtmlCrossType GetHtmlCrossStringType()=0;
			/// <summary>
			/// Indicates if a cross-cell string will be displayed in the same way as MS Excel when saving an Excel file in html format.
			/// By default the value is Default, so, for cross-cell strings, there is little difference between the html files created by Aspose.Cells and MS Excel.
			/// But the performance for creating large html files,setting the value to Cross would be several times faster than setting it to Default or Fit2Cell.
			/// </summary>
			 virtual void SetHtmlCrossStringType(Aspose::Cells::HtmlCrossType value)=0;
			/// <summary>
			/// Hidden column(the width of this column is 0) in excel,before save this into html format,
			/// if HtmlHiddenColDisplayType is "Remove",the hidden column would not been output,
			/// if the value is "Hidden", the column would been output,but was hidden,the default value is "Hidden"
			/// </summary>
			 virtual Aspose::Cells::HtmlHiddenColDisplayType GetHiddenColDisplayType()=0;
			/// <summary>
			/// Hidden column(the width of this column is 0) in excel,before save this into html format,
			/// if HtmlHiddenColDisplayType is "Remove",the hidden column would not been output,
			/// if the value is "Hidden", the column would been output,but was hidden,the default value is "Hidden"
			/// </summary>
			 virtual void SetHiddenColDisplayType(Aspose::Cells::HtmlHiddenColDisplayType value)=0;
			/// <summary>
			/// Hidden row(the height of this row is 0) in excel,before save this into html format,
			/// if HtmlHiddenRowDisplayType is "Remove",the hidden row would not been output,
			/// if the value is "Hidden", the row would been output,but was hidden,the default value is "Hidden"
			/// </summary>
			 virtual Aspose::Cells::HtmlHiddenRowDisplayType GetHiddenRowDisplayType()=0;
			/// <summary>
			/// Hidden row(the height of this row is 0) in excel,before save this into html format,
			/// if HtmlHiddenRowDisplayType is "Remove",the hidden row would not been output,
			/// if the value is "Hidden", the row would been output,but was hidden,the default value is "Hidden"
			/// </summary>
			 virtual void SetHiddenRowDisplayType(Aspose::Cells::HtmlHiddenRowDisplayType value)=0;
			/// <summary>
			/// If not set,use Encoding.UTF8 as default enconding type.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Text::Encoding> GetEncoding()=0;
			/// <summary>
			/// If not set,use Encoding.UTF8 as default enconding type.
			/// </summary>
			 virtual void SetEncoding(intrusive_ptr<Aspose::Cells::Systems::Text::Encoding> value)=0;
			/// <summary>
			/// Get the ImageOrPrintOptions object before exporting
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> 		GetIImageOptions()=0;
			/// <summary>
			/// Indicates whether save the html as single file.
			/// The default value is false.
			/// </summary>
			/// <remarks>
			/// If there are multiple worksheets or other required resources such as pictures in the workbook,
			/// commonly those worksheets and other resources need to be saved into separate files. 
			/// For some scenarios, user maybe need to get only one resultant file such as for the convenience of transferring.
			/// If so, user may set this property as true.
			/// </remarks>
			 virtual bool GetSaveAsSingleFile()=0;
			/// <summary>
			/// Indicates whether save the html as single file.
			/// The default value is false.
			/// </summary>
			/// <remarks>
			/// If there are multiple worksheets or other required resources such as pictures in the workbook,
			/// commonly those worksheets and other resources need to be saved into separate files. 
			/// For some scenarios, user maybe need to get only one resultant file such as for the convenience of transferring.
			/// If so, user may set this property as true.
			/// </remarks>
			 virtual void SetSaveAsSingleFile(bool value)=0;
			/// <summary>
			/// Indicates whether showing all sheets when saving  as a single html file.
			/// </summary>
			/// <remarks>
			/// Only works when <see cref="SaveAsSingleFile" />
			///  is True.
			/// </remarks>
			 virtual bool GetShowAllSheets()=0;
			/// <summary>
			/// Indicates whether showing all sheets when saving  as a single html file.
			/// </summary>
			/// <remarks>
			/// Only works when <see cref="SaveAsSingleFile" />
			///  is True.
			/// </remarks>
			 virtual void SetShowAllSheets(bool value)=0;
			/// <summary>
			/// Indicates whether exporting page headers.
			/// </summary>
			/// <remarks>
			/// Only works when <see cref="SaveAsSingleFile" />
			///  is True.
			/// </remarks>
			 virtual bool GetExportPageHeaders()=0;
			/// <summary>
			/// Indicates whether exporting page headers.
			/// </summary>
			/// <remarks>
			/// Only works when <see cref="SaveAsSingleFile" />
			///  is True.
			/// </remarks>
			 virtual void SetExportPageHeaders(bool value)=0;
			/// <summary>
			/// Indicates whether exporting page headers.
			/// </summary>
			/// <remarks>
			/// Only works when <see cref="SaveAsSingleFile" />
			///  is True.
			/// </remarks>
			 virtual bool GetExportPageFooters()=0;
			/// <summary>
			/// Indicates whether exporting page headers.
			/// </summary>
			/// <remarks>
			/// Only works when <see cref="SaveAsSingleFile" />
			///  is True.
			/// </remarks>
			 virtual void SetExportPageFooters(bool value)=0;
			/// <summary>
			/// Indicating if exporting the hidden worksheet content.The default value is true.
			/// </summary>
			 virtual bool GetExportHiddenWorksheet()=0;
			/// <summary>
			/// Indicating if exporting the hidden worksheet content.The default value is true.
			/// </summary>
			 virtual void SetExportHiddenWorksheet(bool value)=0;
			/// <summary>
			/// Indicating if html or mht file is presentation preference.
			/// The default value is false.
			/// if you want to get more beautiful presentation,please set the value to true.
			/// </summary>
			 virtual bool GetPresentationPreference()=0;
			/// <summary>
			/// Indicating if html or mht file is presentation preference.
			/// The default value is false.
			/// if you want to get more beautiful presentation,please set the value to true.
			/// </summary>
			 virtual void SetPresentationPreference(bool value)=0;
			/// <summary>
			/// Gets and sets the prefix of the css name,the default value is "".
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCellCssPrefix()=0;
			/// <summary>
			/// Gets and sets the prefix of the css name,the default value is "".
			/// </summary>
			 virtual void SetCellCssPrefix(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the prefix of the type css name such as tr,col,td and so on, they are contained in the table element 
			/// which has the specific TableCssId attribute. The default value is "".
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetTableCssId()=0;
			/// <summary>
			/// Gets and sets the prefix of the type css name such as tr,col,td and so on, they are contained in the table element 
			/// which has the specific TableCssId attribute. The default value is "".
			/// </summary>
			 virtual void SetTableCssId(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicating whether using full path link in sheet00x.htm,filelist.xml and tabstrip.htm.
			/// The default value is false.
			/// </summary>
			 virtual bool IsFullPathLink()=0;
			/// <summary>
			/// Indicating whether using full path link in sheet00x.htm,filelist.xml and tabstrip.htm.
			/// The default value is false.
			/// </summary>
			 virtual void SetFullPathLink(bool value)=0;
			/// <summary>
			/// Indicating whether export the worksheet css separately.The default value is false.
			/// </summary>
			 virtual bool GetExportWorksheetCSSSeparately()=0;
			/// <summary>
			/// Indicating whether export the worksheet css separately.The default value is false.
			/// </summary>
			 virtual void SetExportWorksheetCSSSeparately(bool value)=0;
			/// <summary>
			/// Indicating whether exporting the similar border style when the border style is not supported by browsers.
			/// If you want to import the html or mht file to excel, please keep the default value.
			/// The default value is false.
			/// </summary>
			 virtual bool GetExportSimilarBorderStyle()=0;
			/// <summary>
			/// Indicating whether exporting the similar border style when the border style is not supported by browsers.
			/// If you want to import the html or mht file to excel, please keep the default value.
			/// The default value is false.
			/// </summary>
			 virtual void SetExportSimilarBorderStyle(bool value)=0;
			/// <summary>
			/// Indicates whether merging empty TD element forcedly when exporting file to html. 
			/// The size of html file will be reduced significantly after setting value to true. The default value is false. 
			/// If you want to import the html file to excel or export perfect grid lines when saving file to html, 
			/// please keep the default value.
			/// </summary>
			 virtual bool GetMergeEmptyTdForcely()=0;
			/// <summary>
			/// Indicates whether merging empty TD element forcedly when exporting file to html. 
			/// The size of html file will be reduced significantly after setting value to true. The default value is false. 
			/// If you want to import the html file to excel or export perfect grid lines when saving file to html, 
			/// please keep the default value.
			/// </summary>
			 virtual void SetMergeEmptyTdForcely(bool value)=0;
			/// <summary>
			/// Indicates whether exporting excel coordinate of nonblank cells when saving file to html. The default value is false.
			/// If you want to import the output html to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportCellCoordinate()=0;
			/// <summary>
			/// Indicates whether exporting excel coordinate of nonblank cells when saving file to html. The default value is false.
			/// If you want to import the output html to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportCellCoordinate(bool value)=0;
			/// <summary>
			/// Indicates whether exporting extra headings when the length of text is longer than max display column.
			/// The default value is false. If you want to import the html file to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportExtraHeadings()=0;
			/// <summary>
			/// Indicates whether exporting extra headings when the length of text is longer than max display column.
			/// The default value is false. If you want to import the html file to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportExtraHeadings(bool value)=0;
			/// <summary>
			/// Indicates whether exports sheet's row and column headings when saving to HTML files.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use HtmlSaveOptions.ExportRowColumnHeadings property.
			/// This property will be removed 12 months later since June 2022. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool GetExportHeadings()=0;
			/// <summary>
			/// Indicates whether exports sheet's row and column headings when saving to HTML files.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use HtmlSaveOptions.ExportRowColumnHeadings property.
			/// This property will be removed 12 months later since June 2022. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetExportHeadings(bool value)=0;
			/// <summary>
			/// Indicates whether exports sheet's row and column headings when saving to HTML files.
			/// </summary>
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			 virtual bool GetExportRowColumnHeadings()=0;
			/// <summary>
			/// Indicates whether exports sheet's row and column headings when saving to HTML files.
			/// </summary>
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			 virtual void SetExportRowColumnHeadings(bool value)=0;
			/// <summary>
			/// Indicates whether exporting formula when saving file to html. The default value is true.
			/// If you want to import the output html to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportFormula()=0;
			/// <summary>
			/// Indicates whether exporting formula when saving file to html. The default value is true.
			/// If you want to import the output html to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportFormula(bool value)=0;
			/// <summary>
			/// Indicates whether adding tooltip text when the data can't be fully displayed.
			/// The default value is false.
			/// </summary>
			 virtual bool GetAddTooltipText()=0;
			/// <summary>
			/// Indicates whether adding tooltip text when the data can't be fully displayed.
			/// The default value is false.
			/// </summary>
			 virtual void SetAddTooltipText(bool value)=0;
			/// <summary>
			/// Indicating whether exporting the gridlines.The default value is false.
			/// </summary>
			 virtual bool GetExportGridLines()=0;
			/// <summary>
			/// Indicating whether exporting the gridlines.The default value is false.
			/// </summary>
			 virtual void SetExportGridLines(bool value)=0;
			/// <summary>
			/// Indicating whether exporting bogus bottom row data. The default value is true.If you want to import the html or mht file
			/// to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportBogusRowData()=0;
			/// <summary>
			/// Indicating whether exporting bogus bottom row data. The default value is true.If you want to import the html or mht file
			/// to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportBogusRowData(bool value)=0;
			/// <summary>
			/// Indicating whether excludes unused styles.
			/// For the generated html files, excluding unused styles can make the file size smaller
			/// without affecting the visual effects. So the default value of this property is true.
			/// If user needs to keep all styles in the workbook for the generated html(such as the scenario that user
			/// needs to restore the workbook from the generated html later), please set this property as false.
			/// </summary>
			 virtual bool GetExcludeUnusedStyles()=0;
			/// <summary>
			/// Indicating whether excludes unused styles.
			/// For the generated html files, excluding unused styles can make the file size smaller
			/// without affecting the visual effects. So the default value of this property is true.
			/// If user needs to keep all styles in the workbook for the generated html(such as the scenario that user
			/// needs to restore the workbook from the generated html later), please set this property as false.
			/// </summary>
			 virtual void SetExcludeUnusedStyles(bool value)=0;
			/// <summary>
			/// Indicating whether exporting document properties.The default value is true.If you want to import 
			/// the html or mht file to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportDocumentProperties()=0;
			/// <summary>
			/// Indicating whether exporting document properties.The default value is true.If you want to import 
			/// the html or mht file to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportDocumentProperties(bool value)=0;
			/// <summary>
			/// Indicating whether exporting worksheet properties.The default value is true.If you want to import 
			/// the html or mht file to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportWorksheetProperties()=0;
			/// <summary>
			/// Indicating whether exporting worksheet properties.The default value is true.If you want to import 
			/// the html or mht file to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportWorksheetProperties(bool value)=0;
			/// <summary>
			/// Indicating whether exporting workbook properties.The default value is true.If you want to import 
			/// the html or mht file to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportWorkbookProperties()=0;
			/// <summary>
			/// Indicating whether exporting workbook properties.The default value is true.If you want to import 
			/// the html or mht file to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportWorkbookProperties(bool value)=0;
			/// <summary>
			/// Indicating whether exporting frame scripts and document properties. The default value is true.If you want to import the html or mht file
			/// to excel, please keep the default value.
			/// </summary>
			 virtual bool GetExportFrameScriptsAndProperties()=0;
			/// <summary>
			/// Indicating whether exporting frame scripts and document properties. The default value is true.If you want to import the html or mht file
			/// to excel, please keep the default value.
			/// </summary>
			 virtual void SetExportFrameScriptsAndProperties(bool value)=0;
			/// <summary>
			/// Indicating the rule of exporting html file data.The default value is All.
			/// </summary>
			 virtual Aspose::Cells::HtmlExportDataOptions GetExportDataOptions()=0;
			/// <summary>
			/// Indicating the rule of exporting html file data.The default value is All.
			/// </summary>
			 virtual void SetExportDataOptions(Aspose::Cells::HtmlExportDataOptions value)=0;
			/// <summary>
			/// Indicating the type of target attribute in <c>a</c>
			///  link. The default value is HtmlLinkTargetType.Parent.
			/// </summary>
			 virtual Aspose::Cells::HtmlLinkTargetType GetLinkTargetType()=0;
			/// <summary>
			/// Indicating the type of target attribute in <c>a</c>
			///  link. The default value is HtmlLinkTargetType.Parent.
			/// </summary>
			 virtual void SetLinkTargetType(Aspose::Cells::HtmlLinkTargetType value)=0;
			/// <summary>
			/// Indicating whether the output HTML is compatible with IE browser.
			/// The defalut value is false
			/// </summary>
			 virtual bool IsIECompatible()=0;
			/// <summary>
			/// Indicating whether the output HTML is compatible with IE browser.
			/// The defalut value is false
			/// </summary>
			 virtual void SetIECompatible(bool value)=0;

	};
}
}
