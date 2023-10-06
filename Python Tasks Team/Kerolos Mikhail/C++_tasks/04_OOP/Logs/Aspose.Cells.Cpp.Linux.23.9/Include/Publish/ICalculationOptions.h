#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "CalculationPrecisionStrategy.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"

namespace Aspose {
	namespace Cells {
		class ICustomFunction;
		enum CalculationPrecisionStrategy;
		class IWorkbook;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents options for calculation.
			/// </summary>
	class ASPOSE_CELLS_API ICalculationOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates if you need to hide the error in calculating formulas.
			/// The error may be unsupported function, external links, etc.
			/// </summary>
			 virtual bool GetIgnoreError()=0;
			/// <summary>
			/// Indicates if you need to hide the error in calculating formulas.
			/// The error may be unsupported function, external links, etc.
			/// </summary>
			 virtual void SetIgnoreError(bool value)=0;
			/// <summary>
			/// Indicates whether calculate the dependent cells recursively when calculating one cell and it depends on other cells.
			/// The default value if true.
			/// </summary>
			 virtual bool GetRecursive()=0;
			/// <summary>
			/// Indicates whether calculate the dependent cells recursively when calculating one cell and it depends on other cells.
			/// The default value if true.
			/// </summary>
			 virtual void SetRecursive(bool value)=0;
			/// <summary>
			/// The custom formula calculation functions to extend the calculation engine.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use CustomEngine property, AbstractCalculationEngine provides more convenient and flexible APIs
			/// for manipulating custom functions.
			/// This property will be removed 12 months later since August 2020. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::ICustomFunction> 		GetICustomFunction()=0;
			/// <summary>
			/// The custom formula calculation functions to extend the calculation engine.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use CustomEngine property, AbstractCalculationEngine provides more convenient and flexible APIs
			/// for manipulating custom functions.
			/// This property will be removed 12 months later since August 2020. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetCustomFunction(intrusive_ptr<Aspose::Cells::ICustomFunction> value)=0;
			/// <summary>
			/// Specifies the stack size for calculating cells recursively.
			/// </summary>
			/// <remarks>
			/// When there are large amount of cells need to be calculated recursively in the dependency tree,
			/// StackOverflowException may be caused in the calculation process.
			/// If so, user should specify smaller value for this property.
			/// For such situation, user should determine the proper value for this property according to the actual formulas and data.
			/// Too small value may cause performance degradation for the formula calculation.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetCalcStackSize()=0;
			/// <summary>
			/// Specifies the stack size for calculating cells recursively.
			/// </summary>
			/// <remarks>
			/// When there are large amount of cells need to be calculated recursively in the dependency tree,
			/// StackOverflowException may be caused in the calculation process.
			/// If so, user should specify smaller value for this property.
			/// For such situation, user should determine the proper value for this property according to the actual formulas and data.
			/// Too small value may cause performance degradation for the formula calculation.
			/// </remarks>
			 virtual void SetCalcStackSize(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Specifies the strategy for processing precision of calculation.
			/// </summary>
			 virtual Aspose::Cells::CalculationPrecisionStrategy GetPrecisionStrategy()=0;
			/// <summary>
			/// Specifies the strategy for processing precision of calculation.
			/// </summary>
			 virtual void SetPrecisionStrategy(Aspose::Cells::CalculationPrecisionStrategy value)=0;
			/// <summary>
			/// Specifies the data sources for external links used in formulas.
			/// </summary>
			/// <remarks>
			/// Like <see cref="Workbook.UpdateLinkedDataSource(Workbook[])" />
			/// , here you may specify
			/// data sources for external links used in formulas to be calculated, especially those
			/// used in INDIRECT function. For those external links used in INDIRECT function,
			/// they are not taken as part of the external links of the workbook and cannot be updated
			/// by <see cref="Workbook.UpdateLinkedDataSource(Workbook[])" />
			/// .
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IWorkbook*>> 		GetILinkedDataSources()=0;
			/// <summary>
			/// Specifies the data sources for external links used in formulas.
			/// </summary>
			/// <remarks>
			/// Like <see cref="Workbook.UpdateLinkedDataSource(Workbook[])" />
			/// , here you may specify
			/// data sources for external links used in formulas to be calculated, especially those
			/// used in INDIRECT function. For those external links used in INDIRECT function,
			/// they are not taken as part of the external links of the workbook and cannot be updated
			/// by <see cref="Workbook.UpdateLinkedDataSource(Workbook[])" />
			/// .
			/// </remarks>
			 virtual void 		SetILinkedDataSources(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IWorkbook*>> value)=0;
			/// <summary>
			/// Specifies the encoding used for encoding/decoding characters when calculating formulas.
			/// For functions such as CHAR, CODE, the calculated result depends on the region settings and default charset of the environment.
			/// With this property user can specify the proper encoding used for those function to get the expected result.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Text::Encoding> GetCharacterEncoding()=0;
			/// <summary>
			/// Specifies the encoding used for encoding/decoding characters when calculating formulas.
			/// For functions such as CHAR, CODE, the calculated result depends on the region settings and default charset of the environment.
			/// With this property user can specify the proper encoding used for those function to get the expected result.
			/// </summary>
			 virtual void SetCharacterEncoding(intrusive_ptr<Aspose::Cells::Systems::Text::Encoding> value)=0;

	};
}
}
