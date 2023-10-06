#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			class ISeries;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates a collection of <see cref="Series" />
			///  objects.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// //Adding a new worksheet to the Excel object
			/// int sheetIndex = workbook.Worksheets.Add();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Worksheet worksheet = workbook.Worksheets[sheetIndex];
			/// //Adding a sample value to "A1" cell
			/// worksheet.Cells["A1"].PutValue(50);
			/// //Adding a sample value to "A2" cell
			/// worksheet.Cells["A2"].PutValue(100);
			/// //Adding a sample value to "A3" cell
			/// worksheet.Cells["A3"].PutValue(150);
			/// //Adding a sample value to "A4" cell
			/// worksheet.Cells["A4"].PutValue(200);
			/// //Adding a sample value to "B1" cell
			/// worksheet.Cells["B1"].PutValue(60);
			/// //Adding a sample value to "B2" cell
			/// worksheet.Cells["B2"].PutValue(32);
			/// //Adding a sample value to "B3" cell
			/// worksheet.Cells["B3"].PutValue(50);
			/// //Adding a sample value to "B4" cell
			/// worksheet.Cells["B4"].PutValue(40);
			/// //Adding a sample value to "C1" cell as category data
			/// worksheet.Cells["C1"].PutValue("Q1");
			/// //Adding a sample value to "C2" cell as category data
			/// worksheet.Cells["C2"].PutValue("Q2");
			/// //Adding a sample value to "C3" cell as category data
			/// worksheet.Cells["C3"].PutValue("Y1");
			/// //Adding a sample value to "C4" cell as category data
			/// worksheet.Cells["C4"].PutValue("Y2");
			/// //Adding a chart to the worksheet
			/// int chartIndex = worksheet.Charts.Add(ChartType.Column, 5, 0, 15, 5);
			/// //Accessing the instance of the newly added chart
			/// Chart chart = worksheet.Charts[chartIndex];
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B4"
			/// chart.NSeries.Add("A1:B4", true);
			/// //Setting the data source for the category data of NSeries
			/// chart.NSeries.CategoryData = "C1:C4";
			/// //Saving the Excel file
			/// workbook.Save("C:\\book1.xls");
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// 'Adding a new worksheet to the Excel object
			/// Dim sheetIndex As Integer = workbook.Worksheets.Add()
			/// 'Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Dim worksheet As Worksheet = workbook.Worksheets(sheetIndex)
			/// 'Adding a sample value to "A1" cell
			/// worksheet.Cells("A1").PutValue(50)
			/// 'Adding a sample value to "A2" cell
			/// worksheet.Cells("A2").PutValue(100)
			/// 'Adding a sample value to "A3" cell
			/// worksheet.Cells("A3").PutValue(150)
			/// 'Adding a sample value to "A4" cell
			/// worksheet.Cells("A4").PutValue(200)
			/// 'Adding a sample value to "B1" cell
			/// worksheet.Cells("B1").PutValue(60)
			/// 'Adding a sample value to "B2" cell
			/// worksheet.Cells("B2").PutValue(32)
			/// 'Adding a sample value to "B3" cell
			/// worksheet.Cells("B3").PutValue(50)
			/// 'Adding a sample value to "B4" cell
			/// worksheet.Cells("B4").PutValue(40)
			/// 'Adding a sample value to "C1" cell as category data
			/// worksheet.Cells("C1").PutValue("Q1")
			/// 'Adding a sample value to "C2" cell as category data
			/// worksheet.Cells("C2").PutValue("Q2")
			/// 'Adding a sample value to "C3" cell as category data
			/// worksheet.Cells("C3").PutValue("Y1")
			/// 'Adding a sample value to "C4" cell as category data
			/// worksheet.Cells("C4").PutValue("Y2")
			/// 'Adding a chart to the worksheet
			/// Dim chartIndex As Integer = worksheet.Charts.Add(ChartType.Column, 5, 0, 15, 5)
			/// 'Accessing the instance of the newly added chart
			/// Dim chart As Chart = worksheet.Charts(chartIndex)
			/// 'Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B4"
			/// chart.NSeries.Add("A1:B4", True)
			/// 'Setting the data source for the category data of NSeries
			/// chart.NSeries.CategoryData = "C1:C4"
			/// 'Saving the Excel file
			/// workbook.Save("C:\book1.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ISeriesCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			///  Gets the <see cref="Series" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ISeries> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the <see cref="Series" />
			///  element by order.
			/// </summary>
			/// <param name="order" >The order of series</param>
			/// <returns>The element series</returns>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ISeries> 		GetISeriesByOrder(Aspose::Cells::Systems::Int32 order)=0;
			/// <summary>
			/// Remove at a series at the specific index.
			/// </summary>
			/// <param name="index" >The index.</param>
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets or sets the range of category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCategoryData()=0;
			/// <summary>
			/// Gets or sets the range of category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  </summary>
			 virtual void SetCategoryData(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets or sets the range of second category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  Only effects when some ASerieses plot on the second axis.
			///  </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSecondCategoryData()=0;
			/// <summary>
			/// Gets or sets the range of second category Axis values. 
			///  It can be a range of cells (such as, "d1:e10"), 
			///  or a sequence of values (such as,"{2,6,8,10}"). 
			///  Only effects when some ASerieses plot on the second axis.
			///  </summary>
			 virtual void SetSecondCategoryData(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Directly changes the orders of the two series.
			/// </summary>
			/// <param name="sourceIndex" >The current index</param>
			/// <param name="destIndex" >The dest index</param>
			 virtual void ChangeSeriesOrder(Aspose::Cells::Systems::Int32 sourceIndex , Aspose::Cells::Systems::Int32 destIndex)=0;
			/// <summary>
			/// Sets the name of all the serieses in the chart.
			/// </summary>
			/// <param name="startIndex" >The index of the first series which you want to set the name.</param>
			/// <param name="area" >Specifies the area for the series name.</param>
			/// <param name="isVertical" >>Specifies whether to plot the series from a range of cell values by row or by column.</param>
			/// <remarks><br>If the start index is larger than the count of the serieses, it will return and do nothing.</br>
			/// <br>If set data on contiguous cells, use colon to seperate them.For example, $C$2:$C$5.</br>
			/// <br>If set data on contiguous cells, use comma to seperate them.For example, ($C$2,$D$5).</br>
			/// </remarks>
			 virtual void SetSeriesNames(Aspose::Cells::Systems::Int32 startIndex , intrusive_ptr<Aspose::Cells::Systems::String> area , bool isVertical)=0;
			/// <summary>
			/// Adds the <see cref="SeriesCollection" />
			///  collection to a chart.
			/// </summary>
			/// <param name="area" >Specifies values from which to plot the data series</param>
			/// <param name="isVertical" >Specifies whether to plot the series from a range of cell values by row or by column.</param>
			/// <returns>Return the first index of the added ASeries in the NSeries.</returns>
			/// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, R[1]C[1]:R[3]C[2].</br>
			/// <br>If set data on contiguous cells, use comma to seperate them.For example,(R[1]C[1],R[3]C[2]).</br>
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 AddR1C1(intrusive_ptr<Aspose::Cells::Systems::String> area , bool isVertical)=0;
			/// <summary>
			/// Adds the <see cref="SeriesCollection" />
			///  collection to a chart.
			/// </summary>
			/// <param name="area" >Specifies values from which to plot the data series</param>
			/// <param name="isVertical" >Specifies whether to plot the series from a range of cell values by row or by column.</param>
			/// <returns>Return the first index of the added ASeries in the NSeries.</returns>
			/// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, $C$2:$C$5.</br>
			/// <br>If set data on non contiguous cells, use comma to seperate them.For example: ($C$2,$D$5).</br>
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(intrusive_ptr<Aspose::Cells::Systems::String> area , bool isVertical)=0;
			/// <summary>
			/// Adds the <see cref="SeriesCollection" />
			///  collection to a chart.
			/// </summary>
			/// <param name="area" >Specifies values from which to plot the data series</param>
			/// <param name="isVertical" >Specifies whether to plot the series from a range of cell values by row or by column.</param>
			/// <param name="checkLabels" >Indicates whether the range contains series's name</param>
			/// <returns>Return the first index of the added ASeries in the NSeries.</returns>
			/// <remarks><br>If set data on contiguous cells, use colon to seperate them.For example, $C$2:$C$5.</br>
			/// <br>If set data on non contiguous cells, use comma to seperate them.For example, ($C$2,$D$5).</br>
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(intrusive_ptr<Aspose::Cells::Systems::String> area , bool isVertical , bool checkLabels)=0;
			/// <summary>
			/// Represents if the color of points is varied. 
			/// </summary>
			 virtual bool IsColorVaried()=0;
			/// <summary>
			/// Represents if the color of points is varied. 
			/// </summary>
			 virtual void SetColorVaried(bool value)=0;
			/// <summary>
			/// Clears the collection
			/// </summary>
			 virtual void Clear()=0;

	};
}
}
}
