#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "TextNodeType.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "PresetWordArtStyle.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			namespace Texts {
				enum TextNodeType;
			}
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IWorksheetCollection;
		class IFont;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum PresetWordArtStyle;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents a range of characters within the cell text.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C#]
			/// 
			///  //Instantiating a Workbook object
			///  Workbook workbook = new Workbook();
			///  
			///  //Adding a new worksheet to the Excel object
			///  workbook.Worksheets.Add();
			///  
			///  //Obtaining the reference of the newly added worksheet by passing its sheet index
			///  Worksheet worksheet = workbook.Worksheets[0];
			///  
			///  //Accessing the "A1" cell from the worksheet
			///  Aspose.Cells.Cell cell = worksheet.Cells["A1"];
			///  
			///  //Adding some value to the "A1" cell
			///  cell.PutValue("Visit Aspose!");
			///  
			///  //getting charactor
			///  FontSetting charactor = cell.Characters(6, 7);
			///  
			///  //Setting the font of selected characters to bold
			///  charactor.Font.IsBold = true;
			///  
			///  //Setting the font color of selected characters to blue
			///  charactor.Font.Color = Color.Blue;
			///  
			///  //Saving the Excel file
			///  workbook.Save("D:\\book1.xls");
			///  
			///  [VB.NET]
			///  
			///  'Instantiating a Workbook object
			///  Dim workbook As New Workbook()
			///  
			///  'Adding a new worksheet to the Excel object
			///  workbook.Worksheets.Add()
			///  
			///  'Obtaining the reference of the newly added worksheet by passing its sheet index
			///  Dim worksheet As Worksheet = workbook.Worksheets(0)
			///  
			///  'Accessing the "A1" cell from the worksheet
			///  Dim cell As Aspose.Cells.Cell = worksheet.Cells("A1")
			///  
			///  'Adding some value to the "A1" cell
			///  cell.PutValue("Visit Aspose!")
			///  
			///  'getting charactor
			///  Dim charactor As FontSetting = cell.Characters(6, 7)
			///  
			///  'Setting the font of selected characters to bold
			///  charactor.Font.IsBold = True
			///  
			///  'Setting the font color of selected characters to blue
			///  charactor.Font.Color = Color.Blue
			///  
			///  'Saving the Excel file
			///  workbook.Save("D:\book1.xls")
			///   
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IFontSetting : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the type of text node.
			/// </summary>
			  virtual Aspose::Cells::Drawing::Texts::TextNodeType GetType()=0;
			/// <summary>
			/// Gets the start index of the characters.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetStartIndex()=0;
			/// <summary>
			/// Gets the length of the characters.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetLength()=0;
			/// <summary>
			/// Returns the font of this object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// Sets the preset WordArt style.
			/// </summary>
			/// <param name="style" >The preset WordArt style.</param>
			/// <remarks>Only for the text of shape/chart.</remarks>
			 virtual void SetWordArtStyle(Aspose::Cells::Drawing::PresetWordArtStyle style)=0;

	};
}
}
