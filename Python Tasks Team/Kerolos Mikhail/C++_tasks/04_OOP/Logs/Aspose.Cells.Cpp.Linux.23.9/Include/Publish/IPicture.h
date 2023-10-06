#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/String.h"
#include "ImageType.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IPicture;
			enum ImageType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class ICopyOptions;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents a single picture in a spreadsheet.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// //Adding a new worksheet to the Workbook object
			/// int sheetIndex = workbook.Worksheets.Add();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Worksheet worksheet = workbook.Worksheets[sheetIndex];
			/// //Adding a picture at the location of a cell whose row and column indices
			/// //are 5 in the worksheet. It is "F6" cell
			/// worksheet.Pictures.Add(5, 5, "C:\\image.gif");
			/// //Saving the Excel file
			/// workbook.Save(saveFileDialog1.FileName, SaveFormat.Excel97To2003);
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// 'Adding a new worksheet to the Workbook object
			/// Dim sheetIndex As Integer = workbook.Worksheets.Add()
			/// 'Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Dim worksheet As Worksheet = workbook.Worksheets(sheetIndex)
			/// 'Adding a picture at the location of a cell whose row and column indices
			/// 'are 5 in the worksheet. It is "F6" cell
			/// worksheet.Pictures.Add(5, 5, "C:\image.gif")
			/// 'Saving the Excel file
			/// workbook.Save("C:\book1.xls", SaveFormat.Excel97To2003)
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IPicture : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Copy the picture.
			/// </summary>
			/// <param name="source" >The source picture.</param>
			/// <param name="options" >The copy options.</param>
			 virtual void 		Copy(intrusive_ptr<Aspose::Cells::Drawing::IPicture> source , intrusive_ptr<Aspose::Cells::ICopyOptions> options)=0;
			/// <summary>
			/// Moves the picture to a specified location.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			 virtual void Move(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn)=0;
			/// <summary>
			/// Gets the original height of the picture.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetOriginalHeight()=0;
			/// <summary>
			/// Gets the original width of the picture.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetOriginalWidth()=0;
			/// <summary>
			/// Represents the <see cref="System.Drawing.Color" />
			///  of the border line of a picture.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetBorderLineColor()=0;
			/// <summary>
			/// Represents the <see cref="System.Drawing.Color" />
			///  of the border line of a picture.
			/// </summary>
			 virtual void SetBorderLineColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets or sets the weight of the border line of a picture in units of pt.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetBorderWeight()=0;
			/// <summary>
			/// Gets or sets the weight of the border line of a picture in units of pt.
			/// </summary>
			 virtual void SetBorderWeight(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets the data of the picture.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetData()=0;
			/// <summary>
			/// Gets the data of the picture.
			/// </summary>
			 virtual void SetData(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> value)=0;
			/// <summary>
			/// Gets or sets the path and name of the source file for the linked image. 
			/// </summary>
			/// <remarks>
			/// The default value is an empty string.
			/// If SourceFullName is not an empty string, the image is linked.
			/// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSourceFullName()=0;
			/// <summary>
			/// Gets or sets the path and name of the source file for the linked image. 
			/// </summary>
			/// <remarks>
			/// The default value is an empty string.
			/// If SourceFullName is not an empty string, the image is linked.
			/// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
			/// </remarks>
			 virtual void SetSourceFullName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the data of the formula.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula()=0;
			/// <summary>
			/// Gets and sets the data of the formula.
			/// </summary>
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// True indicates that the size of the ole object will be auto changed as the size of snapshop of the embedded content
			/// when the ole object is activated.
			/// </summary>
			 virtual bool IsAutoSize()=0;
			/// <summary>
			/// True indicates that the size of the ole object will be auto changed as the size of snapshop of the embedded content
			/// when the ole object is activated.
			/// </summary>
			 virtual void SetAutoSize(bool value)=0;
			/// <summary>
			/// Returns true if the picture is linked to a file.
			/// </summary>
			 virtual bool IsLink()=0;
			/// <summary>
			/// Returns true if the picture is linked to a file.
			/// </summary>
			 virtual void SetLink(bool value)=0;
			/// <summary>
			/// Gets or sets whether dynamic data exchange
			/// </summary>
			 virtual bool IsDynamicDataExchange()=0;
			/// <summary>
			/// Gets or sets whether dynamic data exchange
			/// </summary>
			 virtual void SetDynamicDataExchange(bool value)=0;
			/// <summary>
			/// True if the specified object is displayed as an icon 
			/// and the image will not be auto changed.
			/// </summary>
			 virtual bool GetDisplayAsIcon()=0;
			/// <summary>
			/// True if the specified object is displayed as an icon 
			/// and the image will not be auto changed.
			/// </summary>
			 virtual void SetDisplayAsIcon(bool value)=0;
			/// <summary>
			/// Gets the image format of the picture.
			/// </summary>
			 virtual Aspose::Cells::Drawing::ImageType GetImageType()=0;
			/// <summary>
			/// Gets the original height of picture, in unit of centimeters.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetOriginalHeightCM()=0;
			/// <summary>
			/// Gets the original width of picture, in unit of centimeters.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetOriginalWidthCM()=0;
			/// <summary>
			/// Gets the original height of picture, in unit of inches.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetOriginalHeightInch()=0;
			/// <summary>
			/// Gets the original width of picture, in unit of inches.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetOriginalWidthInch()=0;
			/// <summary>
			/// Returns whether the shape is same.
			/// </summary>
			/// <param name="obj" />
			/// 
			/// <returns/>
			/// 
			  virtual bool IsSameSetting(intrusive_ptr<Aspose::Cells::Systems::Object> obj)=0;

	};
}
}
}
