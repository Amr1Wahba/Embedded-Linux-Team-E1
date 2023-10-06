#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "CellBorderType.h"

namespace Aspose {
	namespace Cells {
		class IThemeColor;
		enum CellBorderType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents the cell border.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// Style style = cell.GetStyle();
			/// //Set top border style and color
			/// Border border = style.Borders[BorderType.TopBorder];
			/// border.LineStyle = CellBorderType.Medium;
			/// border.Color = Color.Red;
			/// cell.SetStyle(style);
			/// 
			/// [Visual Basic]
			/// 
			/// Dim style as Style = cell.GetStyle()
			/// 'Set top border style and color
			/// Dim border as Border = style.Borders(BorderType.TopBorder)
			/// border.LineStyle = CellBorderType.Medium
			/// border.Color = Color.Red
			/// cell.SetStyle(style);
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IBorder : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			///  Gets and sets the theme color of the border.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IThemeColor> 		GetIThemeColor()=0;
			/// <summary>
			///  Gets and sets the theme color of the border.
			/// </summary>
			 virtual void 		SetIThemeColor(intrusive_ptr<Aspose::Cells::IThemeColor> value)=0;
			/// <summary>
			/// Gets or sets the <see cref="System.Drawing.Color" />
			///  of the border.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Gets or sets the <see cref="System.Drawing.Color" />
			///  of the border.
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets and sets the color with a 32-bit ARGB value.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetArgbColor()=0;
			/// <summary>
			/// Gets and sets the color with a 32-bit ARGB value.
			/// </summary>
			 virtual void SetArgbColor(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or sets the cell border type.
			/// </summary>
			 virtual Aspose::Cells::CellBorderType GetLineStyle()=0;
			/// <summary>
			/// Gets or sets the cell border type.
			/// </summary>
			 virtual void SetLineStyle(Aspose::Cells::CellBorderType value)=0;

	};
}
}
