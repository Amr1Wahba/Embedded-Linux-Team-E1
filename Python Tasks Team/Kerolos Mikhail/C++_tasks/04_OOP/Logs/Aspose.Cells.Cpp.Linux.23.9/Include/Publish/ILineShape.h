#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "MsoArrowheadStyle.h"
#include "MsoArrowheadWidth.h"
#include "MsoArrowheadLength.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum MsoArrowheadStyle;
			enum MsoArrowheadWidth;
			enum MsoArrowheadLength;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the line shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiate a new Workbook.
			/// Workbook workbook = new Workbook();
			///  
			/// //Get the first worksheet in the book.
			/// Worksheet worksheet = workbook.Worksheets[0];
			///  
			/// //Add a new line to the worksheet.
			/// Aspose.Cells.LineShape line1 = worksheet.Shapes.AddLine(5, 0, 1, 0, 0, 250);
			///  
			/// //Set the line dash style
			/// line1.LineFormat.DashStyle = MsoLineDashStyle.Solid;
			///  
			/// //Set the placement.
			/// line1.Placement = PlacementType.FreeFloating;
			///  
			/// //Add another line to the worksheet.
			/// Aspose.Cells.LineShape line2 = worksheet.Shapes.AddLine(7, 0, 1, 0, 85, 250);
			///  
			/// //Set the line dash style.
			/// line2.LineFormat.DashStyle = MsoLineDashStyle.DashLongDash;
			///  
			/// //Set the weight of the line.
			/// line2.LineFormat.Weight = 4;
			///  
			/// //Set the placement.
			/// line2.Placement = PlacementType.FreeFloating;
			///  
			/// //Add the third line to the worksheet.
			/// Aspose.Cells.LineShape line3 = worksheet.Shapes.AddLine(13, 0, 1, 0, 0, 250);
			///  
			/// //Set the line dash style
			/// line3.LineFormat.DashStyle = MsoLineDashStyle.Solid;
			///  
			/// //Set the placement.
			/// line3.Placement = PlacementType.FreeFloating;
			///  
			/// //Make the gridlines invisible in the first worksheet.
			/// workbook.Worksheets[0].IsGridlinesVisible = false;
			///  
			/// //Save the excel file.
			/// workbook.Save("d:\\test\\tstlines.xls"); 
			/// 
			/// [VB.NET]
			/// 
			/// 'Instantiate a new Workbook.
			/// Dim workbook As Workbook = New Workbook()
			///  
			/// 'Get the first worksheet in the book.
			/// Dim worksheet As Worksheet = workbook.Worksheets(0)
			///  
			/// 'Add a new line to the worksheet.
			/// Dim line1 As Aspose.Cells.LineShape = worksheet.Shapes.AddLine(5, 0, 1, 0, 0, 250)
			///  
			/// 'Set the line dash style
			/// line1.LineFormat.DashStyle = MsoLineDashStyle.Solid
			///  
			/// 'Set the placement.
			/// line1.Placement = PlacementType.FreeFloating
			///  
			/// 'Add another line to the worksheet.
			/// Dim line2 As Aspose.Cells.LineShape = worksheet.Shapes.AddLine(7, 0, 1, 0, 85, 250)
			///  
			/// 'Set the line dash style.
			/// line2.LineFormat.DashStyle = MsoLineDashStyle.DashLongDash
			///  
			/// 'Set the weight of the line.
			/// line2.LineFormat.Weight = 4
			///  
			/// 'Set the placement.
			/// line2.Placement = PlacementType.FreeFloating
			///  
			/// 'Add the third line to the worksheet.
			/// Dim line3 As Aspose.Cells.LineShape = worksheet.Shapes.AddLine(13, 0, 1, 0, 0, 250)
			///  
			/// 'Set the line dash style
			/// line3.LineFormat.DashStyle = MsoLineDashStyle.Solid
			///  
			/// 'Set the placement.
			/// line3.Placement = PlacementType.FreeFloating
			///  
			/// 'Make the gridlines invisible in the first worksheet.
			/// workbook.Worksheets(0).IsGridlinesVisible = False
			///  
			/// 'Save the excel file.
			/// workbook.Save("d:\test\tstlines.xls") 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ILineShape : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Gets and sets the begin arrow head style of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.BeginArrowheadStyle property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadStyle GetBeginArrowheadStyle()=0;
			/// <summary>
			/// Gets and sets the begin arrow head style of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.BeginArrowheadStyle property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetBeginArrowheadStyle(Aspose::Cells::Drawing::MsoArrowheadStyle value)=0;
			/// <summary>
			/// Gets and sets the begin arrow head width of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.BeginArrowheadWidth property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadWidth GetBeginArrowheadWidth()=0;
			/// <summary>
			/// Gets and sets the begin arrow head width of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.BeginArrowheadWidth property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetBeginArrowheadWidth(Aspose::Cells::Drawing::MsoArrowheadWidth value)=0;
			/// <summary>
			/// Gets and sets the begin arrow head length of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.BeginArrowheadLength property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadLength GetBeginArrowheadLength()=0;
			/// <summary>
			/// Gets and sets the begin arrow head length of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.BeginArrowheadLength property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetBeginArrowheadLength(Aspose::Cells::Drawing::MsoArrowheadLength value)=0;
			/// <summary>
			/// Gets and sets the end arrow head style of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.EndArrowheadStyle property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadStyle GetEndArrowheadStyle()=0;
			/// <summary>
			/// Gets and sets the end arrow head style of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.EndArrowheadStyle property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetEndArrowheadStyle(Aspose::Cells::Drawing::MsoArrowheadStyle value)=0;
			/// <summary>
			/// Gets and sets the end arrow head width of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.EndArrowheadWidth property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadWidth GetEndArrowheadWidth()=0;
			/// <summary>
			/// Gets and sets the end arrow head width of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.EndArrowheadWidth property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetEndArrowheadWidth(Aspose::Cells::Drawing::MsoArrowheadWidth value)=0;
			/// <summary>
			/// Gets and sets the end arrow head length of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.EndArrowheadLength property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::Drawing::MsoArrowheadLength GetEndArrowheadLength()=0;
			/// <summary>
			/// Gets and sets the end arrow head length of the line.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line.EndArrowheadLength property. 
			/// This property will be removed 12 months later since August 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetEndArrowheadLength(Aspose::Cells::Drawing::MsoArrowheadLength value)=0;

	};
}
}
}
