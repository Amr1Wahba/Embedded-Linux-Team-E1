#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "ThemeColorType.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		enum ThemeColorType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents a theme color.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// Cells cells = workbook.Worksheets[0].Cells;
			/// cells["A1"].PutValue("Hello World");
			/// Style style = cells["A1"].GetStyle();
			/// //Set ThemeColorType.Text2 color type with 40% lighten as the font color.
			/// style.Font.ThemeColor = new ThemeColor(ThemeColorType.Text2, 0.4);
			/// style.Pattern = BackgroundType.Solid;
			/// //Set ThemeColorType.Background2 color type with 75% darken as the foreground color
			/// style.ForegroundThemeColor = new ThemeColor(ThemeColorType.Background2, -0.75);
			/// cells["A1"].SetStyle(style);
			/// //Saving the Excel file
			/// workbook.Save("C:\\book1.xlsx");
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// Dim cells As Cells = workbook.Worksheets(0).Cells
			/// cells("A1").PutValue("Hello World")
			/// 'Get the cell style
			/// Dim style As Style = cells("A1").GetStyle()
			/// 'Set ThemeColorType.Text2 color type with 40% lighten as the font color.
			/// Style.Font.ThemeColor = New ThemeColor(ThemeColorType.Text2, 0.4)
			/// Style.Pattern = BackgroundType.Solid
			/// 'Set ThemeColorType.Background2 color type with 75% darken as the foreground color
			/// style.ForegroundThemeColor = New ThemeColor(ThemeColorType.Background2, -0.75)
			/// 'Set the cell style
			/// cells("A1").SetStyle(style)
			/// 'Saving the Excel file
			/// Workbook.Save("C:\\book1.xlsx")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IThemeColor : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets and sets the theme type.
			/// </summary>
			 virtual Aspose::Cells::ThemeColorType GetColorType()=0;
			/// <summary>
			/// Gets and sets the theme type.
			/// </summary>
			 virtual void SetColorType(Aspose::Cells::ThemeColorType value)=0;
			/// <summary>
			/// Gets and sets the tint value.
			/// </summary>
			/// <remarks>
			/// The tint value is stored as a double from -1.0 .. 1.0, where -1.0 means 100% darken 
			/// and 1.0 means 100% lighten. Also, 0.0 means no change.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Double GetTint()=0;
			/// <summary>
			/// Gets and sets the tint value.
			/// </summary>
			/// <remarks>
			/// The tint value is stored as a double from -1.0 .. 1.0, where -1.0 means 100% darken 
			/// and 1.0 means 100% lighten. Also, 0.0 means no change.
			/// </remarks>
			 virtual void SetTint(Aspose::Cells::Systems::Double value)=0;

	};
}
}
