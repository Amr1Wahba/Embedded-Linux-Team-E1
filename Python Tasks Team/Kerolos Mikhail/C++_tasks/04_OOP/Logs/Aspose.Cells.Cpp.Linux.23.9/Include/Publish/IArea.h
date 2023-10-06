#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "FormattingType.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum FormattingType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IFillFormat;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents an area format.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// //Adding a new worksheet to the Workbook object
			/// int sheetIndex = workbook.Worksheets.Add();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Worksheet worksheet = workbook.Worksheets[sheetIndex];
			/// //Adding a sample value to "A1" cell
			/// worksheet.Cells["A1"].PutValue(50);
			/// //Adding a sample value to "A2" cell
			/// worksheet.Cells["A2"].PutValue(100);
			/// //Adding a sample value to "A3" cell
			/// worksheet.Cells["A3"].PutValue(150);
			/// //Adding a sample value to "B1" cell
			/// worksheet.Cells["B1"].PutValue(60);
			/// //Adding a sample value to "B2" cell
			/// worksheet.Cells["B2"].PutValue(32);
			/// //Adding a sample value to "B3" cell
			/// worksheet.Cells["B3"].PutValue(50);
			/// //Adding a chart to the worksheet
			/// int chartIndex = worksheet.Charts.Add(ChartType.Column, 5, 0, 15, 5);
			/// //Accessing the instance of the newly added chart
			/// Chart chart = worksheet.Charts[chartIndex];
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart.NSeries.Add("A1:B3", true);
			/// //Setting the foreground color of the plot area
			/// chart.PlotArea.Area.ForegroundColor = Color.Blue;
			/// //Setting the foreground color of the chart area
			/// chart.ChartArea.Area.ForegroundColor = Color.Yellow;
			/// //Setting the foreground color of the 1st NSeries area
			/// chart.NSeries[0].Area.ForegroundColor = Color.Red;
			/// //Setting the foreground color of the area of the 1st NSeries point
			/// chart.NSeries[0].Points[0].Area.ForegroundColor = Color.Cyan;
			/// //Saving the Excel file
			/// workbook.Save("C:\\book1.xls");
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// 'Adding a new worksheet to the Workbook object
			/// Dim sheetIndex As Integer = workbook.Worksheets.Add()
			/// 'Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Dim worksheet As Worksheet = workbook.Worksheets(sheetIndex)
			/// 'Adding a sample value to "A1" cell
			/// worksheet.Cells("A1").PutValue(50)
			/// 'Adding a sample value to "A2" cell
			/// worksheet.Cells("A2").PutValue(100)
			/// 'Adding a sample value to "A3" cell
			/// worksheet.Cells("A3").PutValue(150)
			/// 'Adding a sample value to "B1" cell
			/// worksheet.Cells("B1").PutValue(60)
			/// 'Adding a sample value to "B2" cell
			/// worksheet.Cells("B2").PutValue(32)
			/// 'Adding a sample value to "B3" cell
			/// worksheet.Cells("B3").PutValue(50)
			/// 'Adding a chart to the worksheet
			/// Dim chartIndex As Integer = worksheet.Charts.Add(ChartType.Column, 5, 0, 15, 5)
			/// 'Accessing the instance of the newly added chart
			/// Dim chart As Chart = worksheet.Charts(chartIndex)
			/// 'Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart.NSeries.Add("A1:B3", True)
			/// 'Setting the foreground color of the plot area
			/// chart.PlotArea.Area.ForegroundColor = Color.Blue
			/// 'Setting the foreground color of the chart area
			/// chart.ChartArea.Area.ForegroundColor = Color.Yellow
			/// 'Setting the foreground color of the 1st NSeries area
			/// chart.NSeries(0).Area.ForegroundColor = Color.Red
			/// 'Setting the foreground color of the area of the 1st NSeries point
			/// chart.NSeries(0).Points(0).Area.ForegroundColor = Color.Cyan
			/// 'Saving the Excel file
			/// workbook.Save("C:\book1.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IArea : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets or sets the background <see cref="System.Drawing.Color" />
			///  of the <see cref="Area" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetBackgroundColor()=0;
			/// <summary>
			/// Gets or sets the background <see cref="System.Drawing.Color" />
			///  of the <see cref="Area" />
			/// .
			/// </summary>
			 virtual void SetBackgroundColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets or sets the foreground <see cref="System.Drawing.Color" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetForegroundColor()=0;
			/// <summary>
			/// Gets or sets the foreground <see cref="System.Drawing.Color" />
			/// .
			/// </summary>
			 virtual void SetForegroundColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Represents the formatting of the area.
			/// </summary>
			 virtual Aspose::Cells::Charts::FormattingType GetFormatting()=0;
			/// <summary>
			/// Represents the formatting of the area.
			/// </summary>
			 virtual void SetFormatting(Aspose::Cells::Charts::FormattingType value)=0;
			/// <summary>
			/// If the property is true and the value of chart point is a negative number,
			/// the foreground color and background color will be exchanged.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// //Adding a new worksheet to the Workbook object
			/// int sheetIndex = workbook.Worksheets.Add();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Worksheet worksheet = workbook.Worksheets[sheetIndex];
			/// //Adding a sample value to "A1" cell
			/// worksheet.Cells["A1"].PutValue(50);
			/// //Adding a sample value to "A2" cell
			/// worksheet.Cells["A2"].PutValue(-100);
			/// //Adding a sample value to "A3" cell
			/// worksheet.Cells["A3"].PutValue(150);
			/// //Adding a chart to the worksheet
			/// int chartIndex = worksheet.Charts.Add(ChartType.Column, 5, 0, 15, 5);
			/// //Accessing the instance of the newly added chart
			/// Chart chart = worksheet.Charts[chartIndex];
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "A3"
			/// chart.NSeries.Add("A1:A3", true);
			/// chart.NSeries[0].Area.InvertIfNegative = true;
			/// //Setting the foreground color of the 1st NSeries area
			/// chart.NSeries[0].Area.ForegroundColor = Color.Red;
			/// //Setting the background color of the 1st NSeries area.
			/// //The displayed area color of second chart point will be the background color.
			/// chart.NSeries[0].Area.BackgroundColor = Color.Yellow;
			/// //Saving the Excel file
			/// workbook.Save("C:\\book1.xls");
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// 'Adding a new worksheet to the Workbook object
			/// Dim sheetIndex As Integer = workbook.Worksheets.Add()
			/// 'Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Dim worksheet As Worksheet = workbook.Worksheets(sheetIndex)
			/// 'Adding a sample value to "A1" cell
			/// worksheet.Cells("A1").PutValue(50)
			/// 'Adding a sample value to "A2" cell
			/// worksheet.Cells("A2").PutValue(-100)
			/// 'Adding a sample value to "A3" cell
			/// worksheet.Cells("A3").PutValue(150)
			/// 'Adding a chart to the worksheet
			/// Dim chartIndex As Integer = worksheet.Charts.Add(ChartType.Column, 5, 0, 15, 5)
			/// 'Accessing the instance of the newly added chart
			/// Dim chart As Chart = worksheet.Charts(chartIndex)
			/// 'Adding NSeries (chart data source) to the chart ranging from "A1" cell to "A3"
			/// chart.NSeries.Add("A1:A3", True)
			/// chart.NSeries(0).Area.InvertIfNegative = True
			/// 'Setting the foreground color of the 1st NSeries area
			/// chart.NSeries(0).Area.ForegroundColor = Color.Red
			/// 'Setting the background color of the 1st NSeries area.
			/// 'The displayed area color of second chart point will be the background color.
			/// chart.NSeries(0).Area.BackgroundColor = Color.Yellow
			/// 'Saving the Excel file
			/// workbook.Save("C:\book1.xls")
			/// 
			/// </code>
			/// </example>
			 virtual bool GetInvertIfNegative()=0;
			/// <summary>
			/// If the property is true and the value of chart point is a negative number,
			/// the foreground color and background color will be exchanged.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// //Adding a new worksheet to the Workbook object
			/// int sheetIndex = workbook.Worksheets.Add();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Worksheet worksheet = workbook.Worksheets[sheetIndex];
			/// //Adding a sample value to "A1" cell
			/// worksheet.Cells["A1"].PutValue(50);
			/// //Adding a sample value to "A2" cell
			/// worksheet.Cells["A2"].PutValue(-100);
			/// //Adding a sample value to "A3" cell
			/// worksheet.Cells["A3"].PutValue(150);
			/// //Adding a chart to the worksheet
			/// int chartIndex = worksheet.Charts.Add(ChartType.Column, 5, 0, 15, 5);
			/// //Accessing the instance of the newly added chart
			/// Chart chart = worksheet.Charts[chartIndex];
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "A3"
			/// chart.NSeries.Add("A1:A3", true);
			/// chart.NSeries[0].Area.InvertIfNegative = true;
			/// //Setting the foreground color of the 1st NSeries area
			/// chart.NSeries[0].Area.ForegroundColor = Color.Red;
			/// //Setting the background color of the 1st NSeries area.
			/// //The displayed area color of second chart point will be the background color.
			/// chart.NSeries[0].Area.BackgroundColor = Color.Yellow;
			/// //Saving the Excel file
			/// workbook.Save("C:\\book1.xls");
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// 'Adding a new worksheet to the Workbook object
			/// Dim sheetIndex As Integer = workbook.Worksheets.Add()
			/// 'Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Dim worksheet As Worksheet = workbook.Worksheets(sheetIndex)
			/// 'Adding a sample value to "A1" cell
			/// worksheet.Cells("A1").PutValue(50)
			/// 'Adding a sample value to "A2" cell
			/// worksheet.Cells("A2").PutValue(-100)
			/// 'Adding a sample value to "A3" cell
			/// worksheet.Cells("A3").PutValue(150)
			/// 'Adding a chart to the worksheet
			/// Dim chartIndex As Integer = worksheet.Charts.Add(ChartType.Column, 5, 0, 15, 5)
			/// 'Accessing the instance of the newly added chart
			/// Dim chart As Chart = worksheet.Charts(chartIndex)
			/// 'Adding NSeries (chart data source) to the chart ranging from "A1" cell to "A3"
			/// chart.NSeries.Add("A1:A3", True)
			/// chart.NSeries(0).Area.InvertIfNegative = True
			/// 'Setting the foreground color of the 1st NSeries area
			/// chart.NSeries(0).Area.ForegroundColor = Color.Red
			/// 'Setting the background color of the 1st NSeries area.
			/// 'The displayed area color of second chart point will be the background color.
			/// chart.NSeries(0).Area.BackgroundColor = Color.Yellow
			/// 'Saving the Excel file
			/// workbook.Save("C:\book1.xls")
			/// 
			/// </code>
			/// </example>
			 virtual void SetInvertIfNegative(bool value)=0;
			/// <summary>
			/// Represents a <seealso cref="FillFormat" />
			///  object that contains fill formatting properties for the specified chart or shape.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IFillFormat> 		GetIFillFormat()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::Systems::Double value)=0;

	};
}
}
}
