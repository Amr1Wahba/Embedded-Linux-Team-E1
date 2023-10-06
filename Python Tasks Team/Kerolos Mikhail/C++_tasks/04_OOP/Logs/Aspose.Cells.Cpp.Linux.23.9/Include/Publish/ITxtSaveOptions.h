#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "SaveFormat.h"
#include "Aspose.Cells.Systems/Char.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "TxtValueQuoteType.h"
#include "CellValueFormatStrategy.h"
#include "ISaveOptions.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
		enum TxtValueQuoteType;
		enum CellValueFormatStrategy;
		class ICellArea;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the save options for csv/tab delimited/other text format.
			/// </summary>
	class ASPOSE_CELLS_API ITxtSaveOptions : virtual public Aspose::Cells::ISaveOptions
	{
		public:
			/// <summary>
			/// Gets and sets char Delimiter of text file.
			/// </summary>
			 virtual Aspose::Cells::Systems::Char GetSeparator()=0;
			/// <summary>
			/// Gets and sets char Delimiter of text file.
			/// </summary>
			 virtual void SetSeparator(Aspose::Cells::Systems::Char value)=0;
			/// <summary>
			/// Gets and sets a string value as separator.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSeparatorString()=0;
			/// <summary>
			/// Gets and sets a string value as separator.
			/// </summary>
			 virtual void SetSeparatorString(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the default encoding.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Text::Encoding> GetEncoding()=0;
			/// <summary>
			/// Gets and sets the default encoding.
			/// </summary>
			 virtual void SetEncoding(intrusive_ptr<Aspose::Cells::Systems::Text::Encoding> value)=0;
			/// <summary>
			/// Indicates whether always adding '"' for each field.
			/// If true then all values will be quoted;
			/// If false then values will only be quoted when needed(for example,
			/// when values contain special characters such as '"' , '\n' or separator character).
			/// Default is false.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use QuoteType property instead.
			/// This property will be removed 12 months later since August 2012. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool GetAlwaysQuoted()=0;
			/// <summary>
			/// Indicates whether always adding '"' for each field.
			/// If true then all values will be quoted;
			/// If false then values will only be quoted when needed(for example,
			/// when values contain special characters such as '"' , '\n' or separator character).
			/// Default is false.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use QuoteType property instead.
			/// This property will be removed 12 months later since August 2012. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetAlwaysQuoted(bool value)=0;
			/// <summary>
			/// Gets or sets how to quote values in the exported text file.
			/// </summary>
			 virtual Aspose::Cells::TxtValueQuoteType GetQuoteType()=0;
			/// <summary>
			/// Gets or sets how to quote values in the exported text file.
			/// </summary>
			 virtual void SetQuoteType(Aspose::Cells::TxtValueQuoteType value)=0;
			/// <summary>
			/// Gets and sets the format strategy when exporting the cell value as string.
			/// </summary>
			 virtual Aspose::Cells::CellValueFormatStrategy GetFormatStrategy()=0;
			/// <summary>
			/// Gets and sets the format strategy when exporting the cell value as string.
			/// </summary>
			 virtual void SetFormatStrategy(Aspose::Cells::CellValueFormatStrategy value)=0;
			/// <summary>
			/// Indicates whether leading blank rows and columns should be trimmed like what ms excel does.
			/// Default is true.
			/// </summary>
			/// <remarks>
			/// Same with the rule in ms excel, a row/column will not be taken as blank if it has custom style,
			/// even if it contains no cell data.
			/// When saving with LightCells mode, this option takes no effect.
			/// User should control the output range by the implementation of <see cref="LightCellsDataProvider" />
			/// 
			/// or by speicifing <see cref="ExportArea" />
			/// </remarks>
			 virtual bool GetTrimLeadingBlankRowAndColumn()=0;
			/// <summary>
			/// Indicates whether leading blank rows and columns should be trimmed like what ms excel does.
			/// Default is true.
			/// </summary>
			/// <remarks>
			/// Same with the rule in ms excel, a row/column will not be taken as blank if it has custom style,
			/// even if it contains no cell data.
			/// When saving with LightCells mode, this option takes no effect.
			/// User should control the output range by the implementation of <see cref="LightCellsDataProvider" />
			/// 
			/// or by speicifing <see cref="ExportArea" />
			/// </remarks>
			 virtual void SetTrimLeadingBlankRowAndColumn(bool value)=0;
			/// <summary>
			/// Indicates whether tailing blank cells in one row should be trimmed. Default is false.
			/// </summary>
			/// <remarks>
			/// When saving with LightCells mode and the <see cref="ExportArea" />
			///  has not been specified,
			/// this option takes no effect and one row will be extended to just the last cell provided by
			/// the implementation <see cref="LightCellsDataProvider" />
			/// </remarks>
			 virtual bool GetTrimTailingBlankCells()=0;
			/// <summary>
			/// Indicates whether tailing blank cells in one row should be trimmed. Default is false.
			/// </summary>
			/// <remarks>
			/// When saving with LightCells mode and the <see cref="ExportArea" />
			///  has not been specified,
			/// this option takes no effect and one row will be extended to just the last cell provided by
			/// the implementation <see cref="LightCellsDataProvider" />
			/// </remarks>
			 virtual void SetTrimTailingBlankCells(bool value)=0;
			/// <summary>
			/// Indicates whether separators should be output for blank row.
			/// Default value is false so by default the content for blank row will be empty.
			/// </summary>
			 virtual bool GetKeepSeparatorsForBlankRow()=0;
			/// <summary>
			/// Indicates whether separators should be output for blank row.
			/// Default value is false so by default the content for blank row will be empty.
			/// </summary>
			 virtual void SetKeepSeparatorsForBlankRow(bool value)=0;
			/// <summary>
			/// The range of cells to be exported.
			/// </summary>
			/// <remarks>If the exported area has been specified, <see cref="TrimLeadingBlankRowAndColumn" />
			/// 
			/// will takes no effect.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetExportICellArea()=0;
			/// <summary>
			/// The range of cells to be exported.
			/// </summary>
			/// <remarks>If the exported area has been specified, <see cref="TrimLeadingBlankRowAndColumn" />
			/// 
			/// will takes no effect.
			/// </remarks>
			 virtual void 		SetExportICellArea(intrusive_ptr<Aspose::Cells::ICellArea> value)=0;
			/// <summary>
			/// Indicates whether the single quote sign should be exported as part of the value of one cell
			/// when <see cref="Style.QuotePrefix" />
			///  is true for it. Default is false.
			/// </summary>
			 virtual bool GetExportQuotePrefix()=0;
			/// <summary>
			/// Indicates whether the single quote sign should be exported as part of the value of one cell
			/// when <see cref="Style.QuotePrefix" />
			///  is true for it. Default is false.
			/// </summary>
			 virtual void SetExportQuotePrefix(bool value)=0;
			/// <summary>
			/// Indicates whether exporting all sheets to the text file.
			/// If it is false, only export the activesheet, just like MS Excel.
			/// </summary>
			/// <remarks>
			/// The defult value is false.
			/// </remarks>
			 virtual bool GetExportAllSheets()=0;
			/// <summary>
			/// Indicates whether exporting all sheets to the text file.
			/// If it is false, only export the activesheet, just like MS Excel.
			/// </summary>
			/// <remarks>
			/// The defult value is false.
			/// </remarks>
			 virtual void SetExportAllSheets(bool value)=0;

	};
}
}
