#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "DataBarAxisPosition.h"
#include "DataBarFillType.h"
#include "TextDirectionType.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"

namespace Aspose {
	namespace Cells {
		enum DataBarAxisPosition;
		enum DataBarFillType;
		enum TextDirectionType;
		class IDataBarBorder;
		class INegativeBarFormat;
		class IConditionalFormattingValue;
		class ICell;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class IImageOrPrintOptions;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Describe the DataBar conditional formatting rule. 
			/// This conditional formatting rule displays a gradated
			/// data bar in the range of cells.
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
			/// int idx = fcs.AddCondtion(FormatConditionType.DataBar);
			/// 
			/// fcs.AddArea(ca);
			/// 
			/// FormatCondition cond = fcs[idx];
			/// 
			/// //Get Databar
			/// DataBar dataBar = cond.DataBar;
			/// 
			/// dataBar.Color = Color.Orange;
			/// 
			/// //Set Databar properties
			/// dataBar.MinCfvo.Type = FormatConditionValueType.Percentile;
			/// 
			/// dataBar.MinCfvo.Value = 30;
			/// 
			/// dataBar.ShowValue = false;
			/// 
			/// dataBar.BarBorder.Type = DataBarBorderType.DataBarBorderSolid;
			/// 
			/// dataBar.BarBorder.Color = Color.Plum;
			/// 
			///  dataBar.BarFillType = DataBarFillType.DataBarFillSolid;
			///   
			///  dataBar.AxisColor = Color.Red;
			///  
			///  dataBar.AxisPosition = DataBarAxisPosition.DataBarAxisMidpoint;
			///  
			///  dataBar.NegativeBarFormat.ColorType = DataBarNegativeColorType.DataBarColor;
			///  
			///  dataBar.NegativeBarFormat.Color = Color.White;
			///  
			///  dataBar.NegativeBarFormat.BorderColorType = DataBarNegativeColorType.DataBarColor;
			///  
			///  dataBar.NegativeBarFormat.BorderColor = Color.Yellow;
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
			/// Dim idx As Integer = fcs.AddCondtion(FormatConditionType.DataBar)
			/// 
			/// fcs.AddArea(ca)
			/// 
			/// Dim cond As FormatCondition = fcs(idx)
			/// 
			/// 'Get Databar
			/// Dim dataBar As DataBar = cond.DataBar
			/// 
			/// dataBar.Color = Color.Orange
			/// 
			/// 'Set Databar properties
			/// dataBar.MinCfvo.Type = FormatConditionValueType.Percentile
			/// 
			/// dataBar.MinCfvo.Value = 30
			/// 
			/// dataBar.ShowValue = False
			/// 
			/// dataBar.BarBorder.Type = DataBarBorderType.DataBarBorderSolid
			/// 
			/// dataBar.BarBorder.Color = Color.Plum
			/// 
			///  dataBar.BarFillType = DataBarFillType.DataBarFillSolid
			///   
			///  dataBar.AxisColor = Color.Red
			///  
			///  dataBar.AxisPosition = DataBarAxisPosition.DataBarAxisMidpoint
			///  
			///  dataBar.NegativeBarFormat.ColorType = DataBarNegativeColorType.DataBarColor
			///  
			///  dataBar.NegativeBarFormat.Color = Color.White
			///  
			///  dataBar.NegativeBarFormat.BorderColorType = DataBarNegativeColorType.DataBarColor
			///  
			///  dataBar.NegativeBarFormat.BorderColor = Color.Yellow
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
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IDataBar : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the color of the axis for cells with conditional formatting as data bars.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetAxisColor()=0;
			/// <summary>
			/// Gets the color of the axis for cells with conditional formatting as data bars.
			/// </summary>
			 virtual void SetAxisColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets or sets the position of the axis of the data bars specified by a conditional formatting rule.
			/// </summary>
			 virtual Aspose::Cells::DataBarAxisPosition GetAxisPosition()=0;
			/// <summary>
			/// Gets or sets the position of the axis of the data bars specified by a conditional formatting rule.
			/// </summary>
			 virtual void SetAxisPosition(Aspose::Cells::DataBarAxisPosition value)=0;
			/// <summary>
			/// Gets or sets how a data bar is filled with color.
			/// </summary>
			 virtual Aspose::Cells::DataBarFillType GetBarFillType()=0;
			/// <summary>
			/// Gets or sets how a data bar is filled with color.
			/// </summary>
			 virtual void SetBarFillType(Aspose::Cells::DataBarFillType value)=0;
			/// <summary>
			/// Gets or sets the direction the databar is displayed.
			/// </summary>
			 virtual Aspose::Cells::TextDirectionType GetDirection()=0;
			/// <summary>
			/// Gets or sets the direction the databar is displayed.
			/// </summary>
			 virtual void SetDirection(Aspose::Cells::TextDirectionType value)=0;
			/// <summary>
			/// Gets an object that specifies the border of a data bar.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IDataBarBorder> 		GetIBarBorder()=0;
			/// <summary>
			/// Gets the NegativeBarFormat object associated with a data bar conditional formatting rule.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::INegativeBarFormat> 		GetINegativeBarFormat()=0;
			/// <summary>
			/// Get or set this DataBar's min value object.
			/// Cannot set null or CFValueObject with type FormatConditionValueType.Max to it.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValue> 		GetMinICfvo()=0;
			/// <summary>
			/// Get or set this DataBar's max value object.
			/// Cannot set null or CFValueObject with type FormatConditionValueType.Min to it.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValue> 		GetMaxICfvo()=0;
			/// <summary>
			/// Get or set this DataBar's Color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Get or set this DataBar's Color.
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Represents the min length of data bar . 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetMinLength()=0;
			/// <summary>
			/// Represents the min length of data bar . 
			/// </summary>
			 virtual void SetMinLength(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the max length of data bar . 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetMaxLength()=0;
			/// <summary>
			/// Represents the max length of data bar . 
			/// </summary>
			 virtual void SetMaxLength(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Get or set the flag indicating whether to show the values of the cells on which this data bar is applied.
			/// Default value is true.
			/// </summary>
			 virtual bool GetShowValue()=0;
			/// <summary>
			/// Get or set the flag indicating whether to show the values of the cells on which this data bar is applied.
			/// Default value is true.
			/// </summary>
			 virtual void SetShowValue(bool value)=0;
			/// <summary>
			/// Render data bar in cell to image byte array.
			/// </summary>
			/// <param name="cell" >Indicate the data bar in which cell to be rendered</param>
			/// <param name="imgOpts" >ImageOrPrintOptions contains some property of output image</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> 		ToImage(intrusive_ptr<Aspose::Cells::ICell> cell , intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> imgOpts)=0;

	};
}
}
