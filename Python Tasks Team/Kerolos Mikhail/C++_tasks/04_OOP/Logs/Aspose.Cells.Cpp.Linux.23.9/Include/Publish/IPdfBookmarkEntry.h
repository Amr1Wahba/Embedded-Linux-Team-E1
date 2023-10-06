#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"

namespace Aspose {
	namespace Cells {
		class ICell;
	}
}
namespace Aspose{
namespace Cells{
namespace Rendering{
			/// <summary>
			///  PdfBookmarkEntry is an entry in pdf bookmark.
			///  if Text property of current instance is null or "",
			///  current instance will be hidden and children will be inserted on current level.
			///  </summary>
			/// <example>
			///  <code>
			///  [C#]    
			/// Workbook workbook = new Workbook();
			/// workbook.Worksheets.Add();
			/// workbook.Worksheets.Add();
			/// Cell cellInPage1 = workbook.Worksheets[0].Cells["A0"];
			/// Cell cellInPage2 = workbook.Worksheets[1].Cells["A0"];
			/// Cell cellInPage3 = workbook.Worksheets[2].Cells["A0"];
			/// cellInPage1.PutValue("page1");
			/// cellInPage2.PutValue("page2");
			/// cellInPage3.PutValue("page3");
			/// 
			/// PdfBookmarkEntry pbeRoot = new PdfBookmarkEntry();
			/// pbeRoot.Text = "root";  // if pbeRoot.Text = null, all children of pbeRoot will be inserted on the top level in the bookmark.
			/// pbeRoot.Destination = cellInPage1;
			/// pbeRoot.SubEntry = new ArrayList();
			/// pbeRoot.IsOpen = false;
			/// 
			/// PdfBookmarkEntry subPbe1 = new PdfBookmarkEntry();
			/// subPbe1.Text = "section1";
			/// subPbe1.Destination = cellInPage2;
			/// 
			/// PdfBookmarkEntry subPbe2 = new PdfBookmarkEntry();
			/// subPbe2.Text = "section2";
			/// subPbe2.Destination = cellInPage3;
			/// 
			/// pbeRoot.SubEntry.Add(subPbe1);
			/// pbeRoot.SubEntry.Add(subPbe2);
			/// 
			/// workbook.SaveOptions.PdfBookmark = pbeRoot;
			/// workbook.Save("c:\\Test.pdf");
			///  
			///  [VB]    
			/// Dim workbook As Workbook = New Workbook
			/// workbook.Worksheets.Add("sheet2")
			/// workbook.Worksheets.Add("sheet3")
			/// 
			/// Dim cells As Cells = workbook.Worksheets(0).Cells
			/// Dim cellInPage1 As Cell = cells("A0")
			/// cellInPage1.PutValue("Page1")
			/// 
			/// cells = workbook.Worksheets(1).Cells
			/// Dim cellInPage2 As Cell = cells("A0")
			/// cellInPage2.PutValue("Page2")
			/// 
			/// cells = workbook.Worksheets(2).Cells
			/// Dim cellInPage3 As Cell = cells("A0")
			/// cellInPage3.PutValue("Page3")
			/// 
			/// Dim pbeRoot As PdfBookmarkEntry = New PdfBookmarkEntry()
			/// pbeRoot.Text = "root"
			/// pbeRoot.Destination = cellInPage1
			/// pbeRoot.SubEntry = New ArrayList
			/// pbeRoot.IsOpen = False
			/// 
			/// Dim subPbe1 As PdfBookmarkEntry = New PdfBookmarkEntry()
			/// subPbe1.Text = "section1"
			/// subPbe1.Destination = cellInPage2
			/// 
			/// Dim subPbe2 As PdfBookmarkEntry = New PdfBookmarkEntry()
			/// subPbe2.Text = "section2"
			/// subPbe2.Destination = cellInPage3
			/// 
			/// pbeRoot.SubEntry.Add(subPbe1)
			/// pbeRoot.SubEntry.Add(subPbe2)
			/// 
			/// workbook.SaveOptions.PdfBookmark = pbeRoot
			/// workbook.Save("c:\\Test.pdf")
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IPdfBookmarkEntry : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Title of a bookmark.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// Title of a bookmark.
			/// </summary>
			 virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// The cell to which the bookmark link.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetICellDestination()=0;
			/// <summary>
			/// The cell to which the bookmark link.
			/// </summary>
			 virtual void 		SetICellDestination(intrusive_ptr<Aspose::Cells::ICell> value)=0;
			/// <summary>
			/// Gets or sets name of destination.
			/// </summary>
			/// <remarks>
			/// If destination name is set, the destination will be defined as a named destination with this name.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDestinationName()=0;
			/// <summary>
			/// Gets or sets name of destination.
			/// </summary>
			/// <remarks>
			/// If destination name is set, the destination will be defined as a named destination with this name.
			/// </remarks>
			 virtual void SetDestinationName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// SubEntry of a bookmark.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> GetSubEntry()=0;
			/// <summary>
			/// SubEntry of a bookmark.
			/// </summary>
			 virtual void SetSubEntry(intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> value)=0;
			/// <summary>
			/// When this property is true, the bookmarkentry will expand, otherwise it will collapse.
			/// </summary>
			 virtual bool IsOpen()=0;
			/// <summary>
			/// When this property is true, the bookmarkentry will expand, otherwise it will collapse.
			/// </summary>
			 virtual void SetOpen(bool value)=0;
			/// <summary>
			/// When this property is true, the bookmarkentry will collapse, otherwise it will expand.
			/// </summary>
			 virtual bool IsCollapse()=0;
			/// <summary>
			/// When this property is true, the bookmarkentry will collapse, otherwise it will expand.
			/// </summary>
			 virtual void SetCollapse(bool value)=0;

	};
}
}
}
