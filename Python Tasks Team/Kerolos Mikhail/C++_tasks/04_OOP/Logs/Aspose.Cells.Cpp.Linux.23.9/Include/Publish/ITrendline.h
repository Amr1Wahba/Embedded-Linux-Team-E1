#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "TrendlineType.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Double.h"
#include "ILine.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum TrendlineType;
			class IDataLabels;
			class ILegendEntry;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents a trendline in a chart.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
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
			/// //adding a linear trendline
			/// int index = chart.NSeries[0].TrendLines.Add(TrendlineType.Linear);
			/// Trendline trendline = chart.NSeries[0].TrendLines[index];
			/// //Setting the custom name of the trendline.
			/// trendline.Name = "Linear";
			/// //Displaying the equation on chart
			/// trendline.DisplayEquation = true;
			/// //Displaying the R-Squared value on chart
			/// trendline.DisplayRSquared = true;
			/// //Saving the Excel file
			/// workbook.Save("C:\\book1.xls");
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// 'Adding a new worksheet to the Excel object
			/// Dim sheetIndex As Int32 = workbook.Worksheets.Add()
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
			/// Dim chartIndex As Int32 = worksheet.Charts.Add(ChartType.Column, 5, 0, 15, 5)
			/// 'Accessing the instance of the newly added chart
			/// Dim chart As Chart = worksheet.Charts(chartIndex)
			/// 'Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B4"
			/// chart.NSeries.Add("A1:B4", True)
			/// 'Setting the data source for the category data of NSeries
			/// Chart.NSeries.CategoryData = "C1:C4"
			/// 'adding a linear trendline
			/// Dim index As Int32 = chart.NSeries(0).TrendLines.Add(TrendlineType.Linear)
			/// Dim trendline As Trendline = chart.NSeries(0).TrendLines(index)
			/// 'Setting the custom name of the trendline.
			/// trendline.Name = "Linear"
			/// 'Displaying the equation on chart
			/// trendline.DisplayEquation = True
			/// 'Displaying the R-Squared value on chart
			/// trendline.DisplayRSquared = True
			/// 'Saving the Excel file
			/// workbook.Save("C:\\book1.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ITrendline : virtual public Aspose::Cells::Drawing::ILine
	{
		public:
			/// <summary>
			/// Returns if Microsoft Excel automatically determines the name of the trendline. 
			/// </summary>
			 virtual bool IsNameAuto()=0;
			/// <summary>
			/// Returns if Microsoft Excel automatically determines the name of the trendline. 
			/// </summary>
			 virtual void SetNameAuto(bool value)=0;
			/// <summary>
			/// Returns the trendline type.
			/// </summary>
			 virtual Aspose::Cells::Charts::TrendlineType GetType()=0;
			/// <summary>
			/// Returns the name of the trendline.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Returns the name of the trendline.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Returns or sets the trendline order (an integer greater than 1) when the trendline type is Polynomial. 
			/// The order must be between 2 and 6.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetOrder()=0;
			/// <summary>
			/// Returns or sets the trendline order (an integer greater than 1) when the trendline type is Polynomial. 
			/// The order must be between 2 and 6.
			/// </summary>
			 virtual void SetOrder(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Returns or sets the period for the moving-average trendline.
			/// </summary>
			/// <remarks>This value should be between 2 and 255.
			/// And it must be less than the number of the chart points in the series</remarks>
			 virtual Aspose::Cells::Systems::Int32 GetPeriod()=0;
			/// <summary>
			/// Returns or sets the period for the moving-average trendline.
			/// </summary>
			/// <remarks>This value should be between 2 and 255.
			/// And it must be less than the number of the chart points in the series</remarks>
			 virtual void SetPeriod(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends forward.
			/// The number of periods must be greater than and equal to zero.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetForward()=0;
			/// <summary>
			/// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends forward.
			/// The number of periods must be greater than and equal to zero.
			/// </summary>
			 virtual void SetForward(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends backward. 
			/// The number of periods must be greater than and equal to zero.
			/// If the chart type is column ,the number of periods must be between 0 and 0.5
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetBackward()=0;
			/// <summary>
			/// Returns or sets the number of periods (or units on a scatter chart) that the trendline extends backward. 
			/// The number of periods must be greater than and equal to zero.
			/// If the chart type is column ,the number of periods must be between 0 and 0.5
			/// </summary>
			 virtual void SetBackward(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents if the equation for the trendline is displayed on the chart (in the same data label as the R-squared value). Setting this property to True automatically turns on data labels. 
			/// </summary>
			 virtual bool GetDisplayEquation()=0;
			/// <summary>
			/// Represents if the equation for the trendline is displayed on the chart (in the same data label as the R-squared value). Setting this property to True automatically turns on data labels. 
			/// </summary>
			 virtual void SetDisplayEquation(bool value)=0;
			/// <summary>
			/// Represents if the R-squared value of the trendline is displayed on the chart (in the same data label as the equation). Setting this property to True automatically turns on data labels. 
			/// </summary>
			 virtual bool GetDisplayRSquared()=0;
			/// <summary>
			/// Represents if the R-squared value of the trendline is displayed on the chart (in the same data label as the equation). Setting this property to True automatically turns on data labels. 
			/// </summary>
			 virtual void SetDisplayRSquared(bool value)=0;
			/// <summary>
			/// Returns or sets the point where the trendline crosses the value axis.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetIntercept()=0;
			/// <summary>
			/// Returns or sets the point where the trendline crosses the value axis.
			/// </summary>
			 virtual void SetIntercept(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the DataLabels object for the specified ASeries. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDataLabels> 		GetIDataLabels()=0;
			/// <summary>
			/// Gets the legend entry according to this trendline
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ILegendEntry> 		GetILegendEntry()=0;

	};
}
}
}
