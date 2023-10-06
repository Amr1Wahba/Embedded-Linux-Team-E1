#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/DateTime.h"
#include "CellValueType.h"
#include "CellValueFormatStrategy.h"
#include "NumberCategoryType.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Collections/IEnumerator.h"
#include "Aspose.Cells.Systems/Array2D.h"

namespace Aspose {
	namespace Cells {
		class ICalculationOptions;
		class ICustomFunction;
		class IWorksheet;
		enum CellValueType;
		enum CellValueFormatStrategy;
		enum NumberCategoryType;
		class IStyle;
		class IFormatConditionCollection;
		class IStyleFlag;
		class IReferredAreaCollection;
		class ICell;
		class ICellArea;
		class IFontSetting;
		class IReplaceOptions;
		class IRange;
		class IComment;
		class IConditionalFormattingResult;
		class IValidation;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Tables {
			class IListObject;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Encapsulates the object that represents a single Workbook cell.
			///  </summary>
			/// <example><code>
			/// 	[C#]
			/// 	
			/// 	Workbook excel = new Workbook();
			/// 	Cells cells = excel.Worksheets[0].Cells;
			/// 	
			/// 	//Put a string into a cell
			/// 	Cell cell = cells[0, 0];
			/// 	cell.PutValue("Hello");
			/// 	
			/// 	string first = cell.StringValue;
			/// 		
			/// 	//Put an integer into a cell
			/// 	cell = cells["B1"];
			/// 	cell.PutValue(12);
			/// 	
			/// 	int second = cell.IntValue;
			/// 	
			/// 	//Put a double into a cell
			/// 	cell = cells[0, 2];
			/// 	cell.PutValue(-1.234);
			/// 	
			/// 	double third = cell.DoubleValue;
			/// 	
			/// 	//Put a formula into a cell
			/// 	cell = cells["D1"];
			/// 	cell.Formula = "=B1 + C1";
			/// 	
			/// 	//Put a combined formula: "sum(average(b1,c1), b1)" to cell at b2
			/// 	cell = cells["b2"];
			/// 	cell.Formula = "=sum(average(b1,c1), b1)";
			/// 	
			/// 	//Set style of a cell
			/// 	Style style = cell.GetStyle();
			/// 	//Set background color
			/// 	style.BackgroundColor = Color.Yellow;
			/// 	//Set format of a cell
			/// 	style.Font.Name = "Courier New";
			/// 	style.VerticalAlignment = TextAlignmentType.Top;
			///  cell.SetStyle(style);
			/// 
			/// 
			///  
			///  [Visual Basic]
			///  
			/// 	Dim excel as Workbook = new Workbook()
			/// 	Dim cells as Cells = exce.Worksheets(0).Cells
			/// 	
			/// 	'Put a string into a cell
			/// 	Dim cell as Cell = cells(0, 0)
			/// 	cell.PutValue("Hello")
			/// 	
			/// 	Dim first as String = cell.StringValue
			/// 		
			/// 	//Put an integer into a cell
			/// 	cell = cells("B1")
			/// 	cell.PutValue(12)
			/// 	
			/// 	Dim second as Integer = cell.IntValue
			/// 	
			/// 	//Put a double into a cell
			/// 	cell = cells(0, 2)
			/// 	cell.PutValue(-1.234)
			/// 	
			/// 	Dim third as Double = cell.DoubleValue
			/// 	
			/// 	//Put a formula into a cell
			/// 	cell = cells("D1")
			/// 	cell.Formula = "=B1 + C1"
			/// 	
			/// 	//Put a combined formula: "sum(average(b1,c1), b1)" to cell at b2
			/// 	cell = cells("b2")
			/// 	cell.Formula = "=sum(average(b1,c1), b1)"
			/// 		
			/// 	//Set style of a cell
			/// 	Dim style as Style = cell.GetStyle()
			/// 	
			/// 	//Set background color
			/// 	style.BackgroundColor = Color.Yellow
			/// 	//Set font of a cell
			/// 	style.Font.Name = "Courier New"
			/// 	style.VerticalAlignment = TextAlignmentType.Top
			/// 	cell.SetStyle(style)
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ICell : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Calculates the formula of the cell.
			/// </summary>
			/// <param name="options" >Options for calculation</param>
			 virtual void 		Calculate(intrusive_ptr<Aspose::Cells::ICalculationOptions> options)=0;
			/// <summary>
			/// Calculates the formula of the cell.
			/// </summary>
			/// <param name="ignoreError" >Indicates if hide the error in calculating formulas.
			/// The error may be unsupported function, external links, etc.</param>
			/// <param name="customFunction" >The custom formula calculation functions to extend the calculation engine.</param>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Calculate(CalculationOptions) method.
			/// This method will be removed 12 months later since August 2020. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void Calculate(bool ignoreError , intrusive_ptr<Aspose::Cells::ICustomFunction> customFunction)=0;
			/// <summary>
			/// Gets the parent worksheet.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetIWorksheet()=0;
			/// <summary>
			/// Puts a boolean value into the cell.
			/// </summary>
			/// <param name="boolValue" />
			/// 
			 virtual void PutValue(bool boolValue)=0;
			/// <summary>
			/// Puts an integer value into the cell.
			/// </summary>
			/// <param name="intValue" >Input value</param>
			 virtual void PutValue(Aspose::Cells::Systems::Int32 intValue)=0;
			/// <summary>
			/// Puts a double value into the cell.
			/// </summary>
			/// <param name="doubleValue" >Input value</param>
			 virtual void PutValue(Aspose::Cells::Systems::Double doubleValue)=0;
			/// <summary>
			/// Puts a value into the cell, if appropriate the value will be converted to other data type and cell's number format will be reset.
			/// </summary>
			/// <param name="stringValue" >Input value</param>
			/// <param name="isConverted" >True: converted to other data type if appropriate.</param>
			/// <param name="setStyle" >True: set the number format to cell's style when converting to other data type</param>
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::Systems::String> stringValue , bool isConverted , bool setStyle)=0;
			/// <summary>
			/// Puts a string value into the cell and converts the value to other data type if appropriate.
			/// </summary>
			/// <param name="stringValue" >Input value</param>
			/// <param name="isConverted" >True: converted to other data type if appropriate.</param>
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::Systems::String> stringValue , bool isConverted)=0;
			/// <summary>
			/// Puts a string value into the cell.
			/// </summary>
			/// <param name="stringValue" >Input value</param>
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::Systems::String> stringValue)=0;
			/// <summary>
			///  Puts a DateTime value into the cell.
			///  </summary>
			/// <param name="dateTime" >Input value</param>
			/// <remarks>Setting a DateTime value for a cell dose not means the cell will be formatted as date time automatically.
			///  DateTime value was maintained as numeric value in the data model of both ms excel and Aspose.Cells.
			///  Whether the numeric value will be taken as the numeric value itself or date time
			///  depends on the number format applied on this cell. If this cell has not been formatted as date time,
			///  it will be displayed as a numeric value even though what you input is DateTime.
			///  </remarks>
			/// <example>
			///  This example shows how to set DateTime value to a cell and make it be displayed as date time.
			///  <code>
			/// 	[C#]
			/// 	
			/// 	Workbook excel = new Workbook();
			/// 	Cells cells = excel.Worksheets[0].Cells;
			/// 	
			/// 	//Put date time into a cell
			/// 	Cell cell = cells[0, 0];
			/// 	cell.PutValue(new DateTime(2023, 5, 15));
			/// 	Style style = cell.GetStyle(false);
			/// 	style.Number = 14;
			/// 	cell.SetStyle(style);
			/// 	</code>
			/// 
			/// 	</example>
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::Systems::DateTime> dateTime)=0;
			/// <summary>
			/// Gets the DateTime value contained in the cell.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetDateTimeValue()=0;
			/// <summary>
			/// Puts an object value into the cell.
			/// </summary>
			/// <param name="objectValue" >input value</param>
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::Systems::Object> objectValue)=0;
			/// <summary>
			/// Gets row number (zero based) of the cell.
			/// </summary>
			/// <value>Cell row number</value>
			 virtual Aspose::Cells::Systems::Int32 GetRow()=0;
			/// <summary>
			/// Gets column number (zero based) of the cell.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetColumn()=0;
			/// <summary>
			/// Represents if the specified cell contains formula.
			/// </summary>
			 virtual bool IsFormula()=0;
			/// <summary>
			/// Represents cell value type.
			/// </summary>
			 virtual Aspose::Cells::CellValueType GetType()=0;
			/// <summary>
			/// Gets the name of the cell. 
			/// </summary>
			/// <remarks>
			/// A cell name includes its column letter and row number. For example, the name of a cell in row 0 and column 0 is A1.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Checks if the value of this cell is an error.
			/// </summary>
			/// <remarks>Also applies to formula cell to check whether the calculated result is an error.</remarks>
			 virtual bool IsErrorValue()=0;
			/// <summary>
			/// Indicates whether the inner value of this cell is numeric(int, double and datetime)
			/// </summary>
			/// <remarks>Also applies to formula cell to check the calculated result</remarks>
			 virtual bool IsNumericValue()=0;
			/// <summary>
			/// Gets the string value by specific formatted strategy.
			/// </summary>
			/// <param name="formatStrategy" >The formatted strategy.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetStringValue(Aspose::Cells::CellValueFormatStrategy formatStrategy)=0;
			/// <summary>
			/// Gets the string value contained in the cell. If the type of this cell is string, then return the string value itself.
			/// For other cell types, the formatted string value (formatted with the specified style of this cell) will be returned.
			/// The formatted cell value is same with what you can get from excel when copying a cell as text(such as
			/// copying cell to text editor or exporting to csv).
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetStringValue()=0;
			/// <summary>
			/// Gets cell's value as string without any format.
			/// </summary>
			/// <remarks>
			/// NOTE: This method is now obsolete. Instead,
			/// User should get the value object and format it according to the value type and the specific requirement.
			/// This property will be removed 12 months later since December 2020.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetStringValueWithoutFormat()=0;
			/// <summary>
			/// Represents the category type of this cell's number formatting.
			/// </summary>
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType()=0;
			/// <summary>
			/// Gets the formatted string value of this cell by cell's display style.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDisplayStringValue()=0;
			/// <summary>
			/// Gets the integer value contained in the cell.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetIntValue()=0;
			/// <summary>
			/// Gets the double value contained in the cell.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetDoubleValue()=0;
			/// <summary>
			/// Gets the float value contained in the cell.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetFloatValue()=0;
			/// <summary>
			/// Gets the boolean value contained in the cell.
			/// </summary>
			 virtual bool GetBoolValue()=0;
			/// <summary>
			/// Gets the width of the value in unit of pixels.
			/// </summary>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetWidthOfValue()=0;
			/// <summary>
			/// Gets the height of the value in unit of pixels.
			/// </summary>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetHeightOfValue()=0;
			/// <summary>
			/// Gets the display style of the cell.
			/// If this cell is also affected by other settings such as conditional formatting, list objects, etc.,
			/// then the display style may be different from cell.GetStyle().
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetDisplayIStyle()=0;
			/// <summary>
			/// Gets the display style of the cell.
			/// If the cell is conditional formatted, the display style is not same as the cell.GetStyle().
			/// </summary>
			/// <param name="includeMergedBorders" >Indicates whether checking borders of the merged cells. 
			/// </param>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetDisplayIStyle(bool includeMergedBorders)=0;
			/// <summary>
			/// Gets format conditions which applies to this cell.
			/// </summary>
			/// <returns>Returns <see cref="FormatConditionCollection" />
			///  object</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IFormatConditionCollection*>> 		GetIFormatConditions()=0;
			/// <summary>
			///  Gets the cell style.
			///  </summary>
			/// <returns>Style object.</returns>
			/// <remarks>
			///  To change the style of the cell, please call Cell.SetStyle() method after modifying the returned style object.
			///  This method is same with <see cref="GetStyle(bool)" />
			///  with true value for the parameter.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;
			/// <summary>
			/// If checkBorders is true, check whether other cells' borders will effect the style of this cell.
			/// </summary>
			/// <param name="checkBorders" >Check other cells' borders</param>
			/// <returns>Style object.</returns>
			/// <remarks></remarks>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle(bool checkBorders)=0;
			/// <summary>
			/// Sets the cell style.
			/// </summary>
			/// <param name="style" >The cell style.</param>
			/// <remarks>
			/// If the border settings are changed, the border of adjust cells will be updated too.
			/// </remarks>
			 virtual void 		SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> style)=0;
			/// <summary>
			/// Apply the cell style.
			/// </summary>
			/// <param name="style" >The cell style.</param>
			/// <param name="explicitFlag" >True, only overwriting formatting which is explicitly set.
			/// </param>
			 virtual void 		SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> style , bool explicitFlag)=0;
			/// <summary>
			/// Apply the cell style.
			/// </summary>
			/// <param name="style" >The cell style.</param>
			/// <param name="flag" >The style flag.</param>
			 virtual void 		SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> style , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Indicates whether this cell has custom style settings(different from the default one inherited
			/// from corresponding row, column, or workbook).
			/// </summary>
			 virtual bool HasCustomStyle()=0;
			/// <summary>
			/// Gets cell's shared style index in the style pool.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetSharedStyleIndex()=0;
			/// <summary>
			///  Gets or sets a formula of the <see cref="Cell" />
			/// .
			///  </summary>
			/// <remarks>A formula string always begins with an equal sign (=). 
			/// And please always use comma(,) as parameters delimiter, such as "=SUM(A1, E1, H2)".
			/// </remarks>
			/// <example><code>
			/// [C#]
			/// 
			/// Workbook excel = new Workbook();
			/// Cells cells = excel.Worksheets[0].Cells;
			/// cells["B6"].Formula = "=SUM(B2:B5, E1) + sheet1!A1";
			/// 
			/// [Visual Basic]
			/// 
			/// Dim excel As Workbook =  New Workbook() 
			/// Dim cells As Cells =  excel.Worksheets(0).Cells 
			/// cells("B6").Formula = "=SUM(B2:B5, E1) + sheet1!A1"
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula()=0;
			/// <summary>
			///  Gets or sets a formula of the <see cref="Cell" />
			/// .
			///  </summary>
			/// <remarks>A formula string always begins with an equal sign (=). 
			/// And please always use comma(,) as parameters delimiter, such as "=SUM(A1, E1, H2)".
			/// </remarks>
			/// <example><code>
			/// [C#]
			/// 
			/// Workbook excel = new Workbook();
			/// Cells cells = excel.Worksheets[0].Cells;
			/// cells["B6"].Formula = "=SUM(B2:B5, E1) + sheet1!A1";
			/// 
			/// [Visual Basic]
			/// 
			/// Dim excel As Workbook =  New Workbook() 
			/// Dim cells As Cells =  excel.Worksheets(0).Cells 
			/// cells("B6").Formula = "=SUM(B2:B5, E1) + sheet1!A1"
			/// </code>
			/// </example>
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Get the locale formatted formula of the cell.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormulaLocal()=0;
			/// <summary>
			/// Get the locale formatted formula of the cell.
			/// </summary>
			 virtual void SetFormulaLocal(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets or sets a R1C1 formula of the <see cref="Cell" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetR1C1Formula()=0;
			/// <summary>
			/// Gets or sets a R1C1 formula of the <see cref="Cell" />
			/// .
			/// </summary>
			 virtual void SetR1C1Formula(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Set the formula and the value(calculated result) of the formula.
			/// </summary>
			/// <param name="formula" >The formula.</param>
			/// <param name="value" >The value(calculated result) of the formula.</param>
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::Systems::String> formula , intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Get the formula of this cell.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <returns>the formula of this cell.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Set the formula and the value of the formula.
			/// </summary>
			/// <param name="formula" >The formula.</param>
			/// <param name="isR1C1" >Whether the formula is R1C1 formula.</param>
			/// <param name="isLocal" >Whether the formula is locale formatted.</param>
			/// <param name="value" >The value of the formula.</param>
			/// <remarks>
			/// NOTE: This class is now obsolete. Instead,
			/// please use Cell.SetFormula(string,FormulaParseOptions,object).
			/// This property will be removed 12 months later since December 2019.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isR1C1 , bool isLocal , intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Sets an array formula to a range of cells.
			/// </summary>
			/// <param name="arrayFormula" >Array formula.</param>
			/// <param name="rowNumber" >Number of rows to populate result of the array formula.</param>
			/// <param name="columnNumber" >Number of columns to populate result of the array formula.</param>
			/// <param name="isR1C1" >whether the formula is R1C1 formula</param>
			/// <param name="isLocal" >whether the formula is locale formatted</param>
			/// <remarks>
			/// NOTE: This class is now obsolete. Instead, 
			/// please use Cell.SetArrayFormula(string,int,int,FormulaParseOptions).
			/// This property will be removed 12 months later since December 2019.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			 virtual void SetArrayFormula(intrusive_ptr<Aspose::Cells::Systems::String> arrayFormula , Aspose::Cells::Systems::Int32 rowNumber , Aspose::Cells::Systems::Int32 columnNumber , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Sets an array formula(legacy array formula entered via CTRL+SHIFT+ENTER in ms excel) to a range of cells.
			/// </summary>
			/// <param name="arrayFormula" >Array formula.</param>
			/// <param name="rowNumber" >Number of rows to populate result of the array formula.</param>
			/// <param name="columnNumber" >Number of columns to populate result of the array formula.</param>
			 virtual void SetArrayFormula(intrusive_ptr<Aspose::Cells::Systems::String> arrayFormula , Aspose::Cells::Systems::Int32 rowNumber , Aspose::Cells::Systems::Int32 columnNumber)=0;
			/// <summary>
			/// Sets a formula to a range of cells.
			/// </summary>
			/// <param name="sharedFormula" >Shared formula.</param>
			/// <param name="rowNumber" >Number of rows to populate the formula.</param>
			/// <param name="columnNumber" >Number of columns to populate the formula.</param>
			/// <param name="isR1C1" >whether the formula is R1C1 formula</param>
			/// <param name="isLocal" >whether the formula is locale formatted</param>
			/// <remarks>
			/// NOTE: This class is now obsolete. Instead, 
			/// please use Cell.SetSharedFormula(string,int,int,FormulaParseOptions).
			/// This property will be removed 12 months later since December 2019.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			 virtual void SetSharedFormula(intrusive_ptr<Aspose::Cells::Systems::String> sharedFormula , Aspose::Cells::Systems::Int32 rowNumber , Aspose::Cells::Systems::Int32 columnNumber , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Sets shared formulas to a range of cells.
			/// </summary>
			/// <param name="sharedFormula" >Shared formula.</param>
			/// <param name="rowNumber" >Number of rows to populate the formula.</param>
			/// <param name="columnNumber" >Number of columns to populate the formula.</param>
			/// <remarks>
			/// 
			/// </remarks>
			 virtual void SetSharedFormula(intrusive_ptr<Aspose::Cells::Systems::String> sharedFormula , Aspose::Cells::Systems::Int32 rowNumber , Aspose::Cells::Systems::Int32 columnNumber)=0;
			/// <summary>
			/// Indicates whether this cell contains an external link.
			/// Only applies when the cell is a formula cell.
			/// </summary>
			 virtual bool ContainsExternalLink()=0;
			/// <summary>
			/// Gets all references appearing in this cell's formula.
			/// </summary>
			/// <returns>
			/// Collection of all references appearing in this cell's formula.
			/// </returns>
			/// <remarks><ul><li>Returns null if this is not a formula cell.</li>
			/// <li>All references appearing in this cell's formula will be returned no matter they are referenced or not while calculating.
			/// For example, although cell A2 in formula "=IF(TRUE,A1,A2)" is not used while calculating,
			/// it is still taken as the formula's precedents.</li>
			/// <li>To get those references which influence the calculation only, please use <see cref="GetPrecedentsInCalculation()" />
			/// .</li>
			/// </ul>
			/// </remarks>
			/// <example><code>
			/// [C#]
			/// 
			/// Workbook workbook = new Workbook();
			/// Cells cells = workbook.Worksheets[0].Cells;
			/// cells["A1"].Formula = "=B1+SUM(B1:B10)+[Book1.xls]Sheet1!A1";
			/// ReferredAreaCollection areas = cells["A1"].GetPrecedents();
			/// for (int i = 0; i  areas.Count; i++)
			/// {
			///      ReferredArea area = areas[i];
			///      StringBuilder stringBuilder = new StringBuilder();
			///      if (area.IsExternalLink)
			///      {
			///          stringBuilder.Append("[");
			///          stringBuilder.Append(area.ExternalFileName);
			///          stringBuilder.Append("]");
			///      }
			///      stringBuilder.Append(area.SheetName);
			///      stringBuilder.Append("!");
			///      stringBuilder.Append(CellsHelper.CellIndexToName(area.StartRow, area.StartColumn));
			///      if (area.IsArea)
			///      {
			///          stringBuilder.Append(":");
			///          stringBuilder.Append(CellsHelper.CellIndexToName(area.EndRow, area.EndColumn));
			///      }
			///      Console.WriteLine(stringBuilder.ToString());
			/// }
			/// 
			/// [Visual Basic]
			/// 
			/// Dim workbook As Workbook = New Workbook()
			/// Dim cells As Cells = workbook.Worksheets(0).Cells
			/// cells("A1").Formula = "= B1 + SUM(B1:B10) + [Book1.xls]Sheet1!A1"
			/// Dim areas As ReferredAreaCollection = cells("A1").GetPrecedents()
			/// For i As Integer = 0 To areas.Count - 1
			///     Dim area As ReferredArea = areas(i)
			///     Dim stringBuilder As StringBuilder = New StringBuilder()
			///     If (area.IsExternalLink) Then
			///         stringBuilder.Append("[")
			///         stringBuilder.Append(area.ExternalFileName)
			///        stringBuilder.Append("]")
			///     End If
			///     stringBuilder.Append(area.SheetName)
			///     stringBuilder.Append("!")
			///     stringBuilder.Append(CellsHelper.CellIndexToName(area.StartRow, area.StartColumn))
			///     If (area.IsArea) Then
			///         stringBuilder.Append(":")
			///         stringBuilder.Append(CellsHelper.CellIndexToName(area.EndRow, area.EndColumn))
			///     End If
			///     Console.WriteLine(stringBuilder.ToString())
			/// Next
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::IReferredAreaCollection> 		GetIPrecedents()=0;
			/// <summary>
			/// Get all cells whose formula references to this cell directly.
			/// </summary>
			/// <param name="isAll" >Indicates whether check formulas in other worksheets</param>
			/// <remarks><ul><li>If one reference containing this cell appears in one cell's formula, that cell will be taken as
			/// the dependent of this cell, no matter the reference or this cell is used or not while calculating.
			/// For example, although cell A2 in formula "=IF(TRUE,A1,A2)" is not used while calculating,
			/// this formula is still be taken as A2's dependent.
			/// </li>
			/// <li>To get those formulas whose calculated results depend on this cell, please use <see cref="GetDependentsInCalculation(bool)" />
			/// .</li>
			/// <li>When tracing dependents for one cell, all formulas in the workbook or worksheet will be analized and checked.
			/// So it is a time consumed process. If user need to trace dependents for lots of cells, using this method will
			/// cause poor performance. For performance consideration, user should use <see cref="GetDependentsInCalculation(bool)" />
			///  instead.
			/// Or, user may gather precedents map of all cells by <see cref="GetPrecedents()" />
			///  firstly,
			/// and then build the dependents map according to the precedents map.</li>
			/// </ul>
			/// </remarks>
			/// <example><code>
			/// [C#]
			/// 
			/// Workbook workbook = new Workbook();
			/// Cells cells = workbook.Worksheets[0].Cells;
			/// cells["A1"].Formula = "=B1+SUM(B1:B10)+[Book1.xls]Sheet1!B2";
			/// cells["A2"].Formula = "=IF(TRUE,B2,B1)";
			/// Cell[] dependents = cells["B1"].GetDependents(true);
			/// for (int i = 0; i  dependents.Length; i++)
			/// {
			///      Console.WriteLine(dependents[i].Name);
			/// }
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::ICell*>> 		GetDependentICells(bool isAll)=0;
			/// <summary>
			/// Gets all precedents(reference to cells in current workbook) used by this cell's formula while calculating it.
			/// </summary>
			/// <returns>Enumerator to enumerate all references(ReferredArea)</returns>
			/// <remarks>
			/// This method can only work with the situation that <see cref="FormulaSettings.EnableCalculationChain" />
			/// 
			/// is true for the workbook and the workbook has been fully calculated.
			/// If this cell is not a formula or it does not reference to any other cells, null will be returned.
			/// </remarks>
			/// <example><code>
			/// [C#]
			/// 
			/// Workbook workbook = new Workbook();
			/// Cells cells = workbook.Worksheets[0].Cells;
			/// cells["A2"].Formula = "=IF(TRUE,B2,B1)";
			/// workbook.Settings.FormulaSettings.EnableCalculationChain = true;
			/// workbook.CalculateFormula();
			/// IEnumerator en = cells["A2"].GetPrecedentsInCalculation();
			/// Console.WriteLine("A2's calculation precedents:");
			/// while(en.MoveNext())
			/// {
			///     ReferredArea r = (ReferredArea)en.Current;
			///     Console.WriteLine(r);
			/// }
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetPrecedentsInCalculation()=0;
			/// <summary>
			/// Gets all cells whose calculated result depends on this cell.
			/// </summary>
			/// <param name="recursive" >Whether returns those dependents which do not reference to this cell directly
			/// but reference to other leafs of this cell </param>
			/// <returns>Enumerator to enumerate all dependents(Cell objects)</returns>
			/// <remarks>
			/// To use this method, please make sure the workbook has been set with true value for
			/// <see cref="FormulaSettings.EnableCalculationChain" />
			///  and has been fully calculated with this setting.
			/// If there is no formula reference to this cell, null will be returned.
			/// </remarks>
			/// <example><code>
			/// [C#]
			/// 
			/// Workbook workbook = new Workbook();
			/// Cells cells = workbook.Worksheets[0].Cells;
			/// cells["A1"].Formula = "=B1+SUM(B1:B10)+[Book1.xls]Sheet1!B2";
			/// cells["A2"].Formula = "=IF(TRUE,B2,B1)";
			/// workbook.Settings.FormulaSettings.EnableCalculationChain = true;
			/// workbook.CalculateFormula();
			/// IEnumerator en = cells["B1"].GetDependentsInCalculation(false);
			/// Console.WriteLine("B1's calculation dependents:");
			/// while(en.MoveNext())
			/// {
			///     Cell c = (Cell)en.Current;
			///     Console.WriteLine(c.Name);
			/// }
			/// en = cells["B2"].GetDependentsInCalculation(false);
			/// Console.WriteLine("B2's calculation dependents:");
			/// while(en.MoveNext())
			/// {
			///     Cell c = (Cell)en.Current;
			///     Console.WriteLine(c.Name);
			/// }
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetDependentsInCalculation(bool recursive)=0;
			/// <summary>
			/// Get all cells which reference to this cell directly and need to be updated when this cell is modified.
			/// </summary>
			/// <returns>Enumerator to enumerate all dependents(Cell)</returns>
			/// <remarks>
			/// NOTE: This class is now obsolete. Instead, 
			/// please use Cell.GetDependentsInCalculation(bool) to get all dependents in calculation chain.
			/// This property will be removed 12 months later since May 2022.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetLeafs()=0;
			/// <summary>
			/// Get all cells which will be updated when this cell is modified.
			/// </summary>
			/// <param name="recursive" >Whether returns those leafs that do not reference to this cell directly
			/// but reference to other leafs of this cell</param>
			/// <returns>Enumerator to enumerate all dependents(Cell)</returns>
			/// <remarks>
			/// NOTE: This class is now obsolete. Instead, 
			/// please use Cell.GetDependentsInCalculation(bool) to get all dependents in calculation chain.
			/// This property will be removed 12 months later since May 2022.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetLeafs(bool recursive)=0;
			/// <summary>
			/// Indicates the cell's formula is and array formula 
			/// and it is the first cell of the array.
			/// </summary>
			 virtual bool IsArrayHeader()=0;
			/// <summary>
			/// Indicates whether the cell's formula is dynamic array formula(true) or legacy array formula(false).
			/// </summary>
			 virtual bool IsDynamicArrayFormula()=0;
			/// <summary>
			/// Gets the array range if the cell's formula is an array formula.
			/// </summary>
			/// <returns>
			/// The array range.
			/// </returns>
			/// <remarks>Only applies when the cell's formula is an array formula</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetArrayICellArea()=0;
			/// <summary>
			/// Indicates whether the cell formula is an array formula.
			/// </summary>
			 virtual bool IsArrayFormula()=0;
			/// <summary>
			/// Indicates whether the cell formula is an array formula.
			/// </summary>
			/// <remarks>
			/// NOTE: This class is now obsolete. Instead, 
			/// please use Cell.IsArrayFormula to check whether the cell formula is an array formula.
			/// This property will be removed 12 months later since May 2018.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			 virtual bool IsInArray()=0;
			/// <summary>
			/// Indicates whether the cell formula is part of shared formula.
			/// </summary>
			 virtual bool IsSharedFormula()=0;
			/// <summary>
			/// Indicates whether this cell is part of table formula.
			/// </summary>
			 virtual bool IsTableFormula()=0;
			/// <summary>
			/// Indicates whether this cell is part of table formula.
			/// </summary>
			/// <remarks>
			/// NOTE: This class is now obsolete. Instead, 
			/// please use Cell.IsTableFormula to check whether the cell formula is part of table formula.
			/// This property will be removed 12 months later since May 2018.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			 virtual bool IsInTable()=0;
			/// <summary>
			/// Create two-variable data table for given range starting from this cell.
			/// </summary>
			/// <param name="rowNumber" >Number of rows to populate the formula.</param>
			/// <param name="columnNumber" >Number of columns to populate the formula.</param>
			/// <param name="rowInputCell" >the row input cell</param>
			/// <param name="columnInputCell" >the column input cell</param>
			/// <param name="values" >values for cells in table formula range</param>
			 virtual void SetTableFormula(Aspose::Cells::Systems::Int32 rowNumber , Aspose::Cells::Systems::Int32 columnNumber , intrusive_ptr<Aspose::Cells::Systems::String> rowInputCell , intrusive_ptr<Aspose::Cells::Systems::String> columnInputCell , intrusive_ptr<Aspose::Cells::Systems::Array2D<Aspose::Cells::Systems::Object*>> values)=0;
			/// <summary>
			/// Create one-variable data table for given range starting from this cell.
			/// </summary>
			/// <param name="rowNumber" >Number of rows to populate the formula.</param>
			/// <param name="columnNumber" >Number of columns to populate the formula.</param>
			/// <param name="inputCell" >the input cell</param>
			/// <param name="isRowInput" >Indicates whether the input cell is a row input cell(true) or a column input cell(false).</param>
			/// <param name="values" >values for cells in table formula range</param>
			 virtual void SetTableFormula(Aspose::Cells::Systems::Int32 rowNumber , Aspose::Cells::Systems::Int32 columnNumber , intrusive_ptr<Aspose::Cells::Systems::String> inputCell , bool isRowInput , intrusive_ptr<Aspose::Cells::Systems::Array2D<Aspose::Cells::Systems::Object*>> values)=0;
			/// <summary>
			/// Create two-variable data table for given range starting from this cell.
			/// </summary>
			/// <param name="rowNumber" >Number of rows to populate the formula.</param>
			/// <param name="columnNumber" >Number of columns to populate the formula.</param>
			/// <param name="rowIndexOfRowInputCell" >row index of the row input cell</param>
			/// <param name="columnIndexOfRowInputCell" >column index of the row input cell</param>
			/// <param name="rowIndexOfColumnInputCell" >row index of the column input cell</param>
			/// <param name="columnIndexOfColumnInputCell" >column index of the column input cell</param>
			/// <param name="values" >values for cells in table formula range</param>
			 virtual void SetTableFormula(Aspose::Cells::Systems::Int32 rowNumber , Aspose::Cells::Systems::Int32 columnNumber , Aspose::Cells::Systems::Int32 rowIndexOfRowInputCell , Aspose::Cells::Systems::Int32 columnIndexOfRowInputCell , Aspose::Cells::Systems::Int32 rowIndexOfColumnInputCell , Aspose::Cells::Systems::Int32 columnIndexOfColumnInputCell , intrusive_ptr<Aspose::Cells::Systems::Array2D<Aspose::Cells::Systems::Object*>> values)=0;
			/// <summary>
			/// Create one-variable data table for given range starting from this cell.
			/// </summary>
			/// <param name="rowNumber" >Number of rows to populate the formula.</param>
			/// <param name="columnNumber" >Number of columns to populate the formula.</param>
			/// <param name="rowIndexOfInputCell" >row index of the input cell</param>
			/// <param name="columnIndexOfInputCell" >column index of the input cell</param>
			/// <param name="isRowInput" >Indicates whether the input cell is a row input cell(true) or a column input cell(false).</param>
			/// <param name="values" >values for cells in table formula range</param>
			 virtual void SetTableFormula(Aspose::Cells::Systems::Int32 rowNumber , Aspose::Cells::Systems::Int32 columnNumber , Aspose::Cells::Systems::Int32 rowIndexOfInputCell , Aspose::Cells::Systems::Int32 columnIndexOfInputCell , bool isRowInput , intrusive_ptr<Aspose::Cells::Systems::Array2D<Aspose::Cells::Systems::Object*>> values)=0;
			/// <summary>
			/// Remove array formula.
			/// </summary>
			/// <param name="leaveNormalFormula" >True represents converting the array formula to normal formula.</param>
			 virtual void RemoveArrayFormula(bool leaveNormalFormula)=0;
			/// <summary>
			/// Copies data from a source cell.
			/// </summary>
			/// <param name="cell" >Source <see cref="Cell" />
			///  object.</param>
			 virtual void 		Copy(intrusive_ptr<Aspose::Cells::ICell> cell)=0;
			/// <summary>
			/// Gets the value contained in this cell.
			/// </summary>
			/// <remarks>Possible type:
			/// <p>null,</p>
			/// <p>Boolean,</p>
			/// <p>DateTime,</p>
			/// <p>Double,</p>
			/// <p>Integer</p>
			/// <p>String.</p>
			/// 
			/// For int value, it may be returned as an Integer object or a Double object.
			/// And there is no guarantee that the returned value will be kept as the same type of object always.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetValue()=0;
			/// <summary>
			/// Gets the value contained in this cell.
			/// </summary>
			/// <remarks>Possible type:
			/// <p>null,</p>
			/// <p>Boolean,</p>
			/// <p>DateTime,</p>
			/// <p>Double,</p>
			/// <p>Integer</p>
			/// <p>String.</p>
			/// 
			/// For int value, it may be returned as an Integer object or a Double object.
			/// And there is no guarantee that the returned value will be kept as the same type of object always.
			/// </remarks>
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Indicates if the cell's style is set. If return false, it means this cell has a default cell format.
			/// </summary>
			 virtual bool IsStyleSet()=0;
			/// <summary>
			///  Returns a Characters object that represents a range of characters within the cell text.
			///  </summary>
			/// <param name="startIndex" >The index of the start of the character.</param>
			/// <param name="length" >The number of characters.</param>
			/// <returns>Characters object.</returns>
			/// <remarks>This method only works on cell with string value.</remarks>
			/// <example>
			///  <code>
			///  [C#]
			///  Workbook excel = new Workbook();
			/// 	Cells cells = excel.Worksheets[0].Cells;
			///  cells["A1"].PutValue("Helloworld");
			///  cells["A1"].Characters(5, 5).Font.IsBold = true;
			///  cells["A1"].Characters(5, 5).Font.Color = Color.Blue;
			///  
			///  [Visual Basic]
			///  Dim excel as Workbook = new Workbook()
			/// 	Dim cells as Cells = exce.Worksheets(0).Cells
			///  cells("A1").PutValue("Helloworld")
			///  cells("A1").Characters(5, 5).Font.IsBold = True
			///  cells("A1").Characters(5, 5).Font.Color = Color.Blue
			///  </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::IFontSetting> 		GetIFontSetting(Aspose::Cells::Systems::Int32 startIndex , Aspose::Cells::Systems::Int32 length)=0;
			/// <summary>
			/// Replace text of the cell with options.
			/// </summary>
			/// <param name="placeHolder" >Cell placeholder</param>
			/// <param name="newValue" >String value to replace</param>
			/// <param name="options" > The replace options</param>
			 virtual void 		Replace(intrusive_ptr<Aspose::Cells::Systems::String> placeHolder , intrusive_ptr<Aspose::Cells::Systems::String> newValue , intrusive_ptr<Aspose::Cells::IReplaceOptions> options)=0;
			/// <summary>
			/// Insert some characters to the cell.
			/// If the cell is rich formatted, this method could keep the original formatting.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <param name="text" >Inserted text.</param>
			 virtual void InsertText(Aspose::Cells::Systems::Int32 index , intrusive_ptr<Aspose::Cells::Systems::String> text)=0;
			/// <summary>
			/// Indicates whether the cell string value is a rich text.
			/// </summary>
			 virtual bool IsRichText()=0;
			/// <summary>
			/// Returns all Characters objects 
			/// that represents a range of characters within the cell text.
			/// </summary>
			/// <returns>All Characters objects </returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IFontSetting*>> 		GetIFontSettings()=0;
			/// <summary>
			/// Returns all Characters objects 
			/// that represents a range of characters within the cell text.
			/// </summary>
			/// <param name="flag" >Indicates whether applying table style to the cell if the cell is in the table.</param>
			/// <returns>All Characters objects </returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IFontSetting*>> 		GetIFontSettings(bool flag)=0;
			/// <summary>
			/// Sets rich text format of the cell.
			/// </summary>
			/// <param name="characters" >All Characters objects.</param>
			 virtual void 		SetIFontSettings(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IFontSetting*>> characters)=0;
			/// <summary>
			/// Checks if a cell is part of a merged range or not. 
			/// </summary>
			 virtual bool IsMerged()=0;
			/// <summary>
			/// Returns a <see cref="Range" />
			///  object which represents a merged range.
			/// </summary>
			/// <returns><see cref="Range" />
			///  object. Null if this cell is not merged.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetMergedIRange()=0;
			/// <summary>
			/// Gets the comment of this cell.
			/// </summary>
			/// <remarks>
			/// If there is no comment applies to the cell, returns null.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IComment> 		GetIComment()=0;
			/// <summary>
			/// Gets and sets the html string which contains data and some formats in this cell.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetHtmlString()=0;
			/// <summary>
			/// Gets and sets the html string which contains data and some formats in this cell.
			/// </summary>
			 virtual void SetHtmlString(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the html string which contains data and some formats in this cell.
			/// </summary>
			/// <param name="html5" >Indicates whether the value is compatible for html5</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetHtmlString(bool html5)=0;
			/// <summary>
			/// Returns a string represents the current Cell object.
			/// </summary>
			/// <returns/>
			/// 
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> ToString()=0;
			/// <summary>
			/// Convert <see cref="Cell" />
			///  to JSON struct data.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> ToJson()=0;
			/// <summary>
			/// Checks whether this object refers to the same cell with another.
			/// </summary>
			/// <param name="obj" >another object</param>
			/// <returns>true if two objects refers to the same cell.</returns>
			  virtual bool Equals(intrusive_ptr<Aspose::Cells::Systems::Object> obj)=0;
			/// <summary>
			/// Serves as a hash function for a particular type.
			/// </summary>
			/// <returns>A hash code for current Cell object.</returns>
			  virtual Aspose::Cells::Systems::Int32 GetHashCode()=0;
			/// <summary>
			/// Checks whether this object refers to the same cell with another cell object.
			/// </summary>
			/// <param name="cell" >another cell object</param>
			/// <returns>true if two cell objects refers to the same cell.</returns>
			 virtual bool 		Equals(intrusive_ptr<Aspose::Cells::ICell> cell)=0;
			/// <summary>
			/// Get the result of the conditional formatting.
			/// </summary>
			/// <remarks>
			/// Returns null if no conditional formatting is applied to this cell, 
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingResult> 		GetIConditionalFormattingResult()=0;
			/// <summary>
			/// Gets the validation applied to this cell.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IValidation> 		GetIValidation()=0;
			/// <summary>
			/// Gets the value of validation which applied to this cell.
			/// </summary>
			/// <returns>
			/// 
			/// </returns>
			 virtual bool GetValidationValue()=0;
			/// <summary>
			/// Gets the table which contains this cell.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Tables::IListObject> 		GetITable()=0;

	};
}
}
