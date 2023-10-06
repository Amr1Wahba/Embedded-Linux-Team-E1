#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "CellValueType.h"
#include "Aspose.Cells.Systems/Single.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ILine;
			class IArea;
			class IShapePropertyCollection;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			class IMarker;
			class IDataLabels;
		}
	}
}
namespace Aspose {
	namespace Cells {
		enum CellValueType;
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents a single point in a series in a chart.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// 
			/// //Obtaining the reference of the first worksheet
			/// Worksheet worksheet = workbook.Worksheets[0];
			/// 
			/// //Adding a sample value to "A1" cell
			/// worksheet.Cells["A1"].PutValue(50);
			/// 
			/// //Adding a sample value to "A2" cell
			/// worksheet.Cells["A2"].PutValue(100);
			/// 
			/// //Adding a sample value to "A3" cell
			/// worksheet.Cells["A3"].PutValue(150);
			/// 
			/// //Adding a sample value to "B1" cell
			/// worksheet.Cells["B1"].PutValue(60);
			/// 
			/// //Adding a sample value to "B2" cell
			/// worksheet.Cells["B2"].PutValue(32);
			/// 
			/// //Adding a sample value to "B3" cell
			/// worksheet.Cells["B3"].PutValue(50);
			/// 
			/// //Adding a chart to the worksheet
			/// int chartIndex = worksheet.Charts.Add(ChartType.PieExploded, 5, 0, 25, 10);
			/// 
			/// //Accessing the instance of the newly added chart
			/// Chart chart = worksheet.Charts[chartIndex];
			/// 
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart.NSeries.Add("A1:B3", true);
			/// 
			/// //Show Data Labels 
			/// chart.NSeries[0].DataLabels.IsValueShown = true;
			/// 
			/// for (int i = 0; i   chart.NSeries[0].Points.Count; i++)
			/// {
			///     //Get Data Point
			///     ChartPoint point = chart.NSeries[0].Points[i];
			///     //Set Pir Explosion
			///     point.Explosion = 15;
			///     //Set Border Color
			///     point.Border.Color = System.Drawing.Color.Red;
			/// }
			/// 
			/// //Saving the Excel file
			/// workbook.Save("D:\\book1.xls");
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As New Workbook()
			/// 
			/// 'Obtaining the reference of the first worksheet
			/// Dim worksheet As Worksheet = workbook.Worksheets(0)
			/// 
			/// 'Adding a sample value to "A1" cell
			/// worksheet.Cells("A1").PutValue(50)
			/// 
			/// 'Adding a sample value to "A2" cell
			/// worksheet.Cells("A2").PutValue(100)
			/// 
			/// 'Adding a sample value to "A3" cell
			/// worksheet.Cells("A3").PutValue(150)
			/// 
			/// 'Adding a sample value to "B1" cell
			/// worksheet.Cells("B1").PutValue(60)
			/// 
			/// 'Adding a sample value to "B2" cell
			/// worksheet.Cells("B2").PutValue(32)
			/// 
			/// 'Adding a sample value to "B3" cell
			/// worksheet.Cells("B3").PutValue(50)
			/// 
			/// 'Adding a chart to the worksheet
			/// Dim chartIndex As Integer = worksheet.Charts.Add(ChartType.PieExploded, 5, 0, 25, 10)
			/// 
			/// 'Accessing the instance of the newly added chart
			/// Dim chart As Chart = worksheet.Charts(chartIndex)
			/// 
			/// 'Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart.NSeries.Add("A1:B3", True)
			/// 
			/// 'Show Data Labels 
			/// chart.NSeries(0).DataLabels.IsValueShown = True
			/// 
			/// For i As Integer = 0 To chart.NSeries(0).Points.Count - 1
			///     'Get Data Point
			///     Dim point As ChartPoint = chart.NSeries(0).Points(i)
			///     'Set Pir Explosion
			///     point.Explosion = 15
			///     'Set Border Color
			///     point.Border.Color = System.Drawing.Color.Red
			/// Next i
			/// 
			/// 'Saving the Excel file
			/// workbook.Save("D:\book1.xls")
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IChartPoint : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetExplosion()=0;
			/// <summary>
			/// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
			/// </summary>
			 virtual void SetExplosion(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// True if the chartpoint has a shadow. 
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// True if the chartpoint has a shadow. 
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// Gets the <see cref="Line" >border</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;
			/// <summary>
			/// Gets the <see cref="Area" >area</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IArea> 		GetIArea()=0;
			/// <summary>
			/// Gets the <see cref="Marker" >marker</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IMarker> 		GetIMarker()=0;
			/// <summary>
			/// Returns a DataLabels object that represents the data label associated with the point.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDataLabels> 		GetIDataLabels()=0;
			/// <summary>
			/// Gets or sets the Y value of the chart point.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> Get_YValue()=0;
			/// <summary>
			/// Gets or sets the Y value of the chart point.
			/// </summary>
			 virtual void SetYValue(intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Gets Y value type of the chart point.
			/// </summary>
			 virtual Aspose::Cells::CellValueType GetYValueType()=0;
			/// <summary>
			/// Gets or sets the X value of the chart point.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetXValue()=0;
			/// <summary>
			/// Gets or sets the X value of the chart point.
			/// </summary>
			 virtual void SetXValue(intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Gets X value type of the chart point.
			/// </summary>
			 virtual Aspose::Cells::CellValueType GetXValueType()=0;
			/// <summary>
			/// Gets the <seealso cref="ShapePropertyCollection" />
			///  object that holds the visual shape properties of the ChartPoint.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapePropertyCollection> 		GetIShapeProperties()=0;
			/// <summary>
			/// Gets or sets a value indicates whether this data points is in the second pie or bar
			/// on a pie of pie or bar of pie chart
			/// </summary>
			 virtual bool IsInSecondaryPlot()=0;
			/// <summary>
			/// Gets or sets a value indicates whether this data points is in the second pie or bar
			/// on a pie of pie or bar of pie chart
			/// </summary>
			 virtual void SetInSecondaryPlot(bool value)=0;
			/// <summary>
			/// Gets the x coordinate of the upper left corner in units of 1/4000 of chart's width after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetShapeX()=0;
			/// <summary>
			/// Gets the y coordinate of the upper left corner in units of 1/4000 of chart's height after calls Chart.Calculate() method.		
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetShapeY()=0;
			/// <summary>
			/// Gets the width in units of 1/4000 of chart's width after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetShapeWidth()=0;
			/// <summary>
			/// Gets the height in units of 1/4000 of chart's height after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetShapeHeight()=0;
			/// <summary>
			/// Gets the x coordinate of the upper left corner in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetShapeXPx()=0;
			/// <summary>
			/// Gets the y coordinate of the upper left corner in units of pixels after calls Chart.Calculate() method.		
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetShapeYPx()=0;
			/// <summary>
			/// Gets the width in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetShapeWidthPx()=0;
			/// <summary>
			/// Gets the height in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetShapeHeightPx()=0;
			/// <summary>
			/// Gets the width of border in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetBorderWidthPx()=0;
			/// <summary>
			/// Gets the radius of bubble, pie or doughnut in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetRadiusPx()=0;
			/// <summary>
			/// Gets the inner radius of doughnut slice in units of pixels after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetInnerRadiusPx()=0;
			/// <summary>
			/// Gets the starting angle for the pie section, measured in degrees clockwise from the x-axis after calls Chart.Calculate() method.
			/// Applies to Pie chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetStartAngle()=0;
			/// <summary>
			/// Gets the ending angle for the pie section, measured in degrees clockwise from the x-axis after calls Chart.Calculate() method.
			/// Applies to Pie chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetEndAngle()=0;
			/// <summary>
			/// Gets the x coordinate of starting point for the pie section after calls Chart.Calculate() method.
			/// Applies to Pie and Doughnut  chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetArcStartPointXPx()=0;
			/// <summary>
			/// Gets the y coordinate of starting point for the pie section after calls Chart.Calculate() method.
			/// Applies to Pie and Doughnut  chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetArcStartPointYPx()=0;
			/// <summary>
			/// Gets the x coordinate of ending point for the pie section after calls Chart.Calculate() method.
			/// Applies to Pie and Doughnut  chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetArcEndPointXPx()=0;
			/// <summary>
			/// Gets the y coordinate of ending point for the pie section after calls Chart.Calculate() method.
			/// Applies to Pie and Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetArcEndPointYPx()=0;
			/// <summary>
			/// Gets the x coordinate of starting point for the pie section after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetInnerArcStartPointXPx()=0;
			/// <summary>
			/// Gets the y coordinate of starting point for the pie section after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetInnerArcStartPointYPx()=0;
			/// <summary>
			/// Gets the x coordinate of ending point for the pie section after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetInnerArcEndPointXPx()=0;
			/// <summary>
			/// Gets the y coordinate of ending point for the pie section after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetInnerArcEndPointYPx()=0;
			/// <summary>
			/// Gets the number of top points after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetTopPointCount()=0;
			/// <summary>
			/// Gets x-coordinate of the top point of shape after calls Chart.Calculate() method.
			/// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid and Area3D
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetTopPointXPx(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets y-coordinate of the top point of shape after calls Chart.Calculate() method.
			/// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid and Area3D
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetTopPointYPx(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the number of bottom points  after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetBottomPointCount()=0;
			/// <summary>
			/// Gets x-coordinate of the bottom point of shape after calls Chart.Calculate() method.
			/// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetBottomPointXPx(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets y-coordinate of the bottom point of shape  after calls Chart.Calculate() method.
			/// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetBottomPointYPx(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the number of the points on category axis after calls Chart.Calculate() method. Only applies to area chart.
			/// </summary>
			/// <remarks>
			/// Area 2D chart return 1
			/// Area 3D chart return 2.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetOnCategoryAxisPointCount()=0;
			/// <summary>
			/// Gets x-coordinate of the point on category axis after calls Chart.Calculate() method. Only applies to Area chart.
			/// </summary>
			/// <remarks>
			/// Area 2D chart: index is 0.
			/// Area 3D chart: index is 0 or 1.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Single GetOnCategoryAxisPointXPx(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets y-coordinate of the point on category axis after calls Chart.Calculate() method. Only applies to Area chart.
			/// </summary>
			/// <remarks>
			/// Area 2D chart: index is 0.
			/// Area 3D chart: index is 0 or 1.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Single GetOnCategoryAxisPointYPx(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
}
