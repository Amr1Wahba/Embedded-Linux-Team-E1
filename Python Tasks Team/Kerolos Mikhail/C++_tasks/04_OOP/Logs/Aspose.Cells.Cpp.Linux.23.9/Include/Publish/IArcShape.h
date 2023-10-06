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
			///  Represents the arc shape.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C#]
			///  //Instantiate a new Workbook.
			/// Workbook excelbook = new Workbook();
			///  
			///  //Add an arc shape.
			/// Aspose.Cells.ArcShape arc1 = excelbook.Worksheets[0].Shapes.AddArc(2, 0, 2, 0, 130, 130);
			///  
			///  //Set the placement of the arc.
			/// arc1.Placement = PlacementType.FreeFloating;
			///  
			///  //Set the fill format.
			/// arc1.FillFormat.ForeColor = Color.Blue;
			///  
			///  //Set the line style.
			/// arc1.LineFormat.Style = MsoLineStyle.Single;
			///  
			///  //Set the line weight.
			/// arc1.LineFormat.Weight = 1;
			///  
			///  //Set the color of the arc line.
			/// arc1.LineFormat.ForeColor = Color.Blue;
			///  
			///  //Set the dash style of the arc.
			/// arc1.LineFormat.DashStyle = MsoLineDashStyle.Solid;
			///  
			///  //Add another arc shape.
			/// Aspose.Cells.ArcShape arc2 = excelbook.Worksheets[0].Shapes.AddArc(9, 0, 2, 0, 130, 130);
			///  
			///  //Set the placement of the arc.
			/// arc2.Placement = PlacementType.FreeFloating;
			///  
			///  //Set the line style.
			/// arc2.LineFormat.Style = MsoLineStyle.Single;
			///  
			///  //Set the line weight.
			/// arc2.LineFormat.Weight = 1;
			///  
			///  //Set the color of the arc line.
			/// arc2.LineFormat.ForeColor = Color.Blue;
			///  
			///  //Set the dash style of the arc.
			/// arc2.LineFormat.DashStyle = MsoLineDashStyle.Solid;
			///  
			///  //Save the excel file.
			/// excelbook.Save("d:\\test\\tstarcs.xls");
			///  
			///  [VB..NET]
			/// 
			/// 'Instantiate a new Workbook.
			/// Dim excelbook As Workbook = New Workbook()
			///  
			/// 'Add an arc shape.
			/// Dim arc1 As Aspose.Cells.ArcShape = excelbook.Worksheets(0).Shapes.AddArc(2, 0, 2, 0, 130, 130)
			///  
			/// 'Set the placement of the arc.
			/// arc1.Placement = PlacementType.FreeFloating
			///  
			/// 'Set the fill format.
			/// arc1.FillFormat.ForeColor = Color.Blue
			///  
			/// 'Set the line style.
			/// arc1.LineFormat.Style = MsoLineStyle.Single
			///  
			/// 'Set the line weight.
			/// arc1.LineFormat.Weight = 1
			///  
			/// 'Set the color of the arc line.
			/// arc1.LineFormat.ForeColor = Color.Blue
			///  
			/// 'Set the dash style of the arc.
			/// arc1.LineFormat.DashStyle = MsoLineDashStyle.Solid
			///  
			/// 'Add another arc shape.
			/// Dim arc2 As Aspose.Cells.ArcShape = excelbook.Worksheets(0).Shapes.AddArc(9, 0, 2, 0, 130, 130)
			///  
			/// 'Set the placement of the arc.
			/// arc2.Placement = PlacementType.FreeFloating
			///  
			/// 'Set the line style.
			/// arc2.LineFormat.Style = MsoLineStyle.Single
			///  
			/// 'Set the line weight.
			/// arc2.LineFormat.Weight = 1
			///  
			/// 'Set the color of the arc line.
			/// arc2.LineFormat.ForeColor = Color.Blue
			///  
			/// 'Set the dash style of the arc.
			/// arc2.LineFormat.DashStyle = MsoLineDashStyle.Solid
			///  
			/// 'Save the excel file.
			/// excelbook.Save("d:\test\tstarcs.xls")
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IArcShape : virtual public Aspose::Cells::Drawing::IShape
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
