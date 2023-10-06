#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "LookAtType.h"
#include "LookInType.h"

namespace Aspose {
	namespace Cells {
		enum LookAtType;
		class ICellArea;
		enum LookInType;
		class IStyle;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents find options.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiate the workbook object
			/// Workbook workbook = new Workbook("C:\\book1.xls");
			/// 
			/// //Get Cells collection 
			/// Cells cells = workbook.Worksheets[0].Cells;
			/// 
			/// //Instantiate FindOptions Object
			/// FindOptions findOptions = new FindOptions();
			/// 
			/// //Create a Cells Area
			/// CellArea ca = new CellArea();
			/// ca.StartRow = 8;
			/// ca.StartColumn = 2;
			/// ca.EndRow = 17;
			/// ca.EndColumn = 13;
			/// 
			/// //Set cells area for find options
			/// findOptions.SetRange(ca);
			/// 
			/// //Set searching properties
			/// findOptions.SearchBackward = false;
			/// 
			/// findOptions.SeachOrderByRows = true;
			/// 
			/// findOptions.LookInType = LookInType.Values;
			/// 
			/// //Find the cell with 0 value
			/// Cell cell = cells.Find(0, null, findOptions);
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiate the workbook object
			/// Dim workbook As New Workbook("C:\book1.xls")
			/// 
			/// 'Get Cells collection 
			/// Dim cells As Cells = workbook.Worksheets(0).Cells
			/// 
			/// 'Instantiate FindOptions Object
			/// Dim findOptions As New FindOptions()
			/// 
			/// 'Create a Cells Area
			/// Dim ca As New CellArea()
			/// ca.StartRow = 8
			/// ca.StartColumn = 2
			/// ca.EndRow = 17
			/// ca.EndColumn = 13
			/// 
			/// 'Set cells area for find options
			/// findOptions.SetRange(ca)
			/// 
			/// 'Set searching properties
			/// findOptions.SearchBackward = True
			/// 
			/// findOptions.SeachOrderByRows = True
			/// 
			/// findOptions.LookInType = LookInType.Values
			/// 
			/// 'Find the cell with 0 value
			/// Dim cell As Cell = cells.Find(0, Nothing, findOptions)
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IFindOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates if the searched string is case sensitive.
			/// </summary>
			 virtual bool GetCaseSensitive()=0;
			/// <summary>
			/// Indicates if the searched string is case sensitive.
			/// </summary>
			 virtual void SetCaseSensitive(bool value)=0;
			/// <summary>
			/// Look at type.
			/// </summary>
			 virtual Aspose::Cells::LookAtType GetLookAtType()=0;
			/// <summary>
			/// Look at type.
			/// </summary>
			 virtual void SetLookAtType(Aspose::Cells::LookAtType value)=0;
			/// <summary>
			/// Gets and sets the searched range.
			/// </summary>
			/// <returns>
			/// Returns the searched range.
			/// </returns>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetIRange()=0;
			/// <summary>
			/// Sets the searched range.
			/// </summary>
			/// <param name="ca" >the searched range.</param>
			 virtual void 		SetIRange(intrusive_ptr<Aspose::Cells::ICellArea> ca)=0;
			/// <summary>
			/// Indicates whether the searched range is set.
			/// </summary>
			 virtual bool IsRangeSet()=0;
			/// <summary>
			/// Search order. True: search next. False: search previous.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use FindOptions.SearchBackward property. 
			/// This property will be removed 12 months later since November 2018. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool GetSearchNext()=0;
			/// <summary>
			/// Search order. True: search next. False: search previous.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use FindOptions.SearchBackward property. 
			/// This property will be removed 12 months later since November 2018. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetSearchNext(bool value)=0;
			/// <summary>
			/// Whether search backward for cells.
			/// </summary>
			 virtual bool GetSearchBackward()=0;
			/// <summary>
			/// Whether search backward for cells.
			/// </summary>
			 virtual void SetSearchBackward(bool value)=0;
			/// <summary>
			/// Indicates whether search order by rows or columns.
			/// </summary>
			 virtual bool GetSeachOrderByRows()=0;
			/// <summary>
			/// Indicates whether search order by rows or columns.
			/// </summary>
			 virtual void SetSeachOrderByRows(bool value)=0;
			/// <summary>
			/// Look in type.
			/// </summary>
			 virtual Aspose::Cells::LookInType GetLookInType()=0;
			/// <summary>
			/// Look in type.
			/// </summary>
			 virtual void SetLookInType(Aspose::Cells::LookInType value)=0;
			/// <summary>
			/// Indicates whether the searched key is regex. If true then the searched key will be taken as regex.
			/// </summary>
			 virtual bool GetRegexKey()=0;
			/// <summary>
			/// Indicates whether the searched key is regex. If true then the searched key will be taken as regex.
			/// </summary>
			 virtual void SetRegexKey(bool value)=0;
			/// <summary>
			/// Indicates whether searched cell value type should be same with the searched key.
			/// </summary>
			 virtual bool GetValueTypeSensitive()=0;
			/// <summary>
			/// Indicates whether searched cell value type should be same with the searched key.
			/// </summary>
			 virtual void SetValueTypeSensitive(bool value)=0;
			/// <summary>
			/// The format to search for.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;
			/// <summary>
			/// The format to search for.
			/// </summary>
			 virtual void 		SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> value)=0;
			/// <summary>
			///  Gets or sets a value that indicates whether converting the searched string value to numeric data.
			/// </summary>
			 virtual bool GetConvertNumericData()=0;
			/// <summary>
			///  Gets or sets a value that indicates whether converting the searched string value to numeric data.
			/// </summary>
			 virtual void SetConvertNumericData(bool value)=0;

	};
}
}
