#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "ErrorBarType.h"
#include "ErrorBarDisplayType.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/String.h"
#include "ILine.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum ErrorBarType;
			enum ErrorBarDisplayType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			///  Represents error bar of data series.
			///  </summary>
			/// <example>
			///  <code>
			///  [C#]
			///  Workbook workbook = new Workbook();
			///  Cells cells = workbook.Worksheets[0].Cells;
			///  cells["a1"].PutValue(2);
			///  cells["a2"].PutValue(5);
			///  cells["a3"].PutValue(3);
			///  cells["a4"].PutValue(6);
			///  cells["b1"].PutValue(4);
			///  cells["b2"].PutValue(3);
			///  cells["b3"].PutValue(6);
			///  cells["b4"].PutValue(7);
			///  
			///  cells["C1"].PutValue("Q1");
			///  cells["C2"].PutValue("Q2");
			///  cells["C3"].PutValue("Y1");
			///  cells["C4"].PutValue("Y2");
			///  
			///  int chartIndex = excel.Worksheets[0].Charts.Add(ChartType.Column, 11, 0, 27, 10);
			///  
			///  Chart chart = excel.Worksheets[0].Charts[chartIndex];
			///  chart.NSeries.Add("A1:B4", true);
			///  
			///  chart.NSeries.CategoryData = "C1:C4";
			///  
			///  for(int i = 0; i  chart.NSeries.Count; i ++)
			///  {
			/// 		ASeries aseries = chart.NSeries[i];
			/// 		aseries.YErrorBar.DisplayType = ErrorBarDisplayType.Minus;
			/// 		aseries.YErrorBar.Type = ErrorBarType.FixedValue;
			/// 		aseries.YErrorBar.Amount = 5;
			///  }
			/// 
			///  [Visual Basic]
			///  Dim workbook As Workbook =  New Workbook() 
			///  Dim cells As Cells =  workbook.Worksheets(0).Cells 
			///  cells("a1").PutValue(2)
			///  cells("a2").PutValue(5)
			///  cells("a3").PutValue(3)
			///  cells("a4").PutValue(6)
			///  cells("b1").PutValue(4)
			///  cells("b2").PutValue(3)
			///  cells("b3").PutValue(6)
			///  cells("b4").PutValue(7)
			///  
			///  cells("C1").PutValue("Q1")
			///  cells("C2").PutValue("Q2")
			///  cells("C3").PutValue("Y1")
			///  cells("C4").PutValue("Y2")
			///  
			///  Dim chartIndex As Integer =  excel.Worksheets(0).Charts.Add(ChartType.Column,11,0,27,10) 
			///  
			///  Dim chart As Chart =  excel.Worksheets(0).Charts(chartIndex) 
			///  chart.NSeries.Add("A1:B4", True)
			///  
			///  chart.NSeries.CategoryData = "C1:C4"
			/// 
			///  Dim i As Integer
			///  For  i = 0 To chart.NSeries.Count - 1
			///  Dim aseries As ASeries =  chart.NSeries(i) 
			///  aseries.YErrorBar.DisplayType = ErrorBarDisplayType.Minus
			///  aseries.YErrorBar.Type = ErrorBarType.FixedValue
			///  aseries.YErrorBar.Amount = 5
			///  Next
			///  </code>
			/// </example>
	class ASPOSE_CELLS_API IErrorBar : virtual public Aspose::Cells::Drawing::ILine
	{
		public:
			/// <summary>
			/// Represents error bar amount type.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// //Sets custom error bar type
			/// aseries.YErrorBar.Type = ErrorBarType.InnerCustom;
			/// aseries.YErrorBar.PlusValue = "=Sheet1!A1";
			/// aseries.YErrorBar.MinusValue = "=Sheet1!A2";
			/// 
			/// [Visual Basic]
			/// 'Sets custom error bar type
			/// aseries.YErrorBar.Type = ErrorBarType.InnerCustom
			/// aseries.YErrorBar.PlusValue = "=Sheet1!A1"
			/// aseries.YErrorBar.MinusValue = "=Sheet1!A2"
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Charts::ErrorBarType GetType()=0;
			/// <summary>
			/// Represents error bar amount type.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// //Sets custom error bar type
			/// aseries.YErrorBar.Type = ErrorBarType.InnerCustom;
			/// aseries.YErrorBar.PlusValue = "=Sheet1!A1";
			/// aseries.YErrorBar.MinusValue = "=Sheet1!A2";
			/// 
			/// [Visual Basic]
			/// 'Sets custom error bar type
			/// aseries.YErrorBar.Type = ErrorBarType.InnerCustom
			/// aseries.YErrorBar.PlusValue = "=Sheet1!A1"
			/// aseries.YErrorBar.MinusValue = "=Sheet1!A2"
			/// </code>
			/// </example>
			 virtual void SetType(Aspose::Cells::Charts::ErrorBarType value)=0;
			/// <summary>
			/// Represents error bar display type.
			/// </summary>
			 virtual Aspose::Cells::Charts::ErrorBarDisplayType GetDisplayType()=0;
			/// <summary>
			/// Represents error bar display type.
			/// </summary>
			 virtual void SetDisplayType(Aspose::Cells::Charts::ErrorBarDisplayType value)=0;
			/// <summary>
			/// Represents amount of error bar.
			/// <remarks> The amount must be greater than and equal to zero.</remarks>
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetAmount()=0;
			/// <summary>
			/// Represents amount of error bar.
			/// <remarks> The amount must be greater than and equal to zero.</remarks>
			/// </summary>
			 virtual void SetAmount(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Indicates if formatting error bars with a T-top.
			/// </summary>
			 virtual bool GetShowMarkerTTop()=0;
			/// <summary>
			/// Indicates if formatting error bars with a T-top.
			/// </summary>
			 virtual void SetShowMarkerTTop(bool value)=0;
			/// <summary>
			/// Represents positive error amount when error bar type is Custom.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPlusValue()=0;
			/// <summary>
			/// Represents positive error amount when error bar type is Custom.
			/// </summary>
			 virtual void SetPlusValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents negative error amount when error bar type is Custom.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetMinusValue()=0;
			/// <summary>
			/// Represents negative error amount when error bar type is Custom.
			/// </summary>
			 virtual void SetMinusValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;

	};
}
}
}
