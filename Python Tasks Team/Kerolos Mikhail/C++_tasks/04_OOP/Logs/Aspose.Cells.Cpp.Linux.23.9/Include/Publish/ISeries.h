#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Bar3DShapeType.h"
#include "ChartType.h"
#include "Aspose.Cells.Systems/Int16.h"
#include "ChartSplitType.h"
#include "Aspose.Cells.Systems/Double.h"
#include "BubbleSizeRepresents.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			class IChartPointCollection;
			class ITrendlineCollection;
			enum Bar3DShapeType;
			class IDataLabels;
			enum ChartType;
			class IMarker;
			class IErrorBar;
			class IDropBars;
			enum ChartSplitType;
			enum BubbleSizeRepresents;
			class ILegendEntry;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IArea;
			class ILine;
			class IShapePropertyCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents a single data series in a chart.
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
			/// int seriesIndex = chart.NSeries.Add("A1:B4", true);
			/// //Setting the data source for the category data of NSeries
			/// chart.NSeries.CategoryData = "C1:C4";
			/// Series series = chart.NSeries[seriesIndex];
			/// //Setting the values of the series.
			/// series.Values = "=B1:B4";
			/// //Changing the chart type of the series.
			/// series.Type = ChartType.Line;
			/// //Setting marker properties.
			/// series.Marker.MarkerStyle = ChartMarkerType.Circle;
			/// series.Marker.ForegroundColorSetType = FormattingType.Automatic;
			/// series.Marker.ForegroundColor = System.Drawing.Color.Black;
			/// series.Marker.BackgroundColorSetType = FormattingType.Automatic;
			/// 
			/// //do your business
			/// 
			/// //Saving the Excel file
			/// workbook.Save("book1.xls");
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
			/// Dim seriesIndex As Int32 = chart.NSeries.Add("A1:B4", True)
			/// 'Setting the data source for the category data of NSeries
			/// chart.NSeries.CategoryData = "C1:C4"
			/// Dim series As Series = chart.NSeries(seriesIndex)
			/// 'Setting the values of the series.
			/// series.Values = "=B1:B4"
			/// 'Changing the chart type of the series.
			/// series.Type = ChartType.Line
			/// 'Setting marker properties.
			/// series.Marker.MarkerStyle = ChartMarkerType.Circle
			/// series.Marker.ForegroundColorSetType = FormattingType.Automatic
			/// series.Marker.ForegroundColor = System.Drawing.Color.Black
			/// series.Marker.BackgroundColorSetType = FormattingType.Automatic
			/// 'Saving the Excel file
			/// workbook.Save("book1.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ISeries : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates whether the series is selected or filtered.True represents this series is filtered, and it will not be displayed on the chart.
			/// </summary>
			 virtual bool IsFiltered()=0;
			/// <summary>
			/// Indicates whether the series is selected or filtered.True represents this series is filtered, and it will not be displayed on the chart.
			/// </summary>
			 virtual void SetFiltered(bool value)=0;
			/// <summary>
			/// Moves the series up or down.
			/// </summary>
			/// <param name="count" >The number of moving up or down.
			/// Move the series up if this is less than zero;
			/// Move the series down if this is greater than zero.
			/// </param>
			 virtual void Move(Aspose::Cells::Systems::Int32 count)=0;
			/// <summary>
			/// Gets the collection of points in a series in a chart.
			/// </summary>
			/// <remarks>
			/// When the chart is Pie of Pie or Bar of Pie, the last point is other point in first pie plot.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IChartPointCollection> 		GetIPoints()=0;
			/// <summary>
			/// Represents the background area of Series object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IArea> 		GetIArea()=0;
			/// <summary>
			/// Represents border of Series object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;
			/// <summary>
			/// Gets or sets the name of the data series.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// //Reference name to a cell
			/// chart.NSeries[0].Name = "=A1";
			/// 
			/// //Set a string to name
			/// chart.NSeries[0].Name = "First Series";
			/// [Visual Basic]
			/// 
			/// 'Reference name to a cell
			/// chart.NSeries[0].Name = "=A1"
			/// 
			/// 'Set a string to name
			/// chart.NSeries[0].Name = "First Series"
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets or sets the name of the data series.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// //Reference name to a cell
			/// chart.NSeries[0].Name = "=A1";
			/// 
			/// //Set a string to name
			/// chart.NSeries[0].Name = "First Series";
			/// [Visual Basic]
			/// 
			/// 'Reference name to a cell
			/// chart.NSeries[0].Name = "=A1"
			/// 
			/// 'Set a string to name
			/// chart.NSeries[0].Name = "First Series"
			/// </code>
			/// </example>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the series's name that displays on the chart graph.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDisplayName()=0;
			/// <summary>
			/// Gets the number of the data values.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCountOfDataValues()=0;
			/// <summary>
			/// Indicates whether the data source is vertical.
			/// </summary>
			 virtual bool IsVerticalValues()=0;
			/// <summary>
			/// Represents the data of the chart series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetValues()=0;
			/// <summary>
			/// Represents the data of the chart series.
			/// </summary>
			 virtual void SetValues(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents format code of Values‘s NumberList.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetValuesFormatCode()=0;
			/// <summary>
			/// Represents format code of Values‘s NumberList.
			/// </summary>
			 virtual void SetValuesFormatCode(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents the x values of the chart series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetXValues()=0;
			/// <summary>
			/// Represents the x values of the chart series.
			/// </summary>
			 virtual void SetXValues(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets or sets the bubble sizes values of the chart series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetBubbleSizes()=0;
			/// <summary>
			/// Gets or sets the bubble sizes values of the chart series.
			/// </summary>
			 virtual void SetBubbleSizes(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Returns an object that represents a collection of all the trendlines for the series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ITrendlineCollection> 		GetITrendLines()=0;
			/// <summary>
			/// Represents curve smoothing. 
			/// True if curve smoothing is turned on for the line chart or scatter chart.
			/// Applies only to line and scatter connected by lines charts.
			/// </summary>
			 virtual bool GetSmooth()=0;
			/// <summary>
			/// Represents curve smoothing. 
			/// True if curve smoothing is turned on for the line chart or scatter chart.
			/// Applies only to line and scatter connected by lines charts.
			/// </summary>
			 virtual void SetSmooth(bool value)=0;
			/// <summary>
			/// True if the series has a shadow. 
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// True if the series has a shadow. 
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// True if the series has a three-dimensional appearance. 
			/// Applies only to bubble charts.
			/// </summary>
			 virtual bool GetHas3DEffect()=0;
			/// <summary>
			/// True if the series has a three-dimensional appearance. 
			/// Applies only to bubble charts.
			/// </summary>
			 virtual void SetHas3DEffect(bool value)=0;
			/// <summary>
			/// Gets or sets the 3D shape type used with the 3-D bar or column chart.
			/// </summary>
			 virtual Aspose::Cells::Charts::Bar3DShapeType GetBar3DShapeType()=0;
			/// <summary>
			/// Gets or sets the 3D shape type used with the 3-D bar or column chart.
			/// </summary>
			 virtual void SetBar3DShapeType(Aspose::Cells::Charts::Bar3DShapeType value)=0;
			/// <summary>
			/// Represents the DataLabels object for the specified ASeries. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDataLabels> 		GetIDataLabels()=0;
			/// <summary>
			/// Gets or sets a data series' type.
			/// </summary>
			 virtual Aspose::Cells::Charts::ChartType GetType()=0;
			/// <summary>
			/// Gets or sets a data series' type.
			/// </summary>
			 virtual void SetType(Aspose::Cells::Charts::ChartType value)=0;
			/// <summary>
			/// Gets the <see cref="Marker" >marker</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IMarker> 		GetIMarker()=0;
			/// <summary>
			/// Indicates if this series is plotted on second value axis.
			/// </summary>
			 virtual bool GetPlotOnSecondAxis()=0;
			/// <summary>
			/// Indicates if this series is plotted on second value axis.
			/// </summary>
			 virtual void SetPlotOnSecondAxis(bool value)=0;
			/// <summary>
			/// Represents X direction error bar of the series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IErrorBar> 		GetXIErrorBar()=0;
			/// <summary>
			/// Represents Y direction error bar of the series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IErrorBar> 		GetYIErrorBar()=0;
			/// <summary>
			/// True if the line chart has high-low lines. 
			///  Applies only to line charts.
			///  </summary>
			 virtual bool HasHiLoLines()=0;
			/// <summary>
			/// True if the line chart has high-low lines. 
			///  Applies only to line charts.
			///  </summary>
			 virtual void SetHasHiLoLines(bool value)=0;
			/// <summary>
			/// Returns a HiLoLines object that represents the high-low lines for a series on a line chart. 
			/// Applies only to line charts.
			///  </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetHiLoILines()=0;
			/// <summary>
			/// True if a stacked column chart or bar chart has series lines or
			/// if a Pie of Pie chart or Bar of Pie chart has connector lines between the two sections. 
			/// Applies only to stacked column charts, bar charts, Pie of Pie charts, or Bar of Pie charts.
			/// </summary>
			 virtual bool HasSeriesLines()=0;
			/// <summary>
			/// True if a stacked column chart or bar chart has series lines or
			/// if a Pie of Pie chart or Bar of Pie chart has connector lines between the two sections. 
			/// Applies only to stacked column charts, bar charts, Pie of Pie charts, or Bar of Pie charts.
			/// </summary>
			 virtual void SetHasSeriesLines(bool value)=0;
			/// <summary>
			/// Returns a SeriesLines object that represents the series lines for a stacked bar chart or a stacked column chart.
			/// Applies only to stacked bar and stacked column charts.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetSeriesILines()=0;
			/// <summary>
			/// True if the chart has drop lines.
			/// Applies only to line chart or area charts.
			/// </summary>
			 virtual bool HasDropLines()=0;
			/// <summary>
			/// True if the chart has drop lines.
			/// Applies only to line chart or area charts.
			/// </summary>
			 virtual void SetHasDropLines(bool value)=0;
			/// <summary>
			/// Returns a <see cref="Line" />
			///  object that represents the drop lines for a series on the line chart or area chart.
			/// Applies only to line chart or area charts.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetDropILines()=0;
			/// <summary>
			/// True if a line chart has up and down bars.
			/// Applies only to line charts.
			/// </summary>
			 virtual bool HasUpDownBars()=0;
			/// <summary>
			/// True if a line chart has up and down bars.
			/// Applies only to line charts.
			/// </summary>
			 virtual void SetHasUpDownBars(bool value)=0;
			/// <summary>
			/// Returns an DropBars object that represents the up bars on a line chart.
			/// Applies only to line charts.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDropBars> 		GetIUpBars()=0;
			/// <summary>
			/// Returns a <see cref="DropBars" />
			///  object that represents the down bars on a line chart.
			/// Applies only to line charts.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDropBars> 		GetIDownBars()=0;
			/// <summary>
			/// Represents if the color of points is varied. 
			/// The chart must contain only one series.
			/// </summary>
			 virtual bool IsColorVaried()=0;
			/// <summary>
			/// Represents if the color of points is varied. 
			/// The chart must contain only one series.
			/// </summary>
			 virtual void SetColorVaried(bool value)=0;
			/// <summary>
			/// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
			/// The value of this property must be between 0 and 500.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int16 GetGapWidth()=0;
			/// <summary>
			/// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
			/// The value of this property must be between 0 and 500.
			/// </summary>
			 virtual void SetGapWidth(Aspose::Cells::Systems::Int16 value)=0;
			/// <summary>
			/// Gets or sets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical). 
			/// Applies only to pie, 3-D pie, and doughnut charts, 0 to 360. 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int16 GetFirstSliceAngle()=0;
			/// <summary>
			/// Gets or sets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical). 
			/// Applies only to pie, 3-D pie, and doughnut charts, 0 to 360. 
			/// </summary>
			 virtual void SetFirstSliceAngle(Aspose::Cells::Systems::Int16 value)=0;
			/// <summary>
			/// Specifies how bars and columns are positioned.
			/// Can be a value between – 100 and 100. 
			/// Applies only to 2-D bar and 2-D column charts. 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int16 GetOverlap()=0;
			/// <summary>
			/// Specifies how bars and columns are positioned.
			/// Can be a value between – 100 and 100. 
			/// Applies only to 2-D bar and 2-D column charts. 
			/// </summary>
			 virtual void SetOverlap(Aspose::Cells::Systems::Int16 value)=0;
			/// <summary>
			/// Returns or sets the size of the secondary section of either a pie of pie chart or a bar of pie chart, 
			/// as a percentage of the size of the primary pie.
			/// Can be a value from 5 to 200. 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int16 GetSecondPlotSize()=0;
			/// <summary>
			/// Returns or sets the size of the secondary section of either a pie of pie chart or a bar of pie chart, 
			/// as a percentage of the size of the primary pie.
			/// Can be a value from 5 to 200. 
			/// </summary>
			 virtual void SetSecondPlotSize(Aspose::Cells::Systems::Int16 value)=0;
			/// <summary>
			/// Returns or sets a value that how to determine which data points are in the second pie or bar on a pie of pie or bar of
			/// pie chart.
			/// </summary>
			 virtual Aspose::Cells::Charts::ChartSplitType GetSplitType()=0;
			/// <summary>
			/// Returns or sets a value that how to determine which data points are in the second pie or bar on a pie of pie or bar of
			/// pie chart.
			/// </summary>
			 virtual void SetSplitType(Aspose::Cells::Charts::ChartSplitType value)=0;
			/// <summary>
			/// Returns or sets a value that shall be used to determine which data points are in the second pie or bar on
			/// a pie of pie or bar of pie chart.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetSplitValue()=0;
			/// <summary>
			/// Returns or sets a value that shall be used to determine which data points are in the second pie or bar on
			/// a pie of pie or bar of pie chart.
			/// </summary>
			 virtual void SetSplitValue(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Indicates whether the threshold value is automatic.
			/// </summary>
			 virtual bool IsAutoSplit()=0;
			/// <summary>
			/// Gets or sets the scale factor for bubbles in the specified chart group. 
			/// It can be an integer value from 0 (zero) to 300, 
			/// corresponding to a percentage of the default size.
			/// Applies only to bubble charts. 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetBubbleScale()=0;
			/// <summary>
			/// Gets or sets the scale factor for bubbles in the specified chart group. 
			/// It can be an integer value from 0 (zero) to 300, 
			/// corresponding to a percentage of the default size.
			/// Applies only to bubble charts. 
			/// </summary>
			 virtual void SetBubbleScale(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or sets what the bubble size represents on a bubble chart.
			/// </summary>
			/// <remarks>
			/// BubbleSizeRepresents.SizeIsArea means the value <see cref="Series.BubbleSizes" />
			///  is the area of the bubble.
			/// BubbleSizeRepresents.SizeIsWidth means the value <see cref="Series.BubbleSizes" />
			///  is the width of the bubble.
			/// </remarks>
			 virtual Aspose::Cells::Charts::BubbleSizeRepresents GetSizeRepresents()=0;
			/// <summary>
			/// Gets or sets what the bubble size represents on a bubble chart.
			/// </summary>
			/// <remarks>
			/// BubbleSizeRepresents.SizeIsArea means the value <see cref="Series.BubbleSizes" />
			///  is the area of the bubble.
			/// BubbleSizeRepresents.SizeIsWidth means the value <see cref="Series.BubbleSizes" />
			///  is the width of the bubble.
			/// </remarks>
			 virtual void SetSizeRepresents(Aspose::Cells::Charts::BubbleSizeRepresents value)=0;
			/// <summary>
			/// True if negative bubbles are shown for the chart group. Valid only for bubble charts. 
			/// </summary>
			 virtual bool GetShowNegativeBubbles()=0;
			/// <summary>
			/// True if negative bubbles are shown for the chart group. Valid only for bubble charts. 
			/// </summary>
			 virtual void SetShowNegativeBubbles(bool value)=0;
			/// <summary>
			/// Returns or sets the size of the hole in a doughnut chart group. 
			/// The hole size is expressed as a percentage of the chart size, between 10 and 90 percent.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetDoughnutHoleSize()=0;
			/// <summary>
			/// Returns or sets the size of the hole in a doughnut chart group. 
			/// The hole size is expressed as a percentage of the chart size, between 10 and 90 percent.
			/// </summary>
			 virtual void SetDoughnutHoleSize(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetExplosion()=0;
			/// <summary>
			/// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
			/// </summary>
			 virtual void SetExplosion(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// True if a radar chart has category axis labels. Applies only to radar charts.
			/// </summary>
			 virtual bool HasRadarAxisLabels()=0;
			/// <summary>
			/// True if a radar chart has category axis labels. Applies only to radar charts.
			/// </summary>
			 virtual void SetHasRadarAxisLabels(bool value)=0;
			/// <summary>
			/// True if the series has leader lines.
			/// </summary>
			 virtual bool HasLeaderLines()=0;
			/// <summary>
			/// True if the series has leader lines.
			/// </summary>
			 virtual void SetHasLeaderLines(bool value)=0;
			/// <summary>
			/// Represents leader lines on a chart. Leader lines connect data labels to data points. 
			/// This object isn’t a collection; there’s no object that represents a single leader line.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetLeaderILines()=0;
			/// <summary>
			/// Gets the legend entry according to this series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ILegendEntry> 		GetILegendEntry()=0;
			/// <summary>
			/// Gets the <seealso cref="ShapePropertyCollection" />
			///  object that holds the visual shape properties of the Series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapePropertyCollection> 		GetIShapeProperties()=0;

	};
}
}
}
