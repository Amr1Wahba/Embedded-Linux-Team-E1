#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "PropertyType.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/DateTime.h"

namespace Aspose {
	namespace Cells {
		namespace Properties {
			enum PropertyType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Properties{
			/// <summary>
			///  Represents a custom or built-in document property.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C#]
			///  
			///  //Instantiate a Workbook object
			///  Workbook workbook = new Workbook("C:\\book1.xls");
			///   
			///  //Retrieve a list of all custom document properties of the Excel file
			///  DocumentPropertyCollection customProperties = workbook.Worksheets.CustomDocumentProperties;
			///   
			///  //Accessng a custom document property by using the property index
			///  DocumentProperty customProperty1 = customProperties[3];
			///   
			///  //Accessng a custom document property by using the property name
			///  DocumentProperty customProperty2 = customProperties["Owner"];
			/// 
			///  [VB.NET]
			///  
			///  'Instantiate a Workbook object
			///  Dim workbook As Workbook = New Workbook("C:\\book1.xls")
			///   
			///  'Retrieve a list of all custom document properties of the Excel file
			///  Dim customProperties As DocumentPropertyCollection = workbook.Worksheets.CustomDocumentProperties
			///   
			///  'Accessng a custom document property by using the property index
			///  Dim customProperty1 As DocumentProperty = customProperties(3)
			///   
			///  'Accessng a custom document property by using the property name
			///  Dim customProperty2 As DocumentProperty = customProperties("Owner")
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IDocumentProperty : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Returns the name of the property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets or sets the value of the property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetValue()=0;
			/// <summary>
			/// Gets or sets the value of the property.
			/// </summary>
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Indicates whether this property is linked to content
			/// </summary>
			 virtual bool IsLinkedToContent()=0;
			/// <summary>
			/// The linked content source.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSource()=0;
			/// <summary>
			/// Gets the data type of the property.
			/// </summary>
			 virtual Aspose::Cells::Properties::PropertyType GetType()=0;
			/// <summary>
			/// Returns true if this property does not have a name in the OLE2 storage
			/// and a unique name was generated only for the public API.
			/// </summary>
			 virtual bool IsGeneratedName()=0;
			/// <summary>
			/// Returns the property value as a string.
			/// </summary>
			/// <remarks><p>Converts a number property using Object.ToString(). Converts a boolean property
			/// into "Y" or "N". Converts a date property into a short date string.</p>
			/// </remarks>
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> ToString()=0;
			/// <summary>
			/// Returns the property value as integer.
			/// </summary>
			/// <remarks>
			/// Throws an exception if the property type is not PropertyType.Number.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 ToInt()=0;
			/// <summary>
			/// Returns the property value as double.
			/// </summary>
			/// <remarks>
			/// Throws an exception if the property type is not PropertyType.Float.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Double ToDouble()=0;
			/// <summary>
			/// Returns the property value as DateTime in local timezone.
			/// </summary>
			/// <remarks><p>Throws an exception if the property type is not PropertyType.Date.</p>
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> ToDateTime()=0;
			/// <summary>
			/// Returns the property value as bool.
			/// </summary>
			/// <remarks><p>Throws an exception if the property type is not PropertyType.Boolean.</p>
			/// </remarks>
			 virtual bool ToBool()=0;

	};
}
}
}
