#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "TableDataSourceType.h"
#include "TableStyleType.h"

namespace Aspose {
	namespace Cells {
		namespace Tables {
			class IListColumnCollection;
			enum TableDataSourceType;
			enum TableStyleType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IRange;
		class IAutoFilter;
	}
}
namespace Aspose{
namespace Cells{
namespace Tables{
			/// <summary>
			/// Represents a list object on a worksheet.
			/// The ListObject object is a member of the ListObjects collection. 
			/// The ListObjects collection contains all the list objects on a worksheet. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// 
			/// Workbook workbook = new Workbook();
			/// Cells cells = workbook.Worksheets[0].Cells;
			/// for (int i = 0; i  5; i++)
			/// {
			/// cells[0,i].PutValue(CellsHelper.ColumnIndexToName(i));
			///  }
			/// for (int row = 1; row  10; row++)
			/// {
			///  for (int column = 0; column  5; column++)
			/// {
			/// cells[row, column].PutValue(row * column);
			///  }
			///  }
			/// ListObjectCollection tables = workbook.Worksheets[0].ListObjects;
			/// int index = tables.Add(0, 0, 9, 4, true);
			/// ListObject table = tables[0];
			/// table.ShowTotals = true;
			/// table.ListColumns[4].TotalsCalculation = Aspose.Cells.Tables.TotalsCalculation.Sum;
			/// workbook.Save(@"Book1.xlsx");
			/// 
			/// 
			/// [Visual Basic]
			/// 
			/// Dim workbook As Workbook = New Workbook()
			/// Dim cells As Cells = workbook.Worksheets(0).Cells
			/// For i As Int32 = 0 To 4
			///  cells(0, i).PutValue(CellsHelper.ColumnIndexToName(i))
			/// Next
			/// For row As Int32 = 1 To 9
			///  For column As Int32 = 0 To 4
			///   cells(row, column).PutValue(row * column)
			/// Next
			/// Next
			/// Dim tables As ListObjectCollection = workbook.Worksheets(0).ListObjects
			/// Dim index As Int32 = tables.Add(0, 0, 9, 4, True)
			/// Dim table As ListObject = tables(0)
			/// table.ShowTotals = True
			/// table.ListColumns(4).TotalsCalculation = Aspose.Cells.Tables.TotalsCalculation.Sum
			/// workbook.Save("Book1.xlsx")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IListObject : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the start row of the range.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetStartRow()=0;
			/// <summary>
			/// Gets the start column of the range.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetStartColumn()=0;
			/// <summary>
			/// Gets the end  row of the range.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetEndRow()=0;
			/// <summary>
			/// Gets the end column of the range.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetEndColumn()=0;
			/// <summary>
			/// Gets ListColumns of the ListObject.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Tables::IListColumnCollection> 		GetIListColumns()=0;
			/// <summary>
			/// Resize the range of the list object.
			/// </summary>
			/// <param name="startRow" >The start row index of the new range.</param>
			/// <param name="startColumn" >The start column index of the new range.</param>
			/// <param name="endRow" >The end row index of the new range.</param>
			/// <param name="endColumn" >The end column index of the new range.</param>
			/// <param name="hasHeaders" >Whether this table has headers.</param>
			 virtual void Resize(Aspose::Cells::Systems::Int32 startRow , Aspose::Cells::Systems::Int32 startColumn , Aspose::Cells::Systems::Int32 endRow , Aspose::Cells::Systems::Int32 endColumn , bool hasHeaders)=0;
			/// <summary>
			/// Put the value to the cell. 
			/// </summary>
			/// <param name="rowOffset" >The row offset in the table.</param>
			/// <param name="columnOffset" >The column offset in the table.</param>
			/// <param name="value" >The cell value.</param>
			 virtual void PutCellValue(Aspose::Cells::Systems::Int32 rowOffset , Aspose::Cells::Systems::Int32 columnOffset , intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Put the value to the cell. 
			/// </summary>
			/// <param name="rowOffset" >The row offset in the table.</param>
			/// <param name="columnOffset" >The column offset in the table.</param>
			/// <param name="value" >The cell value.</param>
			/// <param name="isTotalsRowLabel" >
			/// Indicates whether it is a label for total row,only works for total row.
			/// If False and this row is total row, a new row will be inserted.
			/// </param>
			 virtual void PutCellValue(Aspose::Cells::Systems::Int32 rowOffset , Aspose::Cells::Systems::Int32 columnOffset , intrusive_ptr<Aspose::Cells::Systems::Object> value , bool isTotalsRowLabel)=0;
			/// <summary>
			/// Put the formula to the cell in the table. 
			/// </summary>
			/// <param name="rowOffset" >The row offset in the table.</param>
			/// <param name="columnOffset" >The column offset in the table.</param>
			/// <param name="formula" >The formula of the cell.</param>
			 virtual void PutCellFormula(Aspose::Cells::Systems::Int32 rowOffset , Aspose::Cells::Systems::Int32 columnOffset , intrusive_ptr<Aspose::Cells::Systems::String> formula)=0;
			/// <summary>
			/// Put the formula to the cell in the table. 
			/// </summary>
			/// <param name="rowOffset" >The row offset in the table.</param>
			/// <param name="columnOffset" >The column offset in the table.</param>
			/// <param name="formula" >The formula of the cell.</param>
			/// <param name="isTotalsRowFormula" />
			/// 
			 virtual void PutCellFormula(Aspose::Cells::Systems::Int32 rowOffset , Aspose::Cells::Systems::Int32 columnOffset , intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isTotalsRowFormula)=0;
			/// <summary>
			/// Gets and sets whether this ListObject show header row.
			/// </summary>
			 virtual bool GetShowHeaderRow()=0;
			/// <summary>
			/// Gets and sets whether this ListObject show header row.
			/// </summary>
			 virtual void SetShowHeaderRow(bool value)=0;
			/// <summary>
			/// Gets and sets whether this ListObject show total row.
			/// </summary>
			 virtual bool GetShowTotals()=0;
			/// <summary>
			/// Gets and sets whether this ListObject show total row.
			/// </summary>
			 virtual void SetShowTotals(bool value)=0;
			/// <summary>
			/// Gets the data range of the ListObject.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetDataIRange()=0;
			/// <summary>
			/// Updates all list columns' name from the worksheet.
			/// </summary>
			/// <remarks>
			/// The value of the cells in the header row of the table must be same as the name of the ListColumn;
			/// Cell.PutValue do not auto modify the name of the ListColumn for performance. 
			/// </remarks>
			 virtual void UpdateColumnName()=0;
			/// <summary>
			/// Gets the data source type of the table.
			/// </summary>
			 virtual Aspose::Cells::Tables::TableDataSourceType GetDataSourceType()=0;
			/// <summary>
			/// Filter the table.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IAutoFilter> 		GetIFilter()=0;
			/// <summary>
			/// Gets auto filter.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IAutoFilter> 		GetIAutoFilter()=0;
			/// <summary>
			/// Gets and sets the display name.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDisplayName()=0;
			/// <summary>
			/// Gets and sets the display name.
			/// </summary>
			 virtual void SetDisplayName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the comment of the table.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetComment()=0;
			/// <summary>
			/// Gets and sets the comment of the table.
			/// </summary>
			 virtual void SetComment(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates whether the first column in the table should have the style applied.
			/// </summary>
			 virtual bool GetShowTableStyleFirstColumn()=0;
			/// <summary>
			/// Indicates whether the first column in the table should have the style applied.
			/// </summary>
			 virtual void SetShowTableStyleFirstColumn(bool value)=0;
			/// <summary>
			/// Indicates whether the last column in the table should have the style applied.
			/// </summary>
			 virtual bool GetShowTableStyleLastColumn()=0;
			/// <summary>
			/// Indicates whether the last column in the table should have the style applied.
			/// </summary>
			 virtual void SetShowTableStyleLastColumn(bool value)=0;
			/// <summary>
			/// Indicates whether row stripe formatting is applied.
			/// </summary>
			 virtual bool GetShowTableStyleRowStripes()=0;
			/// <summary>
			/// Indicates whether row stripe formatting is applied.
			/// </summary>
			 virtual void SetShowTableStyleRowStripes(bool value)=0;
			/// <summary>
			/// Indicates whether column stripe formatting is applied.
			/// </summary>
			 virtual bool GetShowTableStyleColumnStripes()=0;
			/// <summary>
			/// Indicates whether column stripe formatting is applied.
			/// </summary>
			 virtual void SetShowTableStyleColumnStripes(bool value)=0;
			/// <summary>
			/// Apply the table style to the range.
			/// </summary>
			 virtual void ApplyStyleToRange()=0;
			/// <summary>
			/// Convert the table to range.
			/// </summary>
			 virtual void ConvertToRange()=0;
			/// <summary>
			/// Gets and the built-in table style.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// 
			/// Workbook workbook = new Workbook("Book1.xlsx");
			/// ListObjectCollection tables = workbook.Worksheets[0].ListObjects;
			/// int index = tables.Add(0, 0, 9, 4, true);
			/// ListObject table = tables[0];
			/// table.TableStyleType = TableStyleType.TableStyleDark2;
			///  workbook.Save("TableStyle.xlsx");
			///  
			/// [Visual Basic]
			/// 
			/// Dim workbook As Workbook = New Workbook("Book1.xlsx")
			/// Dim tables As ListObjectCollection = workbook.Worksheets(0).ListObjects
			/// Dim index As Int32 = tables.Add(0, 0, 9, 4, True)
			/// Dim table As ListObject = tables(0)
			/// table.TableStyleType = TableStyleType.TableStyleDark2;
			/// workbook.Save("Book1.xlsx")
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Tables::TableStyleType GetTableStyleType()=0;
			/// <summary>
			/// Gets and the built-in table style.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// 
			/// Workbook workbook = new Workbook("Book1.xlsx");
			/// ListObjectCollection tables = workbook.Worksheets[0].ListObjects;
			/// int index = tables.Add(0, 0, 9, 4, true);
			/// ListObject table = tables[0];
			/// table.TableStyleType = TableStyleType.TableStyleDark2;
			///  workbook.Save("TableStyle.xlsx");
			///  
			/// [Visual Basic]
			/// 
			/// Dim workbook As Workbook = New Workbook("Book1.xlsx")
			/// Dim tables As ListObjectCollection = workbook.Worksheets(0).ListObjects
			/// Dim index As Int32 = tables.Add(0, 0, 9, 4, True)
			/// Dim table As ListObject = tables(0)
			/// table.TableStyleType = TableStyleType.TableStyleDark2;
			/// workbook.Save("Book1.xlsx")
			/// </code>
			/// </example>
			 virtual void SetTableStyleType(Aspose::Cells::Tables::TableStyleType value)=0;
			/// <summary>
			/// Gets and sets the table style name.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetTableStyleName()=0;
			/// <summary>
			/// Gets and sets the table style name.
			/// </summary>
			 virtual void SetTableStyleName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the alternative text.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetAlternativeText()=0;
			/// <summary>
			/// Gets and sets the alternative text.
			/// </summary>
			 virtual void SetAlternativeText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			///  Gets and sets the alternative description.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetAlternativeDescription()=0;
			/// <summary>
			///  Gets and sets the alternative description.
			/// </summary>
			 virtual void SetAlternativeDescription(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;

	};
}
}
}
