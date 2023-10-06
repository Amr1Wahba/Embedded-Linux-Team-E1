#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "TextCapsType.h"
#include "TextStrikeType.h"
#include "Aspose.Cells.Systems/Double.h"
#include "FontUnderlineType.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "FontSchemeType.h"

namespace Aspose {
	namespace Cells {
		enum TextCapsType;
		enum TextStrikeType;
		enum FontUnderlineType;
		class IThemeColor;
		class IFont;
		enum FontSchemeType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the font object used in a spreadsheet.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// 
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Worksheet worksheet = workbook.Worksheets[0];
			/// 
			/// //Accessing the "A1" cell from the worksheet
			/// Aspose.Cells.Cell cell = worksheet.Cells["A1"];
			/// 
			/// //Adding some value to the "A1" cell
			/// cell.PutValue("Hello Aspose!");
			/// 
			/// Aspose.Cells.Font font = cell.Style.Font;
			/// 
			/// //Setting the font name to "Times New Roman"
			/// font.Name = "Times New Roman";
			/// 
			/// //Setting font size to 14
			/// font.Size = 14;
			/// 
			/// //setting font color as Red
			/// font.Color = System.Drawing.Color.Red;           
			/// 
			/// //Saving the Excel file
			/// workbook.Save(@"d:\dest.xls");
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As New Workbook()
			/// 
			/// 'Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Dim worksheet As Worksheet = workbook.Worksheets(0)
			/// 
			/// 'Accessing the "A1" cell from the worksheet
			/// Dim cell As Aspose.Cells.Cell = worksheet.Cells("A1")
			/// 
			/// 'Adding some value to the "A1" cell
			/// cell.PutValue("Hello Aspose!")
			/// 
			/// Dim font As Aspose.Cells.Font = cell.Style.Font
			/// 
			/// 'Setting the font name to "Times New Roman"
			/// font.Name = "Times New Roman"
			/// 
			/// 'Setting font size to 14
			/// font.Size = 14
			/// 
			/// 'setting font color as Red
			/// font.Color = System.Drawing.Color.Red
			/// 
			/// 'Saving the Excel file
			/// workbook.Save("d:\dest.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IFont : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Represent the character set.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCharset()=0;
			/// <summary>
			/// Represent the character set.
			/// </summary>
			 virtual void SetCharset(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is italic.
			/// </summary>
			 virtual bool IsItalic()=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is italic.
			/// </summary>
			 virtual void SetItalic(bool value)=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is bold.
			/// </summary>
			 virtual bool IsBold()=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is bold.
			/// </summary>
			 virtual void SetBold(bool value)=0;
			/// <summary>
			/// Gets and sets the text caps type.
			/// </summary>
			 virtual Aspose::Cells::TextCapsType GetCapsType()=0;
			/// <summary>
			/// Gets and sets the text caps type.
			/// </summary>
			 virtual void SetCapsType(Aspose::Cells::TextCapsType value)=0;
			/// <summary>
			/// Gets the strike type of the text.
			/// </summary>
			 virtual Aspose::Cells::TextStrikeType GetStrikeType()=0;
			/// <summary>
			/// Gets the strike type of the text.
			/// </summary>
			 virtual void SetStrikeType(Aspose::Cells::TextStrikeType value)=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is single strikeout.
			/// </summary>
			 virtual bool IsStrikeout()=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is single strikeout.
			/// </summary>
			 virtual void SetStrikeout(bool value)=0;
			/// <summary>
			/// Gets and sets the script offset,in unit of percentage
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetScriptOffset()=0;
			/// <summary>
			/// Gets and sets the script offset,in unit of percentage
			/// </summary>
			 virtual void SetScriptOffset(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is super script.
			/// </summary>
			 virtual bool IsSuperscript()=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is super script.
			/// </summary>
			 virtual void SetSuperscript(bool value)=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is subscript.
			/// </summary>
			 virtual bool IsSubscript()=0;
			/// <summary>
			/// Gets or sets a value indicating whether the font is subscript.
			/// </summary>
			 virtual void SetSubscript(bool value)=0;
			/// <summary>
			/// Gets or sets the font underline type.
			/// </summary>
			 virtual Aspose::Cells::FontUnderlineType GetUnderline()=0;
			/// <summary>
			/// Gets or sets the font underline type.
			/// </summary>
			 virtual void SetUnderline(Aspose::Cells::FontUnderlineType value)=0;
			/// <summary>
			/// Gets  or sets the name of the <see cref="Font" />
			/// .
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// Style style;
			/// ..........
			/// Font font = style.Font;
			/// font.Name = "Times New Roman";
			/// 
			/// [Visual Basic]
			/// 
			/// Dim style As Style
			/// ..........
			/// Dim font As Font =  style.Font 
			/// font.Name = "Times New Roman"
			/// </code>
			/// </example>
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets  or sets the name of the <see cref="Font" />
			/// .
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// Style style;
			/// ..........
			/// Font font = style.Font;
			/// font.Name = "Times New Roman";
			/// 
			/// [Visual Basic]
			/// 
			/// Dim style As Style
			/// ..........
			/// Dim font As Font =  style.Font 
			/// font.Name = "Times New Roman"
			/// </code>
			/// </example>
			  virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the double size of the font.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetDoubleSize()=0;
			/// <summary>
			/// Gets and sets the double size of the font.
			/// </summary>
			 virtual void SetDoubleSize(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets or sets the size of the font.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetSize()=0;
			/// <summary>
			/// Gets or sets the size of the font.
			/// </summary>
			 virtual void SetSize(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets and sets the theme color.
			/// </summary>
			/// <remarks>
			/// If the font color is not a theme color, NULL will be returned.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IThemeColor> 		GetIThemeColor()=0;
			/// <summary>
			/// Gets and sets the theme color.
			/// </summary>
			/// <remarks>
			/// If the font color is not a theme color, NULL will be returned.
			/// </remarks>
			 virtual void 		SetIThemeColor(intrusive_ptr<Aspose::Cells::IThemeColor> value)=0;
			/// <summary>
			/// Gets or sets the <see cref="System.Drawing.Color" />
			///  of the font.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Gets or sets the <see cref="System.Drawing.Color" />
			///  of the font.
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
			/// Checks if two fonts are equals.
			/// </summary>
			/// <param name="font" >Compared font object.</param>
			/// <returns>True if equal to the compared font object.</returns>
			 virtual bool 		Equals(intrusive_ptr<Aspose::Cells::IFont> font)=0;
			/// <summary>
			/// Indicates whether the normalization of height that is to be applied to the text run.
			/// </summary>
			 virtual bool IsNormalizeHeights()=0;
			/// <summary>
			/// Indicates whether the normalization of height that is to be applied to the text run.
			/// </summary>
			 virtual void SetNormalizeHeights(bool value)=0;
			/// <summary>
			/// Gets and sets the scheme type of the font.
			/// </summary>
			 virtual Aspose::Cells::FontSchemeType GetSchemeType()=0;
			/// <summary>
			/// Gets and sets the scheme type of the font.
			/// </summary>
			 virtual void SetSchemeType(Aspose::Cells::FontSchemeType value)=0;
			/// <summary>
			/// Returns a string represents the current Cell object.
			/// </summary>
			/// <returns/>
			/// 
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> ToString()=0;

	};
}
}
