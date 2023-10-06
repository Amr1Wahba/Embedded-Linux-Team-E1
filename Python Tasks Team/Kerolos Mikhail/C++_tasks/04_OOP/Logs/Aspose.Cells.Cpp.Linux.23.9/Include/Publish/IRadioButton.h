#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IGroupBox;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a radio button.
			/// </summary>
	class ASPOSE_CELLS_API IRadioButton : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Indicates if the radiobutton is checked or not.
			/// </summary>
			 virtual bool IsChecked()=0;
			/// <summary>
			/// Indicates if the radiobutton is checked or not.
			/// </summary>
			 virtual void SetChecked(bool value)=0;
			/// <summary>
			/// Gets the option index in all the radio buttons of the GroupBox which contains this radio button.
			/// </summary>
			/// <returns/>
			/// 
			/// <remarks>
			/// If this radio button is not in the GroupBox, returns the option index in all radio buttons that are not in any GroupBox
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetOptionIndex()=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// Gets the GroupBox that contains this RadioButton.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGroupBox> 		GetIGroupBox()=0;

	};
}
}
}
