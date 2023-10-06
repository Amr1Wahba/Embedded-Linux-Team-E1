#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "IChartTextFrame.h"

namespace Aspose {
	namespace Cells {
		class IFontSetting;
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the title of chart or axis.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Setting the title of a chart
			/// chart.Title.Text = "Title";
			/// //Setting the font color of the chart title to blue
			/// chart.Title.Font.Color = Color.Blue;
			/// //Setting the title of category axis of the chart
			/// chart.CategoryAxis.Title.Text = "Category";
			/// //Setting the title of value axis of the chart
			/// chart.ValueAxis.Title.Text = "Value";
			/// 
			/// [Visual Basic]
			///  
			/// 'Setting the title of a chart
			/// chart.Title.Text = "Title"
			/// 'Setting the font color of the chart title to blue
			/// chart.Title.Font.Color = Color.Blue
			/// 'Setting the title of category axis of the chart
			/// chart.CategoryAxis.Title.Text = "Category"
			/// 'Setting the title of value axis of the chart
			/// chart.ValueAxis.Title.Text = "Value"
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ITitle : virtual public Aspose::Cells::Charts::IChartTextFrame
	{
		public:
			/// <summary>
			/// Gets or sets the text of display unit label.
			/// </summary>
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// Gets or sets the text of display unit label.
			/// </summary>
			  virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents whether the title is visible.
			/// </summary>
			 virtual bool IsVisible()=0;
			/// <summary>
			/// Represents whether the title is visible.
			/// </summary>
			 virtual void SetVisible(bool value)=0;
			/// <summary>
			/// Gets or sets the x coordinate of the upper left corner in units of 1/4000 of the chart area.
			/// </summary>
			  virtual Aspose::Cells::Systems::Int32 GetX()=0;
			/// <summary>
			/// Gets or sets the x coordinate of the upper left corner in units of 1/4000 of the chart area.
			/// </summary>
			  virtual void SetX(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or sets the y coordinate of the upper left corner in units of 1/4000 of the chart area.		
			/// </summary>
			  virtual Aspose::Cells::Systems::Int32 GetY()=0;
			/// <summary>
			/// Gets or sets the y coordinate of the upper left corner in units of 1/4000 of the chart area.		
			/// </summary>
			  virtual void SetY(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents overlay centered title on chart without resizing chart.
			/// </summary>
			 virtual bool GetOverLay()=0;
			/// <summary>
			/// Represents overlay centered title on chart without resizing chart.
			/// </summary>
			 virtual void SetOverLay(bool value)=0;
			/// <summary>
			/// Gets rich text formatting of this Title.
			/// </summary>
			/// <returns>returns FontSetting array</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IFontSetting*>> 		GetCharacters()=0;

	};
}
}
}
