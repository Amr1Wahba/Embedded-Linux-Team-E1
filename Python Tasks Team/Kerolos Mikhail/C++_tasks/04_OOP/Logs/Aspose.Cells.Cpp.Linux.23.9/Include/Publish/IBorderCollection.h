#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "BorderType.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "CellBorderType.h"

namespace Aspose {
	namespace Cells {
		class IBorder;
		enum BorderType;
		enum CellBorderType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Encapsulates a collection of <see cref="Border" />
			///  objects.
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
			///  Cell cell = worksheet.Cells["A1"];
			///  
			///  //Adding some value to the "A1" cell
			///  cell.PutValue("Visit Aspose!");
			///  
			///  Style style = cell.GetStyle();
			///  
			///  //Setting the line style of the top border
			///  style.Borders[BorderType.TopBorder].LineStyle = CellBorderType.Thick;
			///  
			///  //Setting the color of the top border
			///  style.Borders[BorderType.TopBorder].Color = Color.Black;
			///  
			///  //Setting the line style of the bottom border
			///  style.Borders[BorderType.BottomBorder].LineStyle = CellBorderType.Thick;
			///  
			///  //Setting the color of the bottom border
			///  style.Borders[BorderType.BottomBorder].Color = Color.Black;
			///  
			///  //Setting the line style of the left border
			///  style.Borders[BorderType.LeftBorder].LineStyle = CellBorderType.Thick;
			///  
			///  //Setting the color of the left border
			///  style.Borders[BorderType.LeftBorder].Color = Color.Black;
			///  
			///  //Setting the line style of the right border
			///  style.Borders[BorderType.RightBorder].LineStyle = CellBorderType.Thick;
			///  
			///  //Setting the color of the right border
			///  style.Borders[BorderType.RightBorder].Color = Color.Black;
			///  
			///  cell.SetStyle(style);
			///  
			///  //Saving the Excel file
			///  workbook.Save("C:\\book1.xls");
			/// 
			///  [VB.NET]
			///  
			///  'Instantiating a Workbook object
			///  Dim workbook As Workbook = New Workbook()
			///  
			///  'Adding a new worksheet to the Workbook object
			///  workbook.Worksheets.Add()
			///  
			///  'Obtaining the reference of the newly added worksheet by passing its sheet index
			///  Dim worksheet As Worksheet = workbook.Worksheets(0)
			///  
			///  'Accessing the "A1" cell from the worksheet
			///  Dim cell As Cell = worksheet.Cells("A1")
			///  
			///  'Adding some value to the "A1" cell
			///  cell.PutValue("Visit Aspose!")
			///  
			///  Dim style as Style = cell.GetStyle()
			///  
			///  'Setting the line style of the top border
			///  style.Borders(BorderType.TopBorder).LineStyle = CellBorderType.Thick
			///  
			///  'Setting the color of the top border
			///  style.Borders(BorderType.TopBorder).Color = Color.Black
			///  
			///  'Setting the line style of the bottom border
			///  style.Borders(BorderType.BottomBorder).LineStyle = CellBorderType.Thick
			///  
			///  'Setting the color of the bottom border
			///  style.Borders(BorderType.BottomBorder).Color = Color.Black
			///  
			///  'Setting the line style of the left border
			///  style.Borders(BorderType.LeftBorder).LineStyle = CellBorderType.Thick
			///  
			///  'Setting the color of the left border
			///  style.Borders(BorderType.LeftBorder).Color = Color.Black
			///  
			///  'Setting the line style of the right border
			///  style.Borders(BorderType.RightBorder).LineStyle = CellBorderType.Thick
			///  
			///  'Setting the color of the right border
			///  style.Borders(BorderType.RightBorder).Color = Color.Black
			///  
			///  cell.SetStyle(style)
			///  
			///  'Saving the Excel file
			///  workbook.Save("C:\book1.xls")
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IBorderCollection : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			///  Gets the <see cref="Border" />
			///  element at the specified index.
			///  </summary>
			/// <param name="borderType" >The border to be retrieved.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IBorder> 		GetObjectByIndex(Aspose::Cells::BorderType borderType)=0;
			/// <summary>
			/// Sets the <see cref="System.Drawing.Color" />
			///  of all borders in the collection.
			/// </summary>
			/// <param name="color" >Borders' <see cref="System.Drawing.Color" />
			/// .</param>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color)=0;
			/// <summary>
			/// Sets the style of all borders of the collection.
			/// </summary>
			/// <param name="style" >Borders' style</param>
			 virtual void SetStyle(Aspose::Cells::CellBorderType style)=0;
			/// <summary>
			/// Gets or sets the <see cref="System.Drawing.Color" />
			///  of Diagonal lines.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetDiagonalColor()=0;
			/// <summary>
			/// Gets or sets the <see cref="System.Drawing.Color" />
			///  of Diagonal lines.
			/// </summary>
			 virtual void SetDiagonalColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets or sets the style of Diagonal lines.
			/// </summary>
			 virtual Aspose::Cells::CellBorderType GetDiagonalStyle()=0;
			/// <summary>
			/// Gets or sets the style of Diagonal lines.
			/// </summary>
			 virtual void SetDiagonalStyle(Aspose::Cells::CellBorderType value)=0;

	};
}
}
