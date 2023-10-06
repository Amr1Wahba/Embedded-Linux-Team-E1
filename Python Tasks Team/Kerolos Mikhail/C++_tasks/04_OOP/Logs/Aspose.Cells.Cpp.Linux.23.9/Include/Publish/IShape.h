#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Double.h"
#include "ShapeLockType.h"
#include "MsoDrawingType.h"
#include "AutoShapeType.h"
#include "ShapeAnchorType.h"
#include "PlacementType.h"
#include "Aspose.Cells.Systems/Array2D.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageFormat.h"
#include "ImageType.h"
#include "Aspose.Cells.Systems/Drawing/Bitmap.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"
#include "TextOverflowType.h"
#include "TextOrientationType.h"
#include "TextAlignmentType.h"
#include "TextDirectionType.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Guid.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IGroupShape;
			class IMsoLineFormat;
			class IMsoFillFormat;
			class ILineFormat;
			class IFillFormat;
			class IShadowEffect;
			class IMsoTextFrame;
			class IMsoFormatPicture;
			enum ShapeLockType;
			class ITextEffectFormat;
			enum MsoDrawingType;
			enum AutoShapeType;
			enum ShapeAnchorType;
			enum PlacementType;
			enum ImageType;
			enum TextOverflowType;
			class IShapePathCollection;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IHyperlink;
		class IWorksheet;
		class IFont;
		class IStyleFlag;
		class IFontSetting;
		enum TextOrientationType;
		enum TextAlignmentType;
		enum TextDirectionType;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class IImageOrPrintOptions;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the msodrawing object.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //Initialize a new workbook.
			/// Workbook book = new Workbook();
			/// 
			/// //Add a shape.(e.g rectangle)
			/// Aspose.Cells.Drawing.Shape shape = book.Worksheets[0].Shapes.AddRectangle(2, 0, 2, 0, 130, 130);
			/// 
			/// //do your business
			/// 
			/// //Save the excel file.
			/// book.Save("exmaple.xlsx");
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IShape : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets and sets the name of macro.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //Sets the name of macro.
			/// shape.MacroName = "DoWork()";
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetMacroName()=0;
			/// <summary>
			/// Gets and sets the name of macro.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //Sets the name of macro.
			/// shape.MacroName = "DoWork()";
			/// </code>
			/// </example>
			 virtual void SetMacroName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates whether the shape only contains an equation.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //If true,the shape only contains an equation.
			/// if(shape.IsEquation)
			/// {
			///     //The shape contains only an equation
			/// }
			/// </code>
			/// </example>
			 virtual bool IsEquation()=0;
			/// <summary>
			/// Indicates whether the shape is smart art.
			/// </summary>
			/// <remarks>
			/// Only for ooxml file.
			/// </remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// //if true,the shape is smart art.
			/// if(shape.IsSmartArt)
			/// {
			///     //The shape is SmartArt object.
			/// }
			/// </code>
			/// </example>
			 virtual bool IsSmartArt()=0;
			/// <summary>
			/// Converting smart art to grouped shapes.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Drawing.GroupShape groupShape = shape.GetResultOfSmartArt();
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGroupShape> 		GetIGroupShapeResult()=0;
			/// <summary>
			/// Brings the shape to the front or sends the shape to back.
			/// </summary>
			/// <param name="orders" >
			/// If it's less than zero, sets the shape to back.
			/// If it's greater than zero, brings the shape to front.
			/// </param>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.ToFrontOrBack(2);
			/// //or shape.ToFrontOrBack(-1);
			/// </code>
			/// </example>
			 virtual void ToFrontOrBack(Aspose::Cells::Systems::Int32 orders)=0;
			/// <summary>
			/// Returns the position of a shape in the z-order. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.ZOrderPosition = 3;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetZOrderPosition()=0;
			/// <summary>
			/// Returns the position of a shape in the z-order. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.ZOrderPosition = 3;
			/// </code>
			/// </example>
			 virtual void SetZOrderPosition(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets and sets the name of the shape. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.Name = "shape1";
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets and sets the name of the shape. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.Name = "shape1";
			/// </code>
			/// </example>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Returns or sets the descriptive (alternative) text string of the <see cref="Shape" />
			///  object.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// shape.AlternativeText = "a rectangle";
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetAlternativeText()=0;
			/// <summary>
			/// Returns or sets the descriptive (alternative) text string of the <see cref="Shape" />
			///  object.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// shape.AlternativeText = "a rectangle";
			/// </code>
			/// </example>
			 virtual void SetAlternativeText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Specifies the title (caption) of the current shape object. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.Title = "title1";
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetTitle()=0;
			/// <summary>
			/// Specifies the title (caption) of the current shape object. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.Title = "title1";
			/// </code>
			/// </example>
			 virtual void SetTitle(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Returns a MsoLineFormat object that contains line formatting properties for the specified shape.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Line property. 
			/// This property will be removed 12 months later since July 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IMsoLineFormat> 		GetIMsoLineFormat()=0;
			/// <summary>
			/// Returns a MsoFillFormat object that contains fill formatting properties for the specified shape.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.Fill property. 
			/// This property will be removed 12 months later since July 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IMsoFillFormat> 		GetIMsoFillFormat()=0;
			/// <summary>
			/// Gets line style
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Drawing.LineFormat lineFmt = shape.Line;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILineFormat> 		GetILineFormat()=0;
			/// <summary>
			/// Returns a <see cref="FillFormat" />
			///  object that contains fill formatting properties for the specified shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Drawing.FillFormat fillFmt = shape.Fill;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IFillFormat> 		GetIFillFormat()=0;
			/// <summary>
			/// Represents a <seealso cref="Drawing.ShadowEffect" />
			///  object that specifies shadow effect for the chart element or shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Drawing.ShadowEffect shadowEffect = shape.ShadowEffect;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShadowEffect> 		GetIShadowEffect()=0;
			/// <summary>
			/// Gets and sets the radius of blur to apply to the edges, in unit of points.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.SoftEdges = 0.5d;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetSoftEdges()=0;
			/// <summary>
			/// Gets and sets the radius of blur to apply to the edges, in unit of points.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.SoftEdges = 0.5d;
			/// </code>
			/// </example>
			 virtual void SetSoftEdges(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Returns a TextFrame object that contains the alignment and anchoring properties for the specified shape.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.TextBody.TextAlignment property. 
			/// This property will be removed 12 months later since May 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IMsoTextFrame> 		GetIMsoTextFrame()=0;
			/// <summary>
			/// Gets and sets the options of the picture format.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Drawing.MsoFormatPicture msoFormatPicture = shape.FormatPicture;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IMsoFormatPicture> 		GetIMsoFormatPicture()=0;
			/// <summary>
			/// Indicates whether the object is visible.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.IsHidden = false;
			/// </code>
			/// </example>
			 virtual bool IsHidden()=0;
			/// <summary>
			/// Indicates whether the object is visible.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.IsHidden = false;
			/// </code>
			/// </example>
			 virtual void SetHidden(bool value)=0;
			/// <summary>
			/// True means that don't allow changes in aspect ratio.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.IsLockAspectRatio = false;
			/// </code>
			/// </example>
			 virtual bool IsLockAspectRatio()=0;
			/// <summary>
			/// True means that don't allow changes in aspect ratio.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.IsLockAspectRatio = false;
			/// </code>
			/// </example>
			 virtual void SetLockAspectRatio(bool value)=0;
			/// <summary>
			/// Gets the value of locked property.
			/// </summary>
			/// <param name="type" >The type of the shape locked property.</param>
			/// <returns>Returns  the value of locked property.</returns>
			/// <example><code>
			/// 
			/// [C#]
			/// int noAdjustHandles = 0;
			/// if (shape.GetLockedProperty(ShapeLockType.AdjustHandles))
			///     noAdjustHandles = 1;
			/// </code>
			/// </example>
			 virtual bool GetLockedProperty(Aspose::Cells::Drawing::ShapeLockType type)=0;
			/// <summary>
			/// Set the locked property.
			/// </summary>
			/// <param name="type" >The locked type.</param>
			/// <param name="value" >The value of the property.</param>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.SetLockedProperty(ShapeLockType.AdjustHandles, true);
			/// </code>
			/// </example>
			 virtual void SetLockedProperty(Aspose::Cells::Drawing::ShapeLockType type , bool value)=0;
			/// <summary>
			/// Gets and sets the rotation of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.RotationAngle == 45)
			///     shape.RotationAngle = 60;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetRotationAngle()=0;
			/// <summary>
			/// Gets and sets the rotation of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.RotationAngle == 45)
			///     shape.RotationAngle = 60;
			/// </code>
			/// </example>
			 virtual void SetRotationAngle(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Adds a hyperlink to the shape.
			/// </summary>
			/// <param name="address" >Address of the hyperlink.</param>
			/// <returns>Return the new hyperlink object.</returns>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Hyperlink hyperlink = shape.AddHyperlink("https://www.aspose.com/");
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::IHyperlink> 		AddIHyperlink(intrusive_ptr<Aspose::Cells::Systems::String> address)=0;
			/// <summary>
			/// Remove the hyperlink of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.RemoveHyperlink();
			/// </code>
			/// </example>
			 virtual void RemoveHyperlink()=0;
			/// <summary>
			/// Gets the hyperlink of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Hyperlink hyperlink = shape.Hyperlink;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::IHyperlink> 		GetIHyperlink()=0;
			/// <summary>
			/// Moves the shape to a specified range.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="lowerRightRow" >Lower right row index</param>
			/// <param name="lowerRightColumn" >Lower right column index</param>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.MoveToRange(12, 3, 13, 5);
			/// </code>
			/// </example>
			 virtual void MoveToRange(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 lowerRightRow , Aspose::Cells::Systems::Int32 lowerRightColumn)=0;
			/// <summary>
			/// Moves the picture to the top-right corner.
			/// </summary>
			/// <param name="topRow" >the row index.</param>
			/// <param name="rightColumn" >the column index.</param>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.AlignTopRightCorner(2, 5);
			/// </code>
			/// </example>
			 virtual void AlignTopRightCorner(Aspose::Cells::Systems::Int32 topRow , Aspose::Cells::Systems::Int32 rightColumn)=0;
			/// <summary>
			/// Gets the identifier of this shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// int id = shape.Id;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetId()=0;
			/// <summary>
			/// Specifies an optional string that an application can use to Identify the particular shape. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// string spid = shape.Spid;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSpid()=0;
			/// <summary>
			/// Specifies an optional number that an application can use to associate the particular shape with a defined shape type.  
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// int spt = shape.Spt;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetSpt()=0;
			/// <summary>
			/// Gets the <see cref="Worksheet" />
			///  object which contains this shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Worksheet worksheet = shape.Worksheet;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetIWorksheet()=0;
			/// <summary>
			/// Indicates whether the shape is a group.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsGroup)
			/// {
			///     //This shape is a group.
			/// }
			/// </code>
			/// </example>
			 virtual bool IsGroup()=0;
			/// <summary>
			/// Indicates whether the shape is grouped.
			/// </summary>
			 virtual bool IsInGroup()=0;
			/// <summary>
			/// Indicates whether this shape is a word art.
			/// </summary>
			/// <remarks>
			/// Only for the Legacy Shape of xls file.
			/// </remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsWordArt)
			/// {
			///     //This shape is a WordArt object.
			/// }
			/// </code>
			/// </example>
			 virtual bool IsWordArt()=0;
			/// <summary>
			/// Returns a TextEffectFormat object that contains text-effect formatting properties for the specified shape. 
			/// Applies to Shape objects that represent WordArt.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Drawing.TextEffectFormat textEffectFormat = shape.TextEffect;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ITextEffectFormat> 		GetITextEffectFormat()=0;
			/// <summary>
			/// True if the object is locked, False if the object can be modified when the sheet is protected. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsLocked)
			///     shape.IsLocked = false;
			/// </code>
			/// </example>
			 virtual bool IsLocked()=0;
			/// <summary>
			/// True if the object is locked, False if the object can be modified when the sheet is protected. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsLocked)
			///     shape.IsLocked = false;
			/// </code>
			/// </example>
			 virtual void SetLocked(bool value)=0;
			/// <summary>
			/// True if the object is printable
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsPrintable)
			///     shape.IsPrintable = false;
			/// </code>
			/// </example>
			 virtual bool IsPrintable()=0;
			/// <summary>
			/// True if the object is printable
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsPrintable)
			///     shape.IsPrintable = false;
			/// </code>
			/// </example>
			 virtual void SetPrintable(bool value)=0;
			/// <summary>
			/// Gets mso drawing type.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Drawing.MsoDrawingType msoDrawingType = shape.MsoDrawingType;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Drawing::MsoDrawingType GetMsoDrawingType()=0;
			/// <summary>
			/// Gets and sets the auto shape type.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.AutoShapeType == Aspose.Cells.Drawing.AutoShapeType.Unknown)
			///     shape.AutoShapeType = Aspose.Cells.Drawing.AutoShapeType.Rectangle;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Drawing::AutoShapeType GetAutoShapeType()=0;
			/// <summary>
			/// Gets and sets the auto shape type.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.AutoShapeType == Aspose.Cells.Drawing.AutoShapeType.Unknown)
			///     shape.AutoShapeType = Aspose.Cells.Drawing.AutoShapeType.Rectangle;
			/// </code>
			/// </example>
			 virtual void SetAutoShapeType(Aspose::Cells::Drawing::AutoShapeType value)=0;
			/// <summary>
			/// Gets and set the shape anchor placeholder.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.AnchorType == ShapeAnchorType.OneCellAnchor)
			///     shape.AnchorType = ShapeAnchorType.TwoCellAnchor;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Drawing::ShapeAnchorType GetAnchorType()=0;
			/// <summary>
			/// Gets and set the shape anchor placeholder.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.AnchorType == ShapeAnchorType.OneCellAnchor)
			///     shape.AnchorType = ShapeAnchorType.TwoCellAnchor;
			/// </code>
			/// </example>
			 virtual void SetAnchorType(Aspose::Cells::Drawing::ShapeAnchorType value)=0;
			/// <summary>
			/// Represents the way the drawing object is attached to the cells below it.
			/// The property controls the placement of an object on a worksheet.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Placement == PlacementType.Move)
			///     shape.Placement = PlacementType.MoveAndSize;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Drawing::PlacementType GetPlacement()=0;
			/// <summary>
			/// Represents the way the drawing object is attached to the cells below it.
			/// The property controls the placement of an object on a worksheet.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Placement == PlacementType.Move)
			///     shape.Placement = PlacementType.MoveAndSize;
			/// </code>
			/// </example>
			 virtual void SetPlacement(Aspose::Cells::Drawing::PlacementType value)=0;
			/// <summary>
			/// Represents upper left corner row index. 
			/// </summary>
			/// <remarks>If the shape is in the shape or in the group , UpperLeftRow will be ignored.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperLeftRow == 3)
			///     shape.UpperLeftRow = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetUpperLeftRow()=0;
			/// <summary>
			/// Represents upper left corner row index. 
			/// </summary>
			/// <remarks>If the shape is in the shape or in the group , UpperLeftRow will be ignored.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperLeftRow == 3)
			///     shape.UpperLeftRow = 1;
			/// </code>
			/// </example>
			 virtual void SetUpperLeftRow(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or sets the shape's vertical offset from its upper left corner row.
			/// </summary>
			/// <remarks>The range of value is 0 to 256.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaY == 3)
			///     shape.UpperDeltaY = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetUpperDeltaY()=0;
			/// <summary>
			/// Gets or sets the shape's vertical offset from its upper left corner row.
			/// </summary>
			/// <remarks>The range of value is 0 to 256.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaY == 3)
			///     shape.UpperDeltaY = 1;
			/// </code>
			/// </example>
			 virtual void SetUpperDeltaY(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents upper left corner column index.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperLeftColumn == 3)
			///     shape.UpperLeftColumn = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetUpperLeftColumn()=0;
			/// <summary>
			/// Represents upper left corner column index.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperLeftColumn == 3)
			///     shape.UpperLeftColumn = 1;
			/// </code>
			/// </example>
			 virtual void SetUpperLeftColumn(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or sets the shape's horizontal offset from its upper left corner column.
			/// </summary>
			/// <remarks>The range of value is 0 to 1024.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaX == 3)
			///     shape.UpperDeltaX = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetUpperDeltaX()=0;
			/// <summary>
			/// Gets or sets the shape's horizontal offset from its upper left corner column.
			/// </summary>
			/// <remarks>The range of value is 0 to 1024.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaX == 3)
			///     shape.UpperDeltaX = 1;
			/// </code>
			/// </example>
			 virtual void SetUpperDeltaX(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents lower right corner row index.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LowerRightRow == 3)
			///     shape.LowerRightRow = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetLowerRightRow()=0;
			/// <summary>
			/// Represents lower right corner row index.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LowerRightRow == 3)
			///     shape.LowerRightRow = 1;
			/// </code>
			/// </example>
			 virtual void SetLowerRightRow(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or sets the shape's vertical offset from its lower right corner row.
			/// </summary>
			/// <remarks>The range of value is 0 to 256.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LowerDeltaY == 3)
			///     shape.LowerDeltaY = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetLowerDeltaY()=0;
			/// <summary>
			/// Gets or sets the shape's vertical offset from its lower right corner row.
			/// </summary>
			/// <remarks>The range of value is 0 to 256.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LowerDeltaY == 3)
			///     shape.LowerDeltaY = 1;
			/// </code>
			/// </example>
			 virtual void SetLowerDeltaY(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents lower right corner column index.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LowerRightColumn == 3)
			///     shape.LowerRightColumn = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetLowerRightColumn()=0;
			/// <summary>
			/// Represents lower right corner column index.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LowerRightColumn == 3)
			///     shape.LowerRightColumn = 1;
			/// </code>
			/// </example>
			 virtual void SetLowerRightColumn(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets or sets the shape's horizontal  offset from its lower right corner column.
			/// </summary>
			/// <remarks>The range of value is 0 to 1024.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LowerDeltaX == 3)
			///     shape.LowerDeltaX = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetLowerDeltaX()=0;
			/// <summary>
			/// Gets or sets the shape's horizontal  offset from its lower right corner column.
			/// </summary>
			/// <remarks>The range of value is 0 to 1024.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LowerDeltaX == 3)
			///     shape.LowerDeltaX = 1;
			/// </code>
			/// </example>
			 virtual void SetLowerDeltaX(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the width of the shape's horizontal  offset from its lower right corner column, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Right == 3)
			///     shape.Right = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetRight()=0;
			/// <summary>
			/// Represents the width of the shape's horizontal  offset from its lower right corner column, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Right == 3)
			///     shape.Right = 1;
			/// </code>
			/// </example>
			 virtual void SetRight(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the width of the shape's vertical offset from its lower bottom corner row, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Bottom == 3)
			///     shape.Bottom = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetBottom()=0;
			/// <summary>
			/// Represents the width of the shape's vertical offset from its lower bottom corner row, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Bottom == 3)
			///     shape.Bottom = 1;
			/// </code>
			/// </example>
			 virtual void SetBottom(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the width of shape, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Width == 3)
			///     shape.Width = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetWidth()=0;
			/// <summary>
			/// Represents the width of shape, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Width == 3)
			///     shape.Width = 1;
			/// </code>
			/// </example>
			 virtual void SetWidth(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			///  Represents the width of the shape, in unit of inch. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.WidthInch == 3)
			///     shape.WidthInch = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetWidthInch()=0;
			/// <summary>
			///  Represents the width of the shape, in unit of inch. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.WidthInch == 3)
			///     shape.WidthInch = 1;
			/// </code>
			/// </example>
			 virtual void SetWidthInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			///  Represents the width of the shape, in unit of point. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.WidthPt == 3)
			///     shape.WidthPt = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetWidthPt()=0;
			/// <summary>
			///  Represents the width of the shape, in unit of point. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.WidthPt == 3)
			///     shape.WidthPt = 1;
			/// </code>
			/// </example>
			 virtual void SetWidthPt(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the width of the shape, in unit of centimeters. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.WidthCM == 3)
			///     shape.WidthCM = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetWidthCM()=0;
			/// <summary>
			/// Represents the width of the shape, in unit of centimeters. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.WidthCM == 3)
			///     shape.WidthCM = 1;
			/// </code>
			/// </example>
			 virtual void SetWidthCM(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the height of shape, in unit of pixel.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Height == 3)
			///     shape.Height = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetHeight()=0;
			/// <summary>
			/// Represents the height of shape, in unit of pixel.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Height == 3)
			///     shape.Height = 1;
			/// </code>
			/// </example>
			 virtual void SetHeight(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the height of the shape, in unit of inches. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.HeightInch == 3)
			///     shape.HeightInch = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetHeightInch()=0;
			/// <summary>
			/// Represents the height of the shape, in unit of inches. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.HeightInch == 3)
			///     shape.HeightInch = 1;
			/// </code>
			/// </example>
			 virtual void SetHeightInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the height of the shape, in unit of points. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.HeightPt == 3)
			///     shape.HeightPt = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetHeightPt()=0;
			/// <summary>
			/// Represents the height of the shape, in unit of points. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.HeightPt == 3)
			///     shape.HeightPt = 1;
			/// </code>
			/// </example>
			 virtual void SetHeightPt(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the height of the shape, in unit of centimeters. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.HeightCM == 3)
			///     shape.HeightCM = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetHeightCM()=0;
			/// <summary>
			/// Represents the height of the shape, in unit of centimeters. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.HeightCM == 3)
			///     shape.HeightCM = 1;
			/// </code>
			/// </example>
			 virtual void SetHeightCM(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the horizontal offset of shape from its left column, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Left == 3)
			///     shape.Left = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetLeft()=0;
			/// <summary>
			/// Represents the horizontal offset of shape from its left column, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Left == 3)
			///     shape.Left = 1;
			/// </code>
			/// </example>
			 virtual void SetLeft(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the horizontal offset of shape from its left column, in unit of inches.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LeftInch == 3)
			///     shape.LeftInch = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetLeftInch()=0;
			/// <summary>
			/// Represents the horizontal offset of shape from its left column, in unit of inches.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LeftInch == 3)
			///     shape.LeftInch = 1;
			/// </code>
			/// </example>
			 virtual void SetLeftInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the horizontal offset of shape from its left column, in unit of centimeters.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LeftCM == 3)
			///     shape.LeftCM = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetLeftCM()=0;
			/// <summary>
			/// Represents the horizontal offset of shape from its left column, in unit of centimeters.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LeftCM == 3)
			///     shape.LeftCM = 1;
			/// </code>
			/// </example>
			 virtual void SetLeftCM(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the vertical offset of shape from its top row, in unit of pixels.
			/// </summary>
			/// <remarks>If the shape is in the chart, represents the vertical offset of shape from its top border.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Top == 3)
			///     shape.Top = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetTop()=0;
			/// <summary>
			/// Represents the vertical offset of shape from its top row, in unit of pixels.
			/// </summary>
			/// <remarks>If the shape is in the chart, represents the vertical offset of shape from its top border.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Top == 3)
			///     shape.Top = 1;
			/// </code>
			/// </example>
			 virtual void SetTop(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			///  Represents the vertical offset of shape from its top row, in unit of inches.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TopInch == 3)
			///     shape.TopInch = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetTopInch()=0;
			/// <summary>
			///  Represents the vertical offset of shape from its top row, in unit of inches.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TopInch == 3)
			///     shape.TopInch = 1;
			/// </code>
			/// </example>
			 virtual void SetTopInch(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			///  Represents the vertical offset of shape from its top row, in unit of centimeters.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TopCM == 3)
			///     shape.TopCM = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Double GetTopCM()=0;
			/// <summary>
			///  Represents the vertical offset of shape from its top row, in unit of centimeters.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TopCM == 3)
			///     shape.TopCM = 1;
			/// </code>
			/// </example>
			 virtual void SetTopCM(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets and sets the vertical offset of shape from worksheet top border, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TopToCorner == 3)
			///     shape.TopToCorner = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetTopToCorner()=0;
			/// <summary>
			/// Gets and sets the vertical offset of shape from worksheet top border, in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TopToCorner == 3)
			///     shape.TopToCorner = 1;
			/// </code>
			/// </example>
			 virtual void SetTopToCorner(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets and sets the horizonal offset of shape from worksheet left border.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LeftToCorner == 3)
			///     shape.LeftToCorner = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetLeftToCorner()=0;
			/// <summary>
			/// Gets and sets the horizonal offset of shape from worksheet left border.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LeftToCorner == 3)
			///     shape.LeftToCorner = 1;
			/// </code>
			/// </example>
			 virtual void SetLeftToCorner(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets and sets the horizontal offset of shape from worksheet left border,in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.X == 3)
			///     shape.X = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetX()=0;
			/// <summary>
			/// Gets and sets the horizontal offset of shape from worksheet left border,in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.X == 3)
			///     shape.X = 1;
			/// </code>
			/// </example>
			 virtual void SetX(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets and sets the vertical offset of shape from worksheet top border,in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Y == 3)
			///     shape.Y = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetY()=0;
			/// <summary>
			/// Gets and sets the vertical offset of shape from worksheet top border,in unit of pixels.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.Y == 3)
			///     shape.Y = 1;
			/// </code>
			/// </example>
			 virtual void SetY(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets and sets the width scale, in unit of percent of the original picture width.
			/// If the shape is not picture ,the WidthScale property only returns 100;
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.WidthScale == 3)
			///     shape.WidthScale = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetWidthScale()=0;
			/// <summary>
			/// Gets and sets the width scale, in unit of percent of the original picture width.
			/// If the shape is not picture ,the WidthScale property only returns 100;
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.WidthScale == 3)
			///     shape.WidthScale = 1;
			/// </code>
			/// </example>
			 virtual void SetWidthScale(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			///  Gets and sets the height scale,in unit of percent of the original picture height.
			/// If the shape is not picture ,the HeightScale property only returns 100;
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.HeightScale == 3)
			///     shape.HeightScale = 1;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetHeightScale()=0;
			/// <summary>
			///  Gets and sets the height scale,in unit of percent of the original picture height.
			/// If the shape is not picture ,the HeightScale property only returns 100;
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.HeightScale == 3)
			///     shape.HeightScale = 1;
			/// </code>
			/// </example>
			 virtual void SetHeightScale(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the vertical offset of shape from the top border of the parent shape, 
			/// in unit of 1/4000 of height of the parent shape.
			/// </summary>
			/// <remarks>Only Applies when this shape in the group or chart.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TopInShape == 8000)
			///     shape.TopInShape = 4000;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetTopInShape()=0;
			/// <summary>
			/// Represents the vertical offset of shape from the top border of the parent shape, 
			/// in unit of 1/4000 of height of the parent shape.
			/// </summary>
			/// <remarks>Only Applies when this shape in the group or chart.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TopInShape == 8000)
			///     shape.TopInShape = 4000;
			/// </code>
			/// </example>
			 virtual void SetTopInShape(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the horizontal offset of shape from the left border of the parent shape, 
			/// in unit of 1/4000 of width of the parent shape.
			/// </summary>
			/// <remarks>Only Applies when this shape in the group or chart.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaY == 2000)
			///     shape.UpperDeltaY = 4000;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetLeftInShape()=0;
			/// <summary>
			/// Represents the horizontal offset of shape from the left border of the parent shape, 
			/// in unit of 1/4000 of width of the parent shape.
			/// </summary>
			/// <remarks>Only Applies when this shape in the group or chart.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaY == 2000)
			///     shape.UpperDeltaY = 4000;
			/// </code>
			/// </example>
			 virtual void SetLeftInShape(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the width of the shape, in unit of 1/4000 of the parent shape.
			/// </summary>
			/// <remarks>Only Applies when this shape in the group or chart.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaY == 2000)
			///     shape.UpperDeltaY = 4000;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetWidthInShape()=0;
			/// <summary>
			/// Represents the width of the shape, in unit of 1/4000 of the parent shape.
			/// </summary>
			/// <remarks>Only Applies when this shape in the group or chart.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaY == 2000)
			///     shape.UpperDeltaY = 4000;
			/// </code>
			/// </example>
			 virtual void SetWidthInShape(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the vertical offset of shape from the top border of the parent shape, in unit of 1/4000 of height of the parent shape..
			/// </summary>
			/// <remarks>Only Applies when this shape in the group or chart.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaY == 4000)
			///     shape.UpperDeltaY = 2000;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetHeightInShape()=0;
			/// <summary>
			/// Represents the vertical offset of shape from the top border of the parent shape, in unit of 1/4000 of height of the parent shape..
			/// </summary>
			/// <remarks>Only Applies when this shape in the group or chart.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.UpperDeltaY == 4000)
			///     shape.UpperDeltaY = 2000;
			/// </code>
			/// </example>
			 virtual void SetHeightInShape(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the group shape which contains this shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Drawing.GroupShape groupShape = shape.Group;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGroupShape> 		GetIGroupShape()=0;
			/// <summary>
			/// Gets the auto shape type.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Drawing.AutoShapeType autoShapeType = shape.Type;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Drawing::AutoShapeType GetType()=0;
			/// <summary>
			/// Gets and sets the line border of the shape is visible.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.HasLine == false)
			///     shape.HasLine = true;
			/// </code>
			/// </example>
			 virtual bool HasLine()=0;
			/// <summary>
			/// Gets and sets the line border of the shape is visible.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.HasLine == false)
			///     shape.HasLine = true;
			/// </code>
			/// </example>
			 virtual void SetHasLine(bool value)=0;
			/// <summary>
			/// Indicates whether the fill format is visible.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsFilled == false)
			///     shape.IsFilled = true;
			/// </code>
			/// </example>
			 virtual bool IsFilled()=0;
			/// <summary>
			/// Indicates whether the fill format is visible.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsFilled == false)
			///     shape.IsFilled = true;
			/// </code>
			/// </example>
			 virtual void SetFilled(bool value)=0;
			/// <summary>
			/// Gets and sets whether shape is horizontally flipped .
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsFlippedHorizontally == false)
			///     shape.IsFlippedHorizontally = true;
			/// </code>
			/// </example>
			 virtual bool IsFlippedHorizontally()=0;
			/// <summary>
			/// Gets and sets whether shape is horizontally flipped .
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsFlippedHorizontally == false)
			///     shape.IsFlippedHorizontally = true;
			/// </code>
			/// </example>
			 virtual void SetFlippedHorizontally(bool value)=0;
			/// <summary>
			/// Gets and sets whether shape is vertically flipped .
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsFlippedVertically == false)
			///     shape.IsFlippedVertically = true;
			/// </code>
			/// </example>
			 virtual bool IsFlippedVertically()=0;
			/// <summary>
			/// Gets and sets whether shape is vertically flipped .
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsFlippedVertically == false)
			///     shape.IsFlippedVertically = true;
			/// </code>
			/// </example>
			 virtual void SetFlippedVertically(bool value)=0;
			/// <summary>
			/// Get the actual bottom row.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// int rRow = shape.ActualLowerRightRow;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Systems::Int32 GetActualLowerRightRow()=0;
			/// <summary>
			/// Get the connection points
			/// </summary>
			/// <returns>[X,Y] pairs of the connection point. Every item is a float[2] array, [0] represents x and [1] represents y.</returns>
			/// <example><code>
			/// 
			/// [C#]
			/// float[][] points = shape.GetConnectionPoints();
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array2D<Aspose::Cells::Systems::Single>> GetConnectionPoints()=0;
			/// <summary>
			/// Creates the shape image and saves it to a stream in the specified format.
			/// </summary>
			/// <param name="stream" >The output stream.</param>
			/// <param name="imageFormat" >The format in which to save the image.</param>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Shape.ToImage(Stream, ImageType) method. 
			/// This property will be removed 12 months later since July 2022. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void ToImage(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> imageFormat)=0;
			/// <summary>
			/// Creates the shape image and saves it to a stream in the specified format.
			/// </summary>
			/// <param name="stream" >The output stream.</param>
			/// <param name="imageType" >The type in which to save the image.</param>
			/// <remarks><p>The following formats are supported: 
			/// .bmp, .gif, .jpg, .jpeg, .tiff, .emf.</p>
			/// </remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// MemoryStream imageStream = new MemoryStream();
			/// shape.ToImage(imageStream, ImageType.Png);
			/// </code>
			/// </example>
			 virtual void ToImage(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , Aspose::Cells::Drawing::ImageType imageType)=0;
			/// <summary>
			/// Saves the shape to a file.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// ImageOrPrintOptions op = new ImageOrPrintOptions();
			/// shape.ToImage("exmaple.png", op);
			/// </code>
			/// </example>
			 virtual void 		ToImage(intrusive_ptr<Aspose::Cells::Systems::String> imageFile , intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> options)=0;
			/// <summary>
			/// Saves the shape to a stream.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// MemoryStream imageStream = new MemoryStream();
			/// ImageOrPrintOptions op = new ImageOrPrintOptions();
			/// shape.ToImage(imageStream, op);
			/// </code>
			/// </example>
			 virtual void 		ToImage(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> options)=0;
			/// <summary>
			/// Returns the bitmap object of the shape .
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// ImageOrPrintOptions op = new ImageOrPrintOptions();
			/// System.Drawing.Bitmap btm = shape.ToImage(op);
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Bitmap> 		ToImage(intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> options)=0;
			/// <summary>
			/// Indicates whether shape is relative to original picture size.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.RelativeToOriginalPictureSize)
			///     shape.RelativeToOriginalPictureSize = false;
			/// </code>
			/// </example>
			 virtual bool GetRelativeToOriginalPictureSize()=0;
			/// <summary>
			/// Indicates whether shape is relative to original picture size.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.RelativeToOriginalPictureSize)
			///     shape.RelativeToOriginalPictureSize = false;
			/// </code>
			/// </example>
			 virtual void SetRelativeToOriginalPictureSize(bool value)=0;
			/// <summary>
			/// Gets or sets the worksheet range linked to the control's value.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LinkedCell.Equals("$B$6"))
			///     shape.LinkedCell = "A1";
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetLinkedCell()=0;
			/// <summary>
			/// Gets or sets the worksheet range linked to the control's value.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.LinkedCell.Equals("$B$6"))
			///     shape.LinkedCell = "A1";
			/// </code>
			/// </example>
			 virtual void SetLinkedCell(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets or sets the worksheet range used to fill the specified combo box. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.InputRange.Equals("$B$6:$B10"))
			///     shape.InputRange = "$A$1:$A$5";
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetInputRange()=0;
			/// <summary>
			/// Gets or sets the worksheet range used to fill the specified combo box. 
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.InputRange.Equals("$B$6:$B10"))
			///     shape.InputRange = "$A$1:$A$5";
			/// </code>
			/// </example>
			 virtual void SetInputRange(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the range linked to the control's value.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <returns>The range linked to the control's value.</returns>
			/// <example><code>
			/// 
			/// [C#]
			/// //You may get results like '$A$1'
			/// string link = shape.GetLinkedCell(false, false);
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetLinkedCell(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Sets the range linked to the control's value.
			/// </summary>
			/// <param name="formula" >The range linked to the control's value.</param>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <example><code>
			/// 
			/// [C#]
			/// //After executing the code below, a ScrollBar object is created in the generated file. As you drag the slider, the value is displayed in cell A12.
			/// 
			/// //ActiveX Controls
			/// //Aspose.Cells.Drawing.Shape scrollBar = book.Worksheets[0].Shapes.AddActiveXControl( Aspose.Cells.Drawing.ActiveXControls.ControlType.ScrollBar,2, 0, 2, 0, 30, 130);
			/// 
			/// //Form Controls
			/// Aspose.Cells.Drawing.Shape scrollBar = book.Worksheets[0].Shapes.AddScrollBar(2, 0, 2, 0, 130, 30);
			/// 
			/// //Sets the range linked to the control's value.
			/// scrollBar.SetLinkedCell("$A$12", false, true);
			/// 
			/// </code>
			/// </example>
			 virtual void SetLinkedCell(intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets the range used to fill the control.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <returns>The range used to fill the control.</returns>
			/// <example><code>
			/// 
			/// [C#]
			/// string range = shape.GetInputRange(false, true);
			/// //If successful, a value like "$A$1:$A$3" will be returned
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetInputRange(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			///  Sets the range used to fill the control.
			///  </summary>
			/// <param name="formula" >The range used to fill the control.</param>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <example>
			///  <code>
			///  
			///  [C#]
			///  //After executing the code below, a ListBox object is created in the generated file. When the selected option is clicked, the selected value is displayed in cell A12.
			/// 
			///  for (int i = 0; i 10; ++i)
			///  {
			///      Cell cell = book.Worksheets[0].Cells[i, 0];
			///      cell.Value = i + 1;
			///  }
			///     
			///  //Create a ListBox object
			///  
			///  //ActiveX Controls
			///  //Aspose.Cells.Drawing.Shape listBox = book.Worksheets[0].Shapes.AddActiveXControl( Aspose.Cells.Drawing.ActiveXControls.ControlType.ListBox,2, 0, 2, 0, 130, 130);
			///  
			///  //Form Controls
			///  Aspose.Cells.Drawing.Shape listBox = book.Worksheets[0].Shapes.AddListBox(2, 0, 2, 0, 130, 130);
			///  
			///  //Sets the range used to fill the control.
			///  listBox.SetInputRange("$A$1:$A$6", false, false);
			///  
			///  //Sets the range linked to the control's value.
			///  listBox.SetLinkedCell("$A$12", false, true);
			///  
			///  </code>
			/// 
			///  </example>
			 virtual void SetInputRange(intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Update the selected value by the value of the linked cell.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Cell cell = null;
			/// for (int i = 0; i 10; ++i)
			/// {
			///     cell = book.Worksheets[0].Cells[i, 0];
			///     cell.Value = i + 1;
			/// }
			///    
			/// //Create a ListBox object
			/// 
			/// //ActiveX Controls
			/// //Aspose.Cells.Drawing.Shape listBox = book.Worksheets[0].Shapes.AddActiveXControl( Aspose.Cells.Drawing.ActiveXControls.ControlType.ListBox,2, 0, 2, 0, 130, 130);
			/// 
			/// //Form Controls
			/// Aspose.Cells.Drawing.Shape listBox = book.Worksheets[0].Shapes.AddListBox(2, 0, 2, 0, 130, 130);
			/// 
			/// //Sets the range used to fill the control.
			/// listBox.SetInputRange("$A$1:$A$6", false, false);
			/// 
			/// //Sets the range linked to the control's value.
			/// listBox.SetLinkedCell("$A$12", false, true);
			/// 
			/// ListBox listbx = (ListBox)listBox;
			/// 
			/// //Set the value of cell A12
			/// cell = book.Worksheets[0].Cells[11, 0];
			/// cell.Value = 3;
			/// 
			/// //Update the selected value by the value of the linked cell.
			/// listBox.UpdateSelectedValue();
			/// 
			/// //-1 default, no option selected
			/// if(listbx.IsSelected(2))
			/// {
			///     //Option 3 of the ListBox is selected
			/// }
			/// 
			/// //Change the value of a linked cell
			/// cell.Value = 4;
			/// 
			/// //Update the selected value by the value of the linked cell.
			/// listBox.UpdateSelectedValue();
			/// if(listbx.IsSelected(3))
			/// {
			///     //Option 4 of the ListBox is selected
			/// }
			/// 
			/// </code>
			/// </example>
			 virtual void UpdateSelectedValue()=0;
			/// <summary>
			/// Gets and sets the preset text shape type.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextShapeType == Aspose.Cells.Drawing.AutoShapeType.Unknown)
			///     shape.TextShapeType = Aspose.Cells.Drawing.AutoShapeType.Rectangle;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Drawing::AutoShapeType GetTextShapeType()=0;
			/// <summary>
			/// Gets and sets the preset text shape type.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextShapeType == Aspose.Cells.Drawing.AutoShapeType.Unknown)
			///     shape.TextShapeType = Aspose.Cells.Drawing.AutoShapeType.Rectangle;
			/// </code>
			/// </example>
			 virtual void SetTextShapeType(Aspose::Cells::Drawing::AutoShapeType value)=0;
			/// <summary>
			/// Represents the font of shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Font font = shape.Font;
			/// font.Name = "Arial";
			/// font.Size = 12;
			/// font.Color = Color.Red;
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// Represents the font of shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.Font font = shape.Font;
			/// font.Name = "Arial";
			/// font.Size = 12;
			/// font.Color = Color.Red;
			/// </code>
			/// </example>
			 virtual void 		SetIFont(intrusive_ptr<Aspose::Cells::IFont> value)=0;
			/// <summary>
			/// Recalculate the text area
			/// </summary>
			/// <returns>Text's Size in an array(width and height).</returns>
			/// <example><code>
			/// 
			/// [C#]
			/// //The size of the text area is:w=size[0],h=size[1]
			/// int[] size = shape.CalculateTextSize();
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Int32>> CalculateTextSize()=0;
			/// <summary>
			/// Represents the string in this TextBox object.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.Text == null)
			///     shape.Text = "This is a test.";
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// Represents the string in this TextBox object.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.Text == null)
			///     shape.Text = "This is a test.";
			/// </code>
			/// </example>
			 virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Whether or not the text is rich text.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.IsRichText)
			///     Console.WriteLine("The text is rich text.");
			/// </code>
			/// </example>
			 virtual bool IsRichText()=0;
			/// <summary>
			/// Gets and sets the html string which contains data and some formats in this textbox.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// string html = shape.HtmlText;
			/// if(html == null || html == "")
			/// {
			///     shape.HtmlText = "Font Style='FONT-FAMILY: Calibri;FONT-SIZE: 11pt;COLOR: #0000ff;TEXT-ALIGN: left;'This is a btest/b./Font";
			/// }
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetHtmlText()=0;
			/// <summary>
			/// Gets and sets the html string which contains data and some formats in this textbox.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// string html = shape.HtmlText;
			/// if(html == null || html == "")
			/// {
			///     shape.HtmlText = "Font Style='FONT-FAMILY: Calibri;FONT-SIZE: 11pt;COLOR: #0000ff;TEXT-ALIGN: left;'This is a btest/b./Font";
			/// }
			/// </code>
			/// </example>
			 virtual void SetHtmlText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Formats some characters with the font setting.
			/// </summary>
			/// <param name="startIndex" >The start index.</param>
			/// <param name="length" >The length.</param>
			/// <param name="font" >The font setting.</param>
			/// <param name="flag" >The flag of the font setting.</param>
			 virtual void 		FormatCharactersByIFont(Aspose::Cells::Systems::Int32 startIndex , Aspose::Cells::Systems::Int32 length , intrusive_ptr<Aspose::Cells::IFont> font , intrusive_ptr<Aspose::Cells::IStyleFlag> flag)=0;
			/// <summary>
			/// Formats some characters with the font setting.
			/// </summary>
			/// <param name="startIndex" >The start index.</param>
			/// <param name="length" >The length.</param>
			/// <param name="font" >The font setting.</param>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use Shape.FormatCharacters(int startIndex, int length, Font font, StyleFlag flag) method.
			/// This property will be removed 12 months later since March 2016. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void 		FormatCharactersByIFont(Aspose::Cells::Systems::Int32 startIndex , Aspose::Cells::Systems::Int32 length , intrusive_ptr<Aspose::Cells::IFont> font)=0;
			/// <summary>
			/// Returns a Characters object that represents a range of characters within the text.
			/// </summary>
			/// <param name="startIndex" >The index of the start of the character.</param>
			/// <param name="length" >The number of characters.</param>
			/// <returns>Characters object.</returns>
			/// <remarks>This method only works on shape with title.</remarks>
			/// <example><code>
			/// 
			/// [C#]
			/// Aspose.Cells.FontSetting fontSetting = shape.Characters(0, 4);
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::IFontSetting> 		GetCharacters(Aspose::Cells::Systems::Int32 startIndex , Aspose::Cells::Systems::Int32 length)=0;
			/// <summary>
			/// Returns all Characters objects 
			/// that represents a range of characters within the text .
			/// </summary>
			/// <returns>All Characters objects </returns>
			/// <example><code>
			/// 
			/// [C#]
			/// ArrayList list = shape.GetCharacters();
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> GetCharacters()=0;
			/// <summary>
			/// Gets and sets the text vertical overflow type of the shape which contains text.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextVerticalOverflow == Aspose.Cells.Drawing.TextOverflowType.Clip)
			///     shape.TextVerticalOverflow = Aspose.Cells.Drawing.TextOverflowType.Overflow;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Drawing::TextOverflowType GetTextVerticalOverflow()=0;
			/// <summary>
			/// Gets and sets the text vertical overflow type of the shape which contains text.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextVerticalOverflow == Aspose.Cells.Drawing.TextOverflowType.Clip)
			///     shape.TextVerticalOverflow = Aspose.Cells.Drawing.TextOverflowType.Overflow;
			/// </code>
			/// </example>
			 virtual void SetTextVerticalOverflow(Aspose::Cells::Drawing::TextOverflowType value)=0;
			/// <summary>
			/// Gets and sets the text horizontal overflow type of the shape which contains text.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextHorizontalOverflow == Aspose.Cells.Drawing.TextOverflowType.Clip)
			///     shape.TextHorizontalOverflow = Aspose.Cells.Drawing.TextOverflowType.Overflow;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Drawing::TextOverflowType GetTextHorizontalOverflow()=0;
			/// <summary>
			/// Gets and sets the text horizontal overflow type of the shape which contains text.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextHorizontalOverflow == Aspose.Cells.Drawing.TextOverflowType.Clip)
			///     shape.TextHorizontalOverflow = Aspose.Cells.Drawing.TextOverflowType.Overflow;
			/// </code>
			/// </example>
			 virtual void SetTextHorizontalOverflow(Aspose::Cells::Drawing::TextOverflowType value)=0;
			/// <summary>
			///  Gets and sets the text wrapped type of the shape which contains text.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.IsTextWrapped)
			///     shape.IsTextWrapped = !shape.IsTextWrapped;
			/// </code>
			/// </example>
			 virtual bool IsTextWrapped()=0;
			/// <summary>
			///  Gets and sets the text wrapped type of the shape which contains text.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.IsTextWrapped)
			///     shape.IsTextWrapped = !shape.IsTextWrapped;
			/// </code>
			/// </example>
			 virtual void SetTextWrapped(bool value)=0;
			/// <summary>
			/// Gets and sets the text orientation type of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextOrientationType == Aspose.Cells.TextOrientationType.NoRotation)
			///     shape.TextOrientationType = Aspose.Cells.TextOrientationType.TopToBottom;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::TextOrientationType GetTextOrientationType()=0;
			/// <summary>
			/// Gets and sets the text orientation type of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextOrientationType == Aspose.Cells.TextOrientationType.NoRotation)
			///     shape.TextOrientationType = Aspose.Cells.TextOrientationType.TopToBottom;
			/// </code>
			/// </example>
			 virtual void SetTextOrientationType(Aspose::Cells::TextOrientationType value)=0;
			/// <summary>
			/// Gets and sets the text horizontal alignment type of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextHorizontalAlignment == Aspose.Cells.TextAlignmentType.Bottom)
			///     shape.TextHorizontalAlignment = Aspose.Cells.TextAlignmentType.Center;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::TextAlignmentType GetTextHorizontalAlignment()=0;
			/// <summary>
			/// Gets and sets the text horizontal alignment type of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextHorizontalAlignment == Aspose.Cells.TextAlignmentType.Bottom)
			///     shape.TextHorizontalAlignment = Aspose.Cells.TextAlignmentType.Center;
			/// </code>
			/// </example>
			 virtual void SetTextHorizontalAlignment(Aspose::Cells::TextAlignmentType value)=0;
			/// <summary>
			/// Gets and sets the text vertical alignment type of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextVerticalAlignment == Aspose.Cells.TextAlignmentType.Bottom)
			///     shape.TextVerticalAlignment = Aspose.Cells.TextAlignmentType.Center;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::TextAlignmentType GetTextVerticalAlignment()=0;
			/// <summary>
			/// Gets and sets the text vertical alignment type of the shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextVerticalAlignment == Aspose.Cells.TextAlignmentType.Bottom)
			///     shape.TextVerticalAlignment = Aspose.Cells.TextAlignmentType.Center;
			/// </code>
			/// </example>
			 virtual void SetTextVerticalAlignment(Aspose::Cells::TextAlignmentType value)=0;
			/// <summary>
			///  Gets/Sets the direction of the text flow for this object.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextDirection == Aspose.Cells.TextDirectionType.Context)
			///     shape.TextDirection = Aspose.Cells.TextDirectionType.LeftToRight;
			/// </code>
			/// </example>
			 virtual Aspose::Cells::TextDirectionType GetTextDirection()=0;
			/// <summary>
			///  Gets/Sets the direction of the text flow for this object.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.TextDirection == Aspose.Cells.TextDirectionType.Context)
			///     shape.TextDirection = Aspose.Cells.TextDirectionType.LeftToRight;
			/// </code>
			/// </example>
			 virtual void SetTextDirection(Aspose::Cells::TextDirectionType value)=0;
			/// <summary>
			/// Gets the data of control.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// if(shape.ControlData == null)
			///     Console.WriteLine("No data."); 
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetControlData()=0;
			/// <summary>
			/// Remove activeX control.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// shape.RemoveActiveXControl();
			/// </code>
			/// </example>
			 virtual void RemoveActiveXControl()=0;
			/// <summary>
			/// Gets the paths of a custom geometric shape.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //Returns non-null if there is a path to the custom geometry
			/// if(shape.Paths == null)
			///     Console.WriteLine("No custom geometry path.");
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapePathCollection> 		GetIShapePaths()=0;
			/// <summary>
			/// Returns whether the shape is same.
			/// </summary>
			/// <param name="obj" />
			/// 
			/// <returns/>
			/// 
			/// <example><code>
			/// 
			/// [C#]
			/// if (shape.IsSameSetting(shape))
			///     Console.WriteLine("Two objects the same.");
			/// </code>
			/// </example>
			  virtual bool IsSameSetting(intrusive_ptr<Aspose::Cells::Systems::Object> obj)=0;
			/// <summary>
			/// Gets and sets create id for this shape.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Guid> GetCreateId()=0;
			/// <summary>
			/// Gets and sets create id for this shape.
			/// </summary>
			 virtual void SetCreateId(intrusive_ptr<Aspose::Cells::Systems::Guid> value)=0;
			/// <summary>
			/// Get the actual position and size of the shape (after applying rotation, flip, etc.)
			/// </summary>
			/// <returns>Return the position and size in the order of x, y, w, h</returns>
			/// <remarks>Note:The interface is not fully functional, especially the location information is not correct.It is recommended not to use this interface until the function is complete.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Single>> GetActualBox()=0;

	};
}
}
}
