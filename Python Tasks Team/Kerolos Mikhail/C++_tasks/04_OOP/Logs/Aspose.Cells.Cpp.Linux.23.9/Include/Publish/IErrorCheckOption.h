#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "ErrorCheckType.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose {
	namespace Cells {
		enum ErrorCheckType;
		class ICellArea;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Error check setting applied on certain ranges.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			///   Workbook workbook = new Workbook();
			///   ErrorCheckOptionCollection opts = workbook.Worksheets[0].ErrorCheckOptions;
			///   int optionIdx = opts.Add();
			///   ErrorCheckOption opt = opts[optionIdx];
			///   opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.InconsistFormula, false);
			///   opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.InconsistRange, false);
			///   opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.TextDate, false);
			///   opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.TextNumber, false);
			///   opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.Validation, false);
			///   opt.AddRange(CellArea.CreateCellArea("A1", "B10"));
			///   workbook.Save(@"D:\Filetemp\Book1.xlsx");
			///   
			/// [Visual Basic]
			/// 
			///    Dim workbook As Workbook = New Workbook()
			///    Dim opts As ErrorCheckOptionCollection = workbook.Worksheets(0).ErrorCheckOptions
			///    Dim optionIdx As Integer = opts.Add()
			///    Dim opt As ErrorCheckOption = opts(optionIdx)
			///    opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.InconsistFormula, False)
			///    opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.InconsistRange, False)
			///    opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.TextDate, False)
			///    opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.TextNumber, False)
			///    opt.SetErrorCheck(Aspose.Cells.ErrorCheckType.Validation, False)
			///    opt.AddRange(CellArea.CreateCellArea("A1", "B10"))
			///    workbook.Save("D:\Filetemp\Book1.xlsx")
			///    
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IErrorCheckOption : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Checks whether given error type will be checked.
			/// </summary>
			/// <param name="errorCheckType" >error type can be checked</param>
			/// <returns>return true if given error type will be checked(green triangle will be shown for cell if the check failed).</returns>
			 virtual bool IsErrorCheck(Aspose::Cells::ErrorCheckType errorCheckType)=0;
			/// <summary>
			/// Sets whether given error type will be checked.
			/// </summary>
			/// <param name="errorCheckType" >error type can be checked.</param>
			/// <param name="isCheck" >true if given error type needs to be checked(green triangle will be shown for cell if the check failed).</param>
			 virtual void SetErrorCheck(Aspose::Cells::ErrorCheckType errorCheckType , bool isCheck)=0;
			/// <summary>
			/// Gets the count of ranges that influenced by this setting.
			/// </summary>
			/// <returns>the count of ranges that influenced by this setting.</returns>
			 virtual Aspose::Cells::Systems::Int32 GetCountOfRange()=0;
			/// <summary>
			/// Adds one influenced range by this setting.
			/// </summary>
			/// <param name="ca" >the range to be added.</param>
			/// <returns>the index of the added range in the range list of this setting.</returns>
			 virtual Aspose::Cells::Systems::Int32 		AddIRange(intrusive_ptr<Aspose::Cells::ICellArea> ca)=0;
			/// <summary>
			///  Gets the influenced range of this setting by given index.
			/// </summary>
			/// <param name="index" >the index of range</param>
			/// <returns>return influenced range at given index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetIRange(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Removes one range by given index.
			/// </summary>
			/// <param name="index" >the index of the range to be removed.</param>
			 virtual void RemoveRange(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
