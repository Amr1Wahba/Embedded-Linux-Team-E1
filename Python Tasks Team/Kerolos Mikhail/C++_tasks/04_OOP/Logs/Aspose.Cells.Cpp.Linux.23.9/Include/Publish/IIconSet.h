#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "IconSetType.h"

namespace Aspose {
	namespace Cells {
		class IConditionalFormattingIconCollection;
		class IConditionalFormattingValueCollection;
		enum IconSetType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Describe the IconSet conditional formatting rule. 
			/// This conditional formatting rule applies icons to cells
			/// according to their values.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// 
			/// Worksheet sheet = workbook.Worksheets[0];
			/// 
			/// //Adds an empty conditional formatting
			/// int index = sheet.ConditionalFormattings.Add();
			/// 
			/// FormatConditions fcs = sheet.ConditionalFormattings[index];
			/// 
			/// //Sets the conditional format range.
			/// CellArea ca = new CellArea();
			/// 
			/// ca.StartRow = 0;
			/// 
			/// ca.EndRow = 2;
			/// 
			/// ca.StartColumn = 0;
			/// 
			/// ca.EndColumn = 0;
			/// 
			/// fcs.AddArea(ca);
			/// 
			/// //Adds condition.
			/// int idx = fcs.AddCondtion(FormatConditionType.IconSet);
			/// 
			/// fcs.AddArea(ca);
			/// 
			/// FormatCondition cond = fcs[idx];
			/// 
			/// //Get Icon Set
			/// IconSet iconSet = cond.IconSet;
			/// 
			/// //Set Icon Type
			/// iconSet.Type = IconSetType.Arrows3;
			/// 
			/// //Put Cell Values
			/// Aspose.Cells.Cell cell1 = sheet.Cells["A1"];
			/// 
			/// cell1.PutValue(10);
			/// 
			/// Aspose.Cells.Cell cell2 = sheet.Cells["A2"];
			/// 
			/// cell2.PutValue(120);
			/// 
			/// Aspose.Cells.Cell cell3 = sheet.Cells["A3"];
			/// 
			/// cell3.PutValue(260);
			/// 
			/// //Saving the Excel file
			/// workbook.Save("D:\\book1.xlsx");
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As New Workbook()
			/// 
			/// Dim sheet As Worksheet = workbook.Worksheets(0)
			/// 
			/// 'Adds an empty conditional formatting
			/// Dim index As Integer = sheet.ConditionalFormattings.Add()
			/// 
			/// Dim fcs As FormatConditions = sheet.ConditionalFormattings(index)
			/// 
			/// 'Sets the conditional format range.
			/// Dim ca As New CellArea()
			/// 
			/// ca.StartRow = 0
			/// 
			/// ca.EndRow = 2
			/// 
			/// ca.StartColumn = 0
			/// 
			/// ca.EndColumn = 0
			/// 
			/// fcs.AddArea(ca)
			/// 
			/// 'Adds condition.
			/// Dim idx As Integer = fcs.AddCondtion(FormatConditionType.IconSet)
			/// 
			/// fcs.AddArea(ca)
			/// 
			/// Dim cond As FormatCondition = fcs(idx)
			/// 
			/// 'Get Icon Set
			/// Dim iconSet As IconSet = cond.IconSet
			/// 
			/// 'Set Icon Type
			/// iconSet.Type = IconSetType.Arrows3
			/// 
			/// 'Put Cell Values
			/// Dim cell1 As Aspose.Cells.Cell = sheet.Cells("A1")
			/// 
			/// cell1.PutValue(10)
			/// 
			/// Dim cell2 As Aspose.Cells.Cell = sheet.Cells("A2")
			/// 
			/// cell2.PutValue(120)
			/// 
			/// Dim cell3 As Aspose.Cells.Cell = sheet.Cells("A3")
			/// 
			/// cell3.PutValue(260)
			/// 
			/// 'Saving the Excel file
			/// workbook.Save("D:\book1.xlsx") 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IIconSet : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Get the<see cref="ConditionalFormattingIcon" />
			///  from the collection
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingIconCollection> 		GetICfIcons()=0;
			/// <summary>
			/// Get the CFValueObjects instance.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValueCollection> 		GetICfvos()=0;
			/// <summary>
			/// Get or Set the icon set type to display.
			/// Setting the type will auto check if the current Cfvos's count is
			/// accord with the new type. If not accord, old Cfvos will be cleaned and 
			/// default Cfvos will be added.
			/// </summary>
			 virtual Aspose::Cells::IconSetType GetType()=0;
			/// <summary>
			/// Get or Set the icon set type to display.
			/// Setting the type will auto check if the current Cfvos's count is
			/// accord with the new type. If not accord, old Cfvos will be cleaned and 
			/// default Cfvos will be added.
			/// </summary>
			 virtual void SetType(Aspose::Cells::IconSetType value)=0;
			/// <summary>
			/// Indicates whether the icon set is custom.
			/// Default value is false.
			/// </summary>
			 virtual bool IsCustom()=0;
			/// <summary>
			/// Get or set the flag indicating whether to show the values of the cells on which this icon set is applied.
			/// Default value is true.
			/// </summary>
			 virtual bool GetShowValue()=0;
			/// <summary>
			/// Get or set the flag indicating whether to show the values of the cells on which this icon set is applied.
			/// Default value is true.
			/// </summary>
			 virtual void SetShowValue(bool value)=0;
			/// <summary>
			/// Get or set the flag indicating whether to reverses the default order of the icons in this icon set.
			/// Default value is false.
			/// </summary>
			 virtual bool GetReverse()=0;
			/// <summary>
			/// Get or set the flag indicating whether to reverses the default order of the icons in this icon set.
			/// Default value is false.
			/// </summary>
			 virtual void SetReverse(bool value)=0;

	};
}
}
