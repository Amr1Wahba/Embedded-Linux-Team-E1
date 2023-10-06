#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "CheckValueType.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum CheckValueType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a check box object in a worksheet.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// int index = excel.Worksheets[0].CheckBoxes.Add(15, 15, 20, 100);
			/// CheckBox checkBox = excel.Worksheets[0].CheckBoxes[index];
			/// checkBox.Text = "Check Box 1";
			/// 
			/// 
			/// [Visual Basic]
			/// 
			/// Dim index as integer = excel.Worksheets(0).CheckBoxes.Add(15, 15, 20, 100)
			/// Dim checkBox as CheckBox = excel.Worksheets(0).CheckBoxes[index];
			/// checkBox.Text = "Check Box 1"
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ICheckBox : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Indicates if the checkbox is checked or not.
			/// </summary>
			 virtual bool GetValue()=0;
			/// <summary>
			/// Indicates if the checkbox is checked or not.
			/// </summary>
			 virtual void SetValue(bool value)=0;
			/// <summary>
			/// Gets or set checkbox' value.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use CheckBox.CheckValueType property. 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::Drawing::CheckValueType GetCheckValue()=0;
			/// <summary>
			/// Gets or set checkbox' value.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use CheckBox.CheckValueType property. 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetCheckValue(Aspose::Cells::Drawing::CheckValueType value)=0;
			/// <summary>
			/// Gets or set checkbox' value.
			/// </summary>
			 virtual Aspose::Cells::Drawing::CheckValueType GetCheckedValue()=0;
			/// <summary>
			/// Gets or set checkbox' value.
			/// </summary>
			 virtual void SetCheckedValue(Aspose::Cells::Drawing::CheckValueType value)=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual void SetShadow(bool value)=0;

	};
}
}
}
