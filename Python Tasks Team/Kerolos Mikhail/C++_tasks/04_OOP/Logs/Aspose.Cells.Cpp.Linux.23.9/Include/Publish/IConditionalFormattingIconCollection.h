#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "IconSetType.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IConditionalFormattingIcon;
		enum IconSetType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents  a collection of <see cref="ConditionalFormattingIcon" />
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
			///  Worksheet sheet = workbook.Worksheets[0];
			///  
			///  //Get Conditional Formatting
			///  ConditionalFormattingCollection cformattings = sheet.ConditionalFormattings;
			///  
			///  //Adds an empty conditional formatting
			///  int index = cformattings.Add();
			///  
			///  //Get newly added Conditional formatting
			///  FormatConditionCollection fcs = cformattings[index];
			///  
			///  //Sets the conditional format range.
			///  CellArea ca = new CellArea();
			///  
			///  ca.StartRow = 0;
			///  
			///  ca.EndRow = 0;
			///  
			///  ca.StartColumn = 0;
			///  
			///  ca.EndColumn = 0;
			///  
			///  fcs.AddArea(ca);
			///  
			///  ca = new CellArea();
			///  
			///  ca.StartRow = 1;
			///  
			///  ca.EndRow = 1;
			///  
			///  ca.StartColumn = 1;
			///  
			///  ca.EndColumn = 1;
			///  
			///  fcs.AddArea(ca);
			///  
			///  //Sets condition
			///   int idx = fcs.AddCondition(FormatConditionType.IconSet);
			///   
			///   FormatCondition cond = fcs[idx];
			///     
			///   //Sets condition's type
			///   cond.IconSet.Type = IconSetType.ArrowsGray3;
			///  
			///  //Add custom iconset condition.
			///   ConditionalFormattingIcon cfIcon = cond.IconSet.CfIcons[0];
			///   
			///   cfIcon.Type = IconSetType.Arrows3;
			///   
			///   cfIcon.Index = 0;
			///   
			///   ConditionalFormattingIcon cfIcon1 = cond.IconSet.CfIcons[1];
			///   
			///    cfIcon1.Type = IconSetType.ArrowsGray3;
			///    
			///    cfIcon1.Index = 1;
			///    
			///    ConditionalFormattingIcon cfIcon2 = cond.IconSet.CfIcons[2];
			///    
			///    cfIcon2.Type = IconSetType.Boxes5;
			///    
			///    cfIcon2.Index = 2;
			///  
			///  //Saving the Excel file
			///  workbook.Save("C:\\output.xls");
			///  
			///  [VB.NET]
			///  
			///  'Instantiating a Workbook object
			///  Dim workbook As New Workbook()
			///  
			///  Dim sheet As Worksheet = workbook.Worksheets(0)
			///  
			///  'Get Conditional Formatting
			///  Dim cformattings As ConditionalFormattingCollection = sheet.ConditionalFormattings
			///  
			///  'Adds an empty conditional formatting
			///  Dim index As Integer = cformattings.Add()
			///  
			///  'Get newly added Conditional formatting
			///  Dim fcs As FormatConditionCollection = cformattings(index)
			///  
			///  'Sets the conditional format range.
			///  Dim ca As New CellArea()
			///  
			///  ca.StartRow = 0
			///  
			///  ca.EndRow = 0
			///  
			///  ca.StartColumn = 0
			///  
			///  ca.EndColumn = 0
			///  
			///  fcs.AddArea(ca)
			///  
			///  ca = New CellArea()
			///  
			///  ca.StartRow = 1
			///  
			///  ca.EndRow = 1
			///  
			///  ca.StartColumn = 1
			///  
			///  ca.EndColumn = 1
			///  
			///  fcs.AddArea(ca)
			///  
			///  //Sets condition
			///  Dim idx As Integer =fcs.AddCondition(FormatConditionType.IconSet)
			///  
			///  Dim cond As FormatCondition=fcs[idx]
			///  
			///  //Sets condition's type
			///  cfIcon.Type = IconSetType.ArrowsGray3
			///  
			///  'Add custom iconset  condition.
			///  Dim cfIcon As ConditionalFormattingIcon = cond.IconSet.CfIcons[0]
			///  
			///  cfIcon.Type = IconSetType.Arrows3
			/// 
			///  cfIcon.Index=0
			///  
			///  Dim cfIcon1 As ConditionalFormattingIcon = cond.IconSet.CfIcons[1]
			///  
			///  cfIcon1.Type = IconSetType.ArrowsGray3
			///  
			///  cfIcon1.Index=1
			///  
			///  Dim cfIcon2 As ConditionalFormattingIcon = cond.IconSet.CfIcons[2]
			///  
			///  cfIcon2.Type = IconSetType.Boxes5
			///  
			///  cfIcon2.Index=2
			///  
			///  'Saving the Excel file
			///  workbook.Save("C:\output.xls")
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IConditionalFormattingIconCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the ConditionalFormattingIcon element at the specified index.
			/// </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingIcon> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Adds <see cref="ConditionalFormattingIcon" />
			///  object.
			/// </summary>
			/// <param name="type" >The value type.</param>
			/// <param name="index" >The Index.</param>
			/// <returns>Returns the index of new object in the list.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::IconSetType type , Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Adds <see cref="ConditionalFormattingIcon" />
			///  object.
			/// </summary>
			/// <param name="cficon" >Returns the index of new object in the list.</param>
			 virtual Aspose::Cells::Systems::Int32 		Add(intrusive_ptr<Aspose::Cells::IConditionalFormattingIcon> cficon)=0;

	};
}
}
