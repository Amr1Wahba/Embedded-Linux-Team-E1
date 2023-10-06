#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "TotalsCalculation.h"

namespace Aspose {
	namespace Cells {
		namespace Tables {
			enum TotalsCalculation;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IRange;
		class IStyle;
	}
}
namespace Aspose{
namespace Cells{
namespace Tables{
			/// <summary>
			/// Represents a column in a Table.
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
			///  for (int column = 0; column  4; column++)
			/// {
			/// cells[row, column].PutValue(row * column);
			///  }
			///  }
			/// ListObjectCollection tables = workbook.Worksheets[0].ListObjects;
			/// int index = tables.Add(0, 0, 9, 4, true);
			/// ListObject table = tables[0];
			/// table.ShowTotals = true;
			/// ListColumn listColumn = table.ListColumns[4];
			/// listColumn.TotalsCalculation = Aspose.Cells.Tables.TotalsCalculation.Sum;
			/// listColumn.Formula = "=[A]";
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
			///  For column As Int32 = 0 To 3
			///   cells(row, column).PutValue(row * column)
			/// Next
			/// Next
			/// Dim tables As ListObjectCollection = workbook.Worksheets(0).ListObjects
			/// Dim index As Int32 = tables.Add(0, 0, 9, 4, True)
			/// Dim table As ListObject = tables(0)
			/// table.ShowTotals = True
			/// Dim listColumn as ListColumn = table.ListColumns(4);
			/// listColumn.TotalsCalculation = Aspose.Cells.Tables.TotalsCalculation.Sum;
			/// listColumn.Formula = "=[A]";
			/// workbook.Save("Book1.xlsx")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IListColumn : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets and sets the name of the column.
			/// </summary>
			/// <remarks>
			/// If sets the name of the column, the according cell' value will be changed too.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets and sets the name of the column.
			/// </summary>
			/// <remarks>
			/// If sets the name of the column, the according cell' value will be changed too.
			/// </remarks>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the type of calculation in the Totals row of the list column.
			/// </summary>
			 virtual Aspose::Cells::Tables::TotalsCalculation GetTotalsCalculation()=0;
			/// <summary>
			/// Gets and sets the type of calculation in the Totals row of the list column.
			/// </summary>
			 virtual void SetTotalsCalculation(Aspose::Cells::Tables::TotalsCalculation value)=0;
			/// <summary>
			/// Gets the range of this list column.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetIRange()=0;
			/// <summary>
			/// Gets the formula of totals row of this list column.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <returns>The formula of this list column.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCustomTotalsRowFormula(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets the formula of totals row of this list column.
			/// </summary>
			/// <param name="formula" >the formula for this list column.</param>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			 virtual void SetCustomTotalsRowFormula(intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets and sets the formula of the list column.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula()=0;
			/// <summary>
			/// Gets and sets the formula of the list column.
			/// </summary>
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the formula of this list column.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <returns>The formula of this list column.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCustomCalculatedFormula(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Sets the formula for this list column.
			/// </summary>
			/// <param name="formula" >the formula for this list column.</param>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			 virtual void SetCustomCalculatedFormula(intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets and sets the display labels of total row.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetTotalsRowLabel()=0;
			/// <summary>
			/// Gets and sets the display labels of total row.
			/// </summary>
			 virtual void SetTotalsRowLabel(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the style of the data in this column of the table.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIDataStyle()=0;
			/// <summary>
			/// Sets the style of the data in this column of the table.
			/// </summary>
			 virtual void 		SetIDataStyle(intrusive_ptr<Aspose::Cells::IStyle> style)=0;

	};
}
}
}
