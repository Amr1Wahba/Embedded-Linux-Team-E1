#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/IEnumerator.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Collections/IEnumerable.h"

namespace Aspose {
	namespace Cells {
		class ICell;
		class IStyle;
		class IRow;
		class IStyleFlag;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents a single row in a worksheet.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// 
			/// //Obtaining the reference of the first worksheet
			/// Worksheet worksheet = workbook.Worksheets[0];
			/// Style style = workbook.CreateStyle();
			/// 
			/// //Setting the background color to Blue
			/// style.BackgroundColor = Color.Blue;
			/// 
			/// //Setting the foreground color to Red
			/// style.ForegroundColor= Color.Red;
			/// 
			/// //setting Background Pattern
			/// style.Pattern = BackgroundType.DiagonalStripe;
			/// 
			/// //New Style Flag
			/// StyleFlag styleFlag = new StyleFlag();
			/// 
			/// //Set All Styles
			/// styleFlag.All = true;
			/// 
			///  //Get first row
			/// Row row = worksheet.Cells.Rows[0];
			///  //Apply Style to first row
			/// row.ApplyStyle(style, styleFlag);
			/// 
			/// //Saving the Excel file
			/// workbook.Save("book1.xls");
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// 
			/// 'Obtaining the reference of the first worksheet
			/// Dim worksheet As Worksheet = workbook.Worksheets(0)
			/// 
			/// Dim style As Style = workbook.CreateStyle()
			/// 
			/// 'Setting the background color to Blue
			/// style.BackgroundColor = Color.Blue
			/// 
			/// 'Setting the foreground color to Red
			/// style.ForegroundColor = Color.Red
			/// 
			/// 'setting Background Pattern
			/// style.Pattern = BackgroundType.DiagonalStripe
			/// 
			/// 'New Style Flag
			/// Dim styleFlag As New StyleFlag()
			/// 
			/// 'Set All Styles
			/// styleFlag.All = True
			/// 
			///  'Get first row
			/// Dim row as Row = worksheet.Cells.Rows(0)
			///  'Apply Style to first row
			/// row.ApplyStyle(style, styleFlag)
			/// 
			/// 'Saving the Excel file
			/// workbook.Save("book1.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IRow : public Aspose::Cells::Systems::Collections::IEnumerable , public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Get the cell by specific index in the list.
			/// </summary>
			/// <param name="index" >The position.</param>
			/// <returns>The Cell object.</returns>
			/// <remarks>NOTE: This member is now obsolete. 
			/// Instead, please use Row.GetEnumerator() method to iterate all cells in this row.
			/// This property will be removed 12 months later since February 2015. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetICellByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Indicates whether the row contains any data
			/// </summary>
			 virtual bool IsBlank()=0;
			/// <summary>
			/// Gets the cell.
			/// </summary>
			/// <param name="column" >The column index</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			///  Gets the cells enumerator
			///  </summary>
			/// <returns>The cells enumerator</returns>
			/// <example>
			///  <code>
			///  [C#]
			///  Workbook workbook = new Workbook("template.xlsx");
			/// 	Cells cells = workbook.Worksheets[0].Cells;
			/// 	
			/// 	IEnumerator en = cells.Rows[1].GetEnumerator();
			/// 	while (en.MoveNext())
			/// 	{
			/// 	    Cell cell = (Cell)en.Current;
			/// 	    Console.WriteLine(cell.Name + ": " + cell.Value);
			/// 	}
			///  </code>
			/// 
			///  </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetEnumerator()=0;
			/// <summary>
			/// Gets an enumerator that iterates cells through this row.
			/// </summary>
			/// <param name="reversed" >whether enumerate cells in reversed order</param>
			/// <param name="sync" >whether the returned enumerator should check the modification of cells in this row
			/// and keep synchronized with it.</param>
			/// <returns>The cell enumerator</returns>
			/// <remarks>If the row will be modified(by operations that may cause new Cell be instantiated or
			/// existing Cell be removed) during the traversal with the enumerator,
			/// synchronized enumerator should be used instead of normal enumerator so that the traversal can continue
			/// from the position just after the one has been traversed by the last MoveNext().
			/// However, together with the advantage that no element be skipped or traversed repeatedly,
			/// the disadvantage for synchronized enumerator is that the performance will be degraded a bit
			/// when comparing with normal enumerator.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetEnumerator(bool reversed , bool sync)=0;
			/// <summary>
			/// Gets the cell or null in the specific index.
			/// </summary>
			/// <param name="column" >The column index</param>
			/// <returns>Returns the cell object if the cell exists.
			/// Or returns null if the cell object does not exist.</returns>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetICellOrNull(Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			///  whether the row is collapsed
			/// </summary>
			 virtual bool IsCollapsed()=0;
			/// <summary>
			///  whether the row is collapsed
			/// </summary>
			 virtual void SetCollapsed(bool value)=0;
			/// <summary>
			/// Gets and sets the row height in unit of Points.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetHeight()=0;
			/// <summary>
			/// Gets and sets the row height in unit of Points.
			/// </summary>
			 virtual void SetHeight(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Indicates whether the row is hidden.
			/// </summary>
			 virtual bool IsHidden()=0;
			/// <summary>
			/// Indicates whether the row is hidden.
			/// </summary>
			 virtual void SetHidden(bool value)=0;
			/// <summary>
			/// Gets the index of this row.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetIndex()=0;
			/// <summary>
			/// Gets the group level of the row.
			/// </summary>
			 virtual Aspose::Cells::Systems::Byte GetGroupLevel()=0;
			/// <summary>
			/// Gets the group level of the row.
			/// </summary>
			 virtual void SetGroupLevel(Aspose::Cells::Systems::Byte value)=0;
			/// <summary>
			/// Indicates that row height and default font height matches.
			/// </summary>
			 virtual bool IsHeightMatched()=0;
			/// <summary>
			/// Indicates that row height and default font height matches.
			/// </summary>
			 virtual void SetHeightMatched(bool value)=0;
			/// <summary>
			/// Gets the style of this row.
			/// </summary>
			/// <remarks>
			/// Modifying the returned style object directly takes no effect for this row or any cells in this row.
			/// You have to call <see cref="ApplyStyle(Style, StyleFlag)" />
			///  or <see cref="SetStyle(Style)" />
			///  method
			/// to apply the change to this row.<br/>
			/// 
			/// Row's style is the style which will be inherited by cells in this row(those cells that have no custom style settings,
			/// such as existing cells that have not been set style explicitly, or those that have not been instantiated)
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;
			/// <summary>
			/// Sets the style of this row.
			/// </summary>
			/// <param name="style" >the style to be used as the default style for cells in this row.</param>
			/// <remarks>
			/// This method only sets the given style as the default style for this row,
			/// without changing the style settings for existing cells in this row.
			/// To update style settings of existing cells to the specified style at the same time,
			/// please use <see cref="ApplyStyle(Style, StyleFlag)" />
			/// </remarks>
			 virtual void 		SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> style)=0;
			/// <summary>
			/// Indicates whether this row has custom style settings(different from the default one inherited from workbook).
			/// </summary>
			 virtual bool HasCustomStyle()=0;
			/// <summary>
			/// Copy settings of row, such as style, height, visibility, ...etc.
			/// </summary>
			/// <param name="source" >the source row whose settings will be copied to this one</param>
			/// <param name="checkStyle" >whether check and gather style.
			/// Only takes effect and be needed when two row objects belong to different workbook and the styles of two workbooks are different.</param>
			 virtual void 		CopySettings(intrusive_ptr<Aspose::Cells::IRow> source , bool checkStyle)=0;
			/// <summary>
			/// Gets the first cell object in the row.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetFirstICell()=0;
			/// <summary>
			/// Gets the first non-blank cell in the row.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetFirstDataICell()=0;
			/// <summary>
			/// Gets the last cell object in the row.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetLastICell()=0;
			/// <summary>
			/// Gets the last non-blank cell in the row.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetLastDataICell()=0;
			/// <summary>
			/// Applies formats for a whole row.
			/// </summary>
			/// <param name="style" >The style object which will be applied.</param>
			/// <param name="flag" >Flags which indicates applied formatting properties.</param>
			 virtual void 		ApplyIStyle(intrusive_ptr<Aspose::Cells::IStyle> style , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Checks whether this object refers to the same row with another.
			/// </summary>
			/// <param name="obj" >another object</param>
			/// <returns>true if two objects refers to the same row.</returns>
			  virtual bool Equals(intrusive_ptr<Aspose::Cells::Systems::Object> obj)=0;
			/// <summary>
			/// Checks whether this object refers to the same row with another row object.
			/// </summary>
			/// <param name="row" >another row object</param>
			/// <returns>true if two row objects refers to the same row.</returns>
			 virtual bool 		Equals(intrusive_ptr<Aspose::Cells::IRow> row)=0;
public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}

	};
}
}
