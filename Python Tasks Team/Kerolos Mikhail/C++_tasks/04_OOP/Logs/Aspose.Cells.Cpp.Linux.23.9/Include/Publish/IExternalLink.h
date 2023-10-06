#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "ExternalLinkType.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		enum ExternalLinkType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents an external link in a workbook.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C#]
			///  
			///  //Open a file with external links
			///  Workbook workbook = new Workbook("d:\\book1.xls");
			///  
			///  //Get External Link 
			///  ExternalLink externalLink = workbook.Worksheets.ExternalLinks[0];
			///  
			///  //Change External Link's Data Source
			///  externalLink.DataSource = "d:\\link.xls";
			/// 
			///  [VB.NET]
			///  
			///  'Open a file with external links
			///  Dim workbook As New Workbook("d:\book1.xls")
			///  
			///  'Get External Link 
			///  Dim externalLink As ExternalLink = workbook.Worksheets.ExternalLinks(0)
			///  
			///  'Change External Link's Data Source
			///  externalLink.DataSource = "d:\link.xls"
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IExternalLink : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the type of external link.
			/// </summary>
			 virtual Aspose::Cells::ExternalLinkType GetType()=0;
			/// <summary>
			/// Represents stored data source of the external link.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetOriginalDataSource()=0;
			/// <summary>
			/// Represents stored data source of the external link.
			/// </summary>
			 virtual void SetOriginalDataSource(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents data source of the external link.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDataSource()=0;
			/// <summary>
			/// Represents data source of the external link.
			/// </summary>
			 virtual void SetDataSource(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Adds an external name.
			/// </summary>
			/// <param name="text" >The text of the external name.
			/// If the external name belongs to a worksheet, the text should be as Sheet1!Text.
			/// </param>
			/// <param name="referTo" >The referTo of the external name. It must be a cell or the range.</param>
			 virtual void AddExternalName(intrusive_ptr<Aspose::Cells::Systems::String> text , intrusive_ptr<Aspose::Cells::Systems::String> referTo)=0;
			/// <summary>
			/// Indicates whether this external link is referenced by others.
			/// </summary>
			 virtual bool IsReferred()=0;
			/// <summary>
			/// Indicates whether this external link is visible in MS Excel.
			/// </summary>
			 virtual bool IsVisible()=0;

	};
}
}
