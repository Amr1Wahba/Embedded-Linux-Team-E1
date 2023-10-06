#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "OperatorType.h"
#include "FormatConditionType.h"
#include "TimePeriodType.h"

namespace Aspose {
	namespace Cells {
		enum OperatorType;
		class IStyle;
		enum FormatConditionType;
		class IIconSet;
		class IDataBar;
		class IColorScale;
		class ITop10;
		class IAboveAverage;
		enum TimePeriodType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents conditional formatting condition.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// Worksheet sheet = workbook.Worksheets[0];
			///  
			/// //Adds an empty conditional formatting
			/// int index = sheet.ConditionalFormattings.Add();
			/// FormatConditionCollection fcs = sheet.ConditionalFormattings[index];
			///  
			/// //Sets the conditional format range.
			/// CellArea ca = new CellArea();
			/// ca.StartRow = 0;
			/// ca.EndRow = 0;
			/// ca.StartColumn = 0;
			/// ca.EndColumn = 0;
			/// fcs.AddArea(ca);
			///  
			/// ca = new CellArea();
			/// ca.StartRow = 1;
			/// ca.EndRow = 1;
			/// ca.StartColumn = 1;
			/// ca.EndColumn = 1;
			/// fcs.AddArea(ca);
			///  
			/// //Adds condition.
			/// int conditionIndex = fcs.AddCondition(FormatConditionType.CellValue, OperatorType.Between, "=A2", "100");
			///  
			/// //Adds condition.
			/// int conditionIndex2 = fcs.AddCondition(FormatConditionType.CellValue, OperatorType.Between, "50", "100");
			///  
			/// //Sets the background color.
			/// FormatCondition fc = fcs[conditionIndex];
			/// fc.Style.BackgroundColor = Color.Red;
			///  
			/// //Saving the Excel file
			/// workbook.Save("C:\\output.xls");
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// Dim sheet As Worksheet = workbook.Worksheets(0)
			///  
			/// ' Adds an empty conditional formatting
			/// Dim index As Integer = sheet.ConditionalFormattings.Add()
			/// Dim fcs As FormatConditionCollection = sheet.ConditionalFormattings(index)
			///  
			/// 'Sets the conditional format range.
			/// Dim ca As CellArea = New CellArea()
			/// ca.StartRow = 0
			/// ca.EndRow = 0
			/// ca.StartColumn = 0
			/// ca.EndColumn = 0
			/// fcs.AddArea(ca)
			/// ca = New CellArea()
			/// ca.StartRow = 1
			/// ca.EndRow = 1
			/// ca.StartColumn = 1
			/// ca.EndColumn = 1
			/// fcs.AddArea(ca)
			///  
			/// 'Adds condition.
			/// Dim conditionIndex As Integer = fcs.AddCondition(FormatConditionType.CellValue, OperatorType.Between, "=A2", "100")
			///  
			/// 'Adds condition.
			/// Dim conditionIndex2 As Integer = fcs.AddCondition(FormatConditionType.CellValue, OperatorType.Between, "50", "100")
			///  
			/// 'Sets the background color.
			/// Dim fc As FormatCondition = fcs(conditionIndex)
			/// fc.Style.BackgroundColor = Color.Red
			///  
			/// 'Saving the Excel file
			/// workbook.Save("C:\output.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IFormatCondition : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <returns>The value or expression associated with this format condition.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula1(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <returns>The value or expression associated with this format condition.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula2(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets the value or expression of the conditional formatting of the cell.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns>The value or expression associated with the conditional formatting of the cell.</returns>
			/// <remarks>The given cell must be contained by this conditional formatting, otherwise null will be returned.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula1(bool isR1C1 , bool isLocal , Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Gets the value or expression of the conditional formatting of the cell.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns>The value or expression associated with the conditional formatting of the cell.</returns>
			/// <remarks>The given cell must be contained by this conditional formatting, otherwise null will be returned.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula2(bool isR1C1 , bool isLocal , Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Sets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="formula1" >The value or expression associated with this format condition.
			/// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
			/// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
			/// <param name="formula2" >The value or expression associated with this format condition. The input format is same with formula1</param>
			/// <param name="isR1C1" >Whether the formula is R1C1 formula.</param>
			/// <param name="isLocal" >Whether the formula is locale formatted.</param>
			 virtual void SetFormulas(intrusive_ptr<Aspose::Cells::Systems::String> formula1 , intrusive_ptr<Aspose::Cells::Systems::String> formula2 , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Sets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="formula" >The value or expression associated with this format condition.
			/// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
			/// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
			/// <param name="isR1C1" >Whether the formula is R1C1 formula.</param>
			/// <param name="isLocal" >Whether the formula is locale formatted.</param>
			 virtual void SetFormula1(intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Sets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="formula" >The value or expression associated with this format condition.
			/// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
			/// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
			/// <param name="isR1C1" >Whether the formula is R1C1 formula.</param>
			/// <param name="isLocal" >Whether the formula is locale formatted.</param>
			 virtual void SetFormula2(intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets and sets the value or expression associated with conditional formatting.
			/// </summary>
			/// <remarks>
			/// Please add all areas before setting formula.
			/// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
			/// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula1()=0;
			/// <summary>
			/// Gets and sets the value or expression associated with conditional formatting.
			/// </summary>
			/// <remarks>
			/// Please add all areas before setting formula.
			/// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
			/// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
			/// </remarks>
			 virtual void SetFormula1(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the formula of the conditional formatting of the cell.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns>The formula.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula1(Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Gets and sets the value or expression associated with conditional formatting.
			/// </summary>
			/// <remarks>
			/// Please add all areas before setting formula.
			/// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
			/// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula2()=0;
			/// <summary>
			/// Gets and sets the value or expression associated with conditional formatting.
			/// </summary>
			/// <remarks>
			/// Please add all areas before setting formula.
			/// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
			/// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
			/// </remarks>
			 virtual void SetFormula2(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the formula of the conditional formatting of the cell.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns>The formula.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula2(Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Gets and sets the conditional format operator type.
			/// </summary>
			/// <see cref="OperatorType" />
			/// 
			 virtual Aspose::Cells::OperatorType GetOperator()=0;
			/// <summary>
			/// Gets and sets the conditional format operator type.
			/// </summary>
			/// <see cref="OperatorType" />
			/// 
			 virtual void SetOperator(Aspose::Cells::OperatorType value)=0;
			/// <summary>
			/// True, no rules with lower priority may be applied over this rule, when this rule evaluates to true.
			/// Only applies for Excel 2007;
			/// </summary>
			 virtual bool GetStopIfTrue()=0;
			/// <summary>
			/// True, no rules with lower priority may be applied over this rule, when this rule evaluates to true.
			/// Only applies for Excel 2007;
			/// </summary>
			 virtual void SetStopIfTrue(bool value)=0;
			/// <summary>
			/// The priority of this conditional formatting rule. This value is used to determine which
			/// format should be evaluated and rendered. Lower numeric values are higher priority than
			/// higher numeric values, where '1' is the highest priority.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetPriority()=0;
			/// <summary>
			/// The priority of this conditional formatting rule. This value is used to determine which
			/// format should be evaluated and rendered. Lower numeric values are higher priority than
			/// higher numeric values, where '1' is the highest priority.
			/// </summary>
			 virtual void SetPriority(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or setts style of conditional formatted cell ranges.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;
			/// <summary>
			/// Gets or setts style of conditional formatted cell ranges.
			/// </summary>
			 virtual void 		SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> value)=0;
			/// <summary>
			/// Gets and sets whether the conditional format Type.
			/// </summary>
			/// <see cref="FormatConditionType" />
			/// 
			 virtual Aspose::Cells::FormatConditionType GetType()=0;
			/// <summary>
			/// Gets and sets whether the conditional format Type.
			/// </summary>
			/// <see cref="FormatConditionType" />
			/// 
			 virtual void SetType(Aspose::Cells::FormatConditionType value)=0;
			/// <summary>
			/// Get the conditional formatting's "IconSet" instance.
			/// The default instance's IconSetType is TrafficLights31.
			/// Valid only for type = IconSet.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IIconSet> 		GetIIconSet()=0;
			/// <summary>
			/// Get the conditional formatting's "DataBar" instance.
			/// The default instance's color is blue.
			/// Valid only for type is DataBar.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IDataBar> 		GetIDataBar()=0;
			/// <summary>
			/// Get the conditional formatting's "ColorScale" instance.
			/// The default instance is a "green-yellow-red" 3ColorScale .
			/// Valid only for type = ColorScale.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IColorScale> 		GetIColorScale()=0;
			/// <summary>
			/// Get the conditional formatting's "Top10" instance.
			/// The default instance's rule highlights cells whose
			/// values fall in the top 10 bracket.
			/// Valid only for type is Top10.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::ITop10> 		GetITop10()=0;
			/// <summary>
			/// Get the conditional formatting's "AboveAverage" instance.
			/// The default instance's rule highlights cells that are 
			/// above the average for all values in the range.
			/// Valid only for type = AboveAverage.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IAboveAverage> 		GetIAboveAverage()=0;
			/// <summary>
			/// The text value in a "text contains" conditional formatting rule. 
			/// Valid only for type = containsText, notContainsText, beginsWith and endsWith.
			/// The default value is null.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// The text value in a "text contains" conditional formatting rule. 
			/// Valid only for type = containsText, notContainsText, beginsWith and endsWith.
			/// The default value is null.
			/// </summary>
			 virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// The applicable time period in a "date occurring" conditional formatting rule. 
			/// Valid only for type = timePeriod.
			/// The default value is TimePeriodType.Today.
			/// </summary>
			 virtual Aspose::Cells::TimePeriodType GetTimePeriod()=0;
			/// <summary>
			/// The applicable time period in a "date occurring" conditional formatting rule. 
			/// Valid only for type = timePeriod.
			/// The default value is TimePeriodType.Today.
			/// </summary>
			 virtual void SetTimePeriod(Aspose::Cells::TimePeriodType value)=0;

	};
}
}
