#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "SelectionType.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		class ICell;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum SelectionType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a list box object.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Create a new Workbook.
			/// Workbook workbook = new Workbook();
			///  
			/// //Get the first worksheet.
			/// Worksheet sheet = workbook.Worksheets[0];
			///  
			/// //Get the worksheet cells collection.
			/// Cells cells = sheet.Cells;
			///  
			/// //Input a value.
			/// cells["B3"].PutValue("Choose Dept:");
			///  
			/// //Set it bold.
			/// cells["B3"].Style.Font.IsBold = true;
			///  
			/// //Input some values that denote the input range
			/// //for the list box.
			/// cells["A2"].PutValue("Sales");
			/// cells["A3"].PutValue("Finance");
			/// cells["A4"].PutValue("MIS");
			/// cells["A5"].PutValue("RD");
			/// cells["A6"].PutValue("Marketing");
			/// cells["A7"].PutValue("HRA");
			///  
			/// //Add a new list box.
			/// ListBox listBox = sheet.Shapes.AddListBox(2, 0, 3, 0, 122, 100);
			///  
			/// //Set the placement type.
			/// listBox.Placement = PlacementType.FreeFloating;
			///  
			/// //Set the linked cell.
			/// listBox.LinkedCell = "A1";
			///  
			/// //Set the input range.
			/// listBox.InputRange = "A2:A7";
			///  
			/// //Set the selection tyle.
			/// listBox.SelectionType = SelectionType.Single;
			///  
			/// //Set the list box with 3-D shading.
			/// listBox.Shadow = true;
			///  
			/// //Saves the file.
			/// workbook.Save(@"d:\test\tstlistbox.xls");
			/// 
			/// [VB.NET]
			/// 
			/// 'Create a new Workbook.
			/// Dim workbook As Aspose.Cells.Workbook = New Aspose.Cells.Workbook()
			///  
			/// 'Get the first worksheet.
			/// Dim sheet As Worksheet = workbook.Worksheets(0)
			///  
			/// 'Get the worksheet cells collection.
			/// Dim cells As Cells = sheet.Cells
			///  
			/// 'Input a value.
			/// cells("B3").PutValue("Choose Dept:")
			///  
			/// 'Set it bold.
			/// cells("B3").Style.Font.IsBold = True
			///  
			/// 'Input some values that denote the input range
			/// 'for the list box.
			/// cells("A2").PutValue("Sales")
			/// cells("A3").PutValue("Finance")
			/// cells("A4").PutValue("MIS")
			/// cells("A5").PutValue("RD")
			/// cells("A6").PutValue("Marketing")
			/// cells("A7").PutValue("HRA")
			///  
			/// 'Add a new list box.
			/// Dim listBox As Aspose.Cells.ListBox = sheet.Shapes.AddListBox(2, 0, 3, 0, 122, 100)
			///  
			/// 'Set the placement type.
			/// listBox.Placement = PlacementType.FreeFloating
			///  
			/// 'Set the linked cell.
			/// listBox.LinkedCell = "A1"
			///  
			/// 'Set the input range.
			/// listBox.InputRange = "A2:A7"
			///  
			/// 'Set the selection tyle.
			/// listBox.SelectionType = SelectionType.Single
			///  
			/// 'Set the list box with 3-D shading.
			/// listBox.Shadow = True
			///  
			/// 'Saves the file.
			/// workbook.Save("d:\test\tstlistbox.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IListBox : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Gets the number of items in the list box.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetItemCount()=0;
			/// <summary>
			/// Gets or sets the index number of the currently selected item in a list box or combo box.
			/// Zero-based.
			/// </summary>
			/// <remarks>-1 presents no item is selected.</remarks>
			 virtual Aspose::Cells::Systems::Int32 GetSelectedIndex()=0;
			/// <summary>
			/// Gets or sets the index number of the currently selected item in a list box or combo box.
			/// Zero-based.
			/// </summary>
			/// <remarks>-1 presents no item is selected.</remarks>
			 virtual void SetSelectedIndex(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Sets whether the item is selected
			/// </summary>
			/// <param name="itemIndex" >The item index</param>
			/// <param name="isSelected" >Whether the item is selected.
			/// True means that this item should be selected.
			/// False means that this item should be unselected.
			/// </param>
			 virtual void SelectedItem(Aspose::Cells::Systems::Int32 itemIndex , bool isSelected)=0;
			/// <summary>
			/// Indicates whether the item is selected.
			/// </summary>
			/// <param name="itemIndex" >The item index.</param>
			/// <returns>whether the item is selected.</returns>
			 virtual bool IsSelected(Aspose::Cells::Systems::Int32 itemIndex)=0;
			/// <summary>
			/// Gets the selected cells.
			/// Returns null if the input range is not set or no item is selected
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::ICell*>> 		GetSelectedICells()=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// Gets or sets the selection mode of the specified list box. 
			/// </summary>
			 virtual Aspose::Cells::Drawing::SelectionType GetSelectionType()=0;
			/// <summary>
			/// Gets or sets the selection mode of the specified list box. 
			/// </summary>
			 virtual void SetSelectionType(Aspose::Cells::Drawing::SelectionType value)=0;
			/// <summary>
			/// Specifies the amount by which the control's value is changed 
			/// when the user clicks on the scrollbar's page up or page down region.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetPageChange()=0;
			/// <summary>
			/// Specifies the amount by which the control's value is changed 
			/// when the user clicks on the scrollbar's page up or page down region.
			/// </summary>
			 virtual void SetPageChange(Aspose::Cells::Systems::Int32 value)=0;

	};
}
}
}
