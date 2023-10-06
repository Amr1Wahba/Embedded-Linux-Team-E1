#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/IEnumerator.h"
#include "Aspose.Cells.Systems/Collections/IEnumerable.h"

namespace Aspose {
	namespace Cells {
		class IRow;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Collects the <seealso cref="Row" />
			///  objects that represent the individual rows in a worksheet.
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
			///  //Get first row
			/// Row row = worksheet.Cells.Rows[0];
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// 
			/// 'Obtaining the reference of the first worksheet
			/// Dim worksheet As Worksheet = workbook.Worksheets(0)
			/// 'Get first row
			/// Dim row as Row = worksheet.Cells.Rows(0)
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IRowCollection : public Aspose::Cells::Systems::Collections::IEnumerable , public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the number of rows in this collection.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCount()=0;
			/// <summary>
			///  Gets an enumerator that iterates rows through this collection
			///  </summary>
			/// <returns>enumerator</returns>
			/// <example>
			///  <code>
			///  [C#]
			///  Workbook workbook = new Workbook("template.xlsx");
			/// 	Cells cells = workbook.Worksheets[0].Cells;
			/// 	
			/// 	IEnumerator en = cells.Rows.GetEnumerator();
			/// 	while (en.MoveNext())
			/// 	{
			/// 	    Row row = (Row)en.Current;
			/// 	    Console.WriteLine(row.Index + ": " + row.Height);
			/// 	}
			///  </code>
			/// 
			///  </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetEnumerator()=0;
			/// <summary>
			/// Gets an enumerator that iterates rows through this collection
			/// </summary>
			/// <param name="reversed" >whether enumerate rows in reversed order</param>
			/// <param name="sync" >whether the returned enumerator should check the modification of row collection
			/// and keep synchronized with it.</param>
			/// <returns>The row enumerator</returns>
			/// <remarks>If the row collection will be modified(by operations that may cause new Row be instantiated or
			/// existing Row be removed) during the traversal with the enumerator,
			/// synchronized enumerator should be used instead of normal enumerator so that the traversal can continue
			/// from the position just after the one has been traversed by the last MoveNext().
			/// However, together with the advantage that no element be skipped or traversed repeatedly,
			/// the disadvantage for synchronized enumerator is that the performance will be degraded a bit
			/// when comparing with normal enumerator.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetEnumerator(bool reversed , bool sync)=0;
			/// <summary>
			/// Gets the row object by the position in the list.
			/// </summary>
			/// <param name="index" >The position.</param>
			/// <returns>The Row object at given position.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRow> 		GetIRowByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets a <seealso cref="Row" />
			///  object by given row index. The Row object of given row index will be instantiated if it does not exist before.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IRow> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 rowIndex)=0;
			/// <summary>
			/// Clear all rows and cells.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			/// Remove the row at the specified index
			/// </summary>
			/// <param name="index" >zero-based row index</param>
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;
public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}

	};
}
}
