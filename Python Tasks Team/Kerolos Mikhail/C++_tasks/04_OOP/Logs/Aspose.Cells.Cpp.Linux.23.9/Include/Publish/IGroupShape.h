#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IShape;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the group shape which contains the individual shapes.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiate a new Workbook.
			/// Workbook excelbook = new Workbook();
			///  
			/// //Add a group box to the first worksheet.
			/// Aspose.Cells.GroupBox box = excelbook.Worksheets[0].Shapes.AddGroupBox(1, 0, 1, 0, 300, 250);
			///  
			/// //Set the caption of the group box.
			/// box.Text = "Age Groups";
			/// box.Placement = PlacementType.FreeFloating;
			///  
			/// //Make it 2-D box.
			/// box.Shadow = false;
			///  
			/// //Add a radio button.
			/// Aspose.Cells.RadioButton radio1 = excelbook.Worksheets[0].Shapes.AddRadioButton(3, 0, 2, 0, 30, 110);
			///  
			/// //Set its text string.
			/// radio1.Text = "20-29";
			///  
			/// //Set A1 cell as a linked cell for the radio button.
			/// radio1.LinkedCell = "A1";
			///  
			/// //Make the radio button 3-D.
			/// radio1.Shadow = true;
			///  
			/// //Set the foreground color of the radio button.
			/// radio1.FillFormat.ForeColor = Color.LightGreen;
			///  
			/// //Set the line style of the radio button.
			/// radio1.LineFormat.Style = MsoLineStyle.ThickThin;
			///  
			/// //Set the weight of the radio button.
			/// radio1.LineFormat.Weight = 4;
			///  
			/// //Set the line color of the radio button.
			/// radio1.LineFormat.ForeColor = Color.Blue;
			///  
			/// //Set the dash style of the radio button.
			/// radio1.LineFormat.DashStyle = MsoLineDashStyle.Solid;
			///  
			/// //Make the line format visible.
			/// radio1.LineFormat.IsVisible = true;
			///  
			/// //Make the fill format visible.
			/// radio1.FillFormat.IsVisible = true;
			///  
			/// //Add another radio button.
			/// Aspose.Cells.RadioButton radio2 = excelbook.Worksheets[0].Shapes.AddRadioButton(6, 0, 2, 0, 30, 110);
			///  
			/// //Set its text string.
			/// radio2.Text = "30-39";
			///  
			/// //Set A1 cell as a linked cell for the radio button.
			/// radio2.LinkedCell = "A1";
			///  
			/// //Make the radio button 3-D.
			/// radio2.Shadow = true;
			///  
			/// //Set the foreground color of the radio button.
			/// radio2.FillFormat.ForeColor = Color.LightGreen;
			///  
			/// //Set the line style of the radio button.
			/// radio2.LineFormat.Style = MsoLineStyle.ThickThin;
			///  
			/// //Set the weight of the radio button.
			/// radio2.LineFormat.Weight = 4;
			///  
			/// //Set the line color of the radio button.
			/// radio2.LineFormat.ForeColor = Color.Blue;
			///  
			/// //Set the dash style of the radio button.
			/// radio2.LineFormat.DashStyle = MsoLineDashStyle.Solid;
			///  
			/// //Make the line format visible.
			/// radio2.LineFormat.IsVisible = true;
			///  
			/// //Make the fill format visible.
			/// radio2.FillFormat.IsVisible = true;
			///  
			/// //Add another radio button.
			/// Aspose.Cells.RadioButton radio3 = excelbook.Worksheets[0].Shapes.AddRadioButton(9, 0, 2, 0, 30, 110);
			///  
			/// //Set its text string.
			/// radio3.Text = "40-49";
			///  
			/// //Set A1 cell as a linked cell for the radio button.
			/// radio3.LinkedCell = "A1";
			///  
			/// //Make the radio button 3-D.
			/// radio3.Shadow = true;
			///  
			/// //Set the foreground color of the radio button.
			/// radio3.FillFormat.ForeColor = Color.LightGreen;
			///  
			/// //Set the line style of the radio button.
			/// radio3.LineFormat.Style = MsoLineStyle.ThickThin;
			///  
			/// //Set the weight of the radio button.
			/// radio3.LineFormat.Weight = 4;
			///  
			/// //Set the line color of the radio button.
			/// radio3.LineFormat.ForeColor = Color.Blue;
			///  
			/// //Set the dash style of the radio button.
			/// radio3.LineFormat.DashStyle = MsoLineDashStyle.Solid;
			///  
			/// //Make the line format visible.
			/// radio3.LineFormat.IsVisible = true;
			///  
			/// //Make the fill format visible.
			/// radio3.FillFormat.IsVisible = true;
			///  
			/// //Get the shapes.
			/// Aspose.Cells.Shape[] shapeobjects = new Aspose.Cells.Shape[] { box, radio1, radio2, radio3 };
			///  
			/// //Group the shapes.
			/// Aspose.Cells.GroupShape group = excelbook.Worksheets[0].Shapes.Group(shapeobjects);
			///  
			/// //Save the excel file.
			/// excelbook.Save("d:\\test\\groupshapes.xls");
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiate a new Workbook.
			/// Dim excelbook As Workbook = New Workbook()
			///  
			/// 'Add a group box to the first worksheet.
			/// Dim box As Aspose.Cells.GroupBox = excelbook.Worksheets(0).Shapes.AddGroupBox(1, 0, 1, 0, 300, 250)
			///  
			/// 'Set the caption of the group box.
			/// box.Text = "Age Groups"
			/// box.Placement = PlacementType.FreeFloating
			///  
			/// 'Make it 2-D box.
			/// box.Shadow = False
			///  
			/// 'Add a radio button.
			/// Dim radio1 As Aspose.Cells.RadioButton = excelbook.Worksheets(0).Shapes.AddRadioButton(3, 0, 2, 0, 30, 110)
			///  
			/// 'Set its text string.
			/// radio1.Text = "20-29"
			///  
			/// 'Set A1 cell as a linked cell for the radio button.
			/// radio1.LinkedCell = "A1"
			///  
			/// 'Make the radio button 3-D.
			/// radio1.Shadow = True
			///  
			/// 'Set the foreground color of the radio button.
			/// radio1.FillFormat.ForeColor = Color.LightGreen
			///  
			/// 'Set the line style of the radio button.
			/// radio1.LineFormat.Style = MsoLineStyle.ThickThin
			///  
			/// 'Set the weight of the radio button.
			/// radio1.LineFormat.Weight = 4
			///  
			/// 'Set the line color of the radio button.
			/// radio1.LineFormat.ForeColor = Color.Blue
			///  
			/// 'Set the dash style of the radio button.
			/// radio1.LineFormat.DashStyle = MsoLineDashStyle.Solid
			///  
			/// 'Make the line format visible.
			/// radio1.LineFormat.IsVisible = True
			///  
			/// 'Make the fill format visible.
			/// radio1.FillFormat.IsVisible = True
			///  
			/// 'Add another radio button.
			/// Dim radio2 As Aspose.Cells.RadioButton = excelbook.Worksheets(0).Shapes.AddRadioButton(6, 0, 2, 0, 30, 110)
			///  
			/// 'Set its text string.
			/// radio2.Text = "30-39"
			///  
			/// 'Set A1 cell as a linked cell for the radio button.
			/// radio2.LinkedCell = "A1"
			///  
			/// 'Make the radio button 3-D.
			/// radio2.Shadow = True
			///  
			/// 'Set the foreground color of the radio button.
			/// radio2.FillFormat.ForeColor = Color.LightGreen
			///  
			/// 'Set the line style of the radio button.
			/// radio2.LineFormat.Style = MsoLineStyle.ThickThin
			///  
			/// 'Set the weight of the radio button.
			/// radio2.LineFormat.Weight = 4
			///  
			/// 'Set the line color of the radio button.
			/// radio2.LineFormat.ForeColor = Color.Blue
			///  
			/// 'Set the dash style of the radio button.
			/// radio2.LineFormat.DashStyle = MsoLineDashStyle.Solid
			///  
			/// 'Make the line format visible.
			/// radio2.LineFormat.IsVisible = True
			///  
			/// 'Make the fill format visible.
			/// radio2.FillFormat.IsVisible = True
			///  
			/// 'Add another radio button.
			/// Dim radio3 As Aspose.Cells.RadioButton = excelbook.Worksheets(0).Shapes.AddRadioButton(9, 0, 2, 0, 30, 110)
			///  
			/// 'Set its text string.
			/// radio3.Text = "40-49"
			///  
			/// 'Set A1 cell as a linked cell for the radio button.
			/// radio3.LinkedCell = "A1"
			///  
			/// 'Make the radio button 3-D.
			/// radio3.Shadow = True
			///  
			/// 'Set the foreground color of the radio button.
			/// radio3.FillFormat.ForeColor = Color.LightGreen
			///  
			/// 'Set the line style of the radio button.
			/// radio3.LineFormat.Style = MsoLineStyle.ThickThin
			///  
			/// 'Set the weight of the radio button.
			/// radio3.LineFormat.Weight = 4
			///  
			/// 'Set the line color of the radio button.
			/// radio3.LineFormat.ForeColor = Color.Blue
			///  
			/// 'Set the dash style of the radio button.
			/// radio3.LineFormat.DashStyle = MsoLineDashStyle.Solid
			///  
			/// 'Make the line format visible.
			/// radio3.LineFormat.IsVisible = True
			///  
			/// 'Make the fill format visible.
			/// radio3.FillFormat.IsVisible = True
			///  
			/// 'Get the shapes.
			/// Dim shapeobjects() As Aspose.Cells.Shape = New Aspose.Cells.Shape() {box, radio1, radio2, radio3}
			///  
			/// 'Group the shapes.
			/// Dim group As Aspose.Cells.GroupShape = excelbook.Worksheets(0).Shapes.Group(shapeobjects)
			///  
			/// 'Save the excel file.
			/// excelbook.Save("d:\test\groupshapes.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IGroupShape : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Gets the child shape by index.
			/// </summary>
			/// <param name="index" >the child shape index.</param>
			/// <returns>return the child shape.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Ungroups the shape items.
			/// </summary>
			/// <remarks>If the group shape is grouped by another group shape,nothing will be done.</remarks>
			 virtual void Ungroup()=0;
			/// <summary>
			/// Gets the shapes grouped by this shape.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Drawing::IShape*>> 		GetGroupedIShapes()=0;

	};
}
}
}
