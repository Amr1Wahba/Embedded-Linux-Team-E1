#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "BackgroundMode.h"

namespace Aspose {
	namespace Cells {
		class IFont;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum BackgroundMode;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ILine;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents a chart data table.
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
			/// int chartIndex = worksheet.Charts.Add(ChartType.Column, 5, 0, 25, 10);
			/// 
			/// //Accessing the instance of the newly added chart
			/// Chart chart = worksheet.Charts[chartIndex];
			/// 
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart.NSeries.Add("A1:B3", true);
			/// 
			/// chart.IsDataTableShown = true;
			/// 
			/// //Getting Chart Table
			/// ChartDataTable chartTable = chart.ChartDataTable;
			/// 
			/// //Setting Chart Table Font Color
			/// chartTable.Font.Color = System.Drawing.Color.Red;
			/// 
			/// //Setting Legend Key VisibilityOptions
			/// chartTable.ShowLegendKey = false;
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
			/// Dim chartIndex As Integer = worksheet.Charts.Add(ChartType.Column, 5, 0, 25, 10)
			/// 
			/// 'Accessing the instance of the newly added chart
			/// Dim chart As Chart = worksheet.Charts(chartIndex)
			/// 
			/// 'Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart.NSeries.Add("A1:B3", True)
			/// 
			/// chart.IsDataTableShown = True
			/// 
			/// 'Getting Chart Table
			/// Dim chartTable As ChartDataTable = chart.ChartDataTable
			/// 
			/// 'Setting Chart Table Font Color
			/// chartTable.Font.Color = System.Drawing.Color.Red
			/// 
			/// 'Setting Legend Key VisibilityOptions
			/// chartTable.ShowLegendKey = False
			/// 
			/// 'Saving the Excel file
			/// workbook.Save("D:\book1.xls")
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IChartDataTable : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets a <see cref="Font" />
			///  object which represents the font setting of the specified chart data table.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// True if the text in the object changes font size when the object size changes. 
			/// The default value is True. 
			/// </summary>
			 virtual bool GetAutoScaleFont()=0;
			/// <summary>
			/// True if the text in the object changes font size when the object size changes. 
			/// The default value is True. 
			/// </summary>
			 virtual void SetAutoScaleFont(bool value)=0;
			/// <summary>
			/// Gets and sets the display mode of the background
			/// </summary>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackgroundMode()=0;
			/// <summary>
			/// Gets and sets the display mode of the background
			/// </summary>
			 virtual void SetBackgroundMode(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// Gets and sets the display mode of the background
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use ChartDataTable.BackgroundMode property. 
			/// This property will be removed 12 months later since JANUARY 2012. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackground()=0;
			/// <summary>
			/// Gets and sets the display mode of the background
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use ChartDataTable.BackgroundMode property. 
			/// This property will be removed 12 months later since JANUARY 2012. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetBackground(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// True if the chart data table has horizontal cell borders
			/// </summary>
			 virtual bool HasBorderHorizontal()=0;
			/// <summary>
			/// True if the chart data table has horizontal cell borders
			/// </summary>
			 virtual void SetHasBorderHorizontal(bool value)=0;
			/// <summary>
			/// True if the chart data table has vertical cell borders
			/// </summary>
			 virtual bool HasBorderVertical()=0;
			/// <summary>
			/// True if the chart data table has vertical cell borders
			/// </summary>
			 virtual void SetHasBorderVertical(bool value)=0;
			/// <summary>
			/// True if the chart data table has outline borders
			/// </summary>
			 virtual bool HasBorderOutline()=0;
			/// <summary>
			/// True if the chart data table has outline borders
			/// </summary>
			 virtual void SetHasBorderOutline(bool value)=0;
			/// <summary>
			/// True if the data label legend key is visible.
			/// </summary>
			 virtual bool GetShowLegendKey()=0;
			/// <summary>
			/// True if the data label legend key is visible.
			/// </summary>
			 virtual void SetShowLegendKey(bool value)=0;
			/// <summary>
			/// Returns a Border object that represents the border of the object
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;

	};
}
}
}
