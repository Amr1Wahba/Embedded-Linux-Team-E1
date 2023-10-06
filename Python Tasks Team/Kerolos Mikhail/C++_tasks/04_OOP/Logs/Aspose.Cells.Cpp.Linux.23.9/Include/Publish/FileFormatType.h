#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents the file format types.
			/// </summary>
	enum FileFormatType 

	{

			/// <summary>
			/// Comma-Separated Values(CSV) text file.
			/// </summary>
			FileFormatType_Csv = 1 ,
			/// <summary>
			/// Office Open XML SpreadsheetML file (macro-free).
			/// </summary>
			FileFormatType_Xlsx = 6 ,
			/// <summary>
			/// Office Open XML SpreadsheetML Macro-Enabled file.
			/// </summary>
			FileFormatType_Xlsm = 7 ,
			/// <summary>
			/// Office Open XML SpreadsheetML Template (macro-free).
			/// </summary>
			FileFormatType_Xltx = 8 ,
			/// <summary>
			/// Office Open XML SpreadsheetML Macro-Enabled Template.
			/// </summary>
			FileFormatType_Xltm = 9 ,
			/// <summary>
			/// Office Open XML SpreadsheetML addinMacro-Enabled file.
			/// </summary>
			FileFormatType_Xlam = 10 ,
			/// <summary>
			/// Tab-Separated Values(TSV) text file.
			/// </summary>
			FileFormatType_Tsv = 11 ,
			/// <summary>
			/// Tab-Separated Values(TSV) text file, same with <see cref="Tsv" />
			/// .
			///  </summary>
			FileFormatType_TabDelimited = Aspose::Cells::FileFormatType_Tsv ,
			/// <summary>
			/// HTML format.
			/// </summary>
			FileFormatType_Html = 12 ,
			/// <summary>
			/// MHTML (Web archive) format.
			/// </summary>
			FileFormatType_MHtml = 17 ,
			/// <summary>
			/// Open Document Sheet(ODS) file.
			/// </summary>
			FileFormatType_Ods = 14 ,
			/// <summary>
			/// Excel97-2003 spreadsheet file.
			/// </summary>
			FileFormatType_Excel97To2003 = 5 ,
			/// <summary>
			/// Excel 2003 XML Data file.
			/// </summary>
			FileFormatType_SpreadsheetML = 15 ,
			/// <summary>
			/// The Excel Binary File Format (.xlsb)
			/// </summary>
			FileFormatType_Xlsb = 16 ,
			/// <summary>
			/// Represents unrecognized format, cannot be loaded. 
			/// </summary>
			FileFormatType_Unknown = 255 ,
			/// <summary>
			/// PDF (Adobe Portable Document) format.
			/// </summary>
			FileFormatType_Pdf = 13 ,
			/// <summary>
			/// XPS (XML Paper Specification) format.
			/// </summary>
			FileFormatType_Xps = 20 ,
			/// <summary>
			/// Represents a TIFF file.
			/// </summary>
			FileFormatType_Tiff = 21 ,
			/// <summary>
			/// SVG file.
			/// </summary>
			FileFormatType_Svg = 28 ,
			/// <summary>
			/// Represents an Excel95 xls file.
			/// </summary>
			FileFormatType_Excel95 = 22 ,
			/// <summary>
			/// Represents an Excel4.0 xls file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// </remarks>
			FileFormatType_Excel4 = 23 ,
			/// <summary>
			/// Represents an Excel3.0 xls file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// </remarks>
			FileFormatType_Excel3 = 24 ,
			/// <summary>
			/// Represents an Excel2.1 xls file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// </remarks>
			FileFormatType_Excel2 = 25 ,
			/// <summary>
			/// Represents a pptx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Pptx = 26 ,
			/// <summary>
			/// Represents a docx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Docx = 27 ,
			/// <summary>
			/// Data Interchange Format.
			/// </summary>
			FileFormatType_Dif = 30 ,
			/// <summary>
			/// Represents a doc file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Doc = 31 ,
			/// <summary>
			/// Represents a ppt file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Ppt = 32 ,
			/// <summary>
			/// Represents a email file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_MapiMessage = 33 ,
			/// <summary>
			/// Represents the MS Equation 3.0 object.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_MsEquation = 34 ,
			/// <summary>
			/// Represents the embedded native object.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Ole10Native = 35 ,
			/// <summary>
			/// Represents MS Visio VSD binary format.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Vsd = 36 ,
			/// <summary>
			/// Represents MS Visio 2013 VSDX file format.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Vsdx = 37 ,
			/// <summary>
			/// Represents a docm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Docm = 38 ,
			/// <summary>
			/// Represents a dotx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Dotx = 39 ,
			/// <summary>
			/// Represents a dotm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Dotm = 40 ,
			/// <summary>
			/// Represents a pptm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Pptm = 41 ,
			/// <summary>
			/// Represents a Potx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Potx = 42 ,
			/// <summary>
			/// Represents a Potm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Potm = 43 ,
			/// <summary>
			/// Represents a ppsx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Ppsx = 44 ,
			/// <summary>
			/// Represents a ppsm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Ppsm = 45 ,
			/// <summary>
			/// Represents office open xml file(such as xlsx, docx,pptx, etc).
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// If the office open xml file is encrypted, it could not be detected as xlsx ,docx, pptx,etc.
			/// </remarks>
			FileFormatType_Ooxml = 46 ,
			/// <summary>
			/// Represents an ODT file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Odt = 47 ,
			/// <summary>
			/// Represents a ODP file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Odp = 48 ,
			/// <summary>
			/// Represents an ODF file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Odf = 49 ,
			/// <summary>
			/// Represents an ODG file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Odg = 50 ,
			/// <summary>
			/// Represents a simple xml file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Xml = 51 ,
			/// <summary>
			/// Excel97-2003 spreadsheet template.
			/// </summary>
			FileFormatType_Xlt = 52 ,
			/// <summary>
			/// Represents an OTT file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Ott = 53 ,
			/// <summary>
			/// Represents a BMP file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Bmp = 54 ,
			/// <summary>
			/// Represents an ots file.
			/// </summary>
			FileFormatType_Ots = 55 ,
			/// <summary>
			/// Represents Numbers 9.0 file format by Apple Inc.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use <see cref="Numbers09" />
			///  property.
			/// This property will be removed 6 months later since June 2023. 
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </remarks>
			FileFormatType_Numbers = 56 ,
			/// <summary>
			/// Represents Numbers 9.0 file format by Apple Inc.
			/// </summary>
			FileFormatType_Numbers09 = 56 ,
			/// <summary>
			/// Represents markdown document.
			/// </summary>
			FileFormatType_Markdown = 57 ,
			/// <summary>
			/// Represents embedded graph chart.
			/// </summary>
			FileFormatType_GraphChart = 58 ,
			/// <summary>
			/// Represents OpenDocument Flat XML Spreadsheet (.fods) file format.
			/// </summary>
			FileFormatType_Fods = 59 ,
			/// <summary>
			/// Represents StarOffice Calc Spreadsheet (.sxc) file format.
			/// </summary>
			FileFormatType_Sxc = 60 ,
			/// <summary>
			/// Represents a OTP file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported.
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Otp = 61 ,
			/// <summary>
			///  Represents Numbers 3.5 file format since 2014 by Apple Inc
			/// </summary>
			FileFormatType_Numbers35 = 62 ,
			/// <summary>
			/// Windows Enhanced Metafile.
			/// </summary>
			FileFormatType_Emf = 0x102 ,
			/// <summary>
			/// Windows Metafile. 
			/// </summary>
			FileFormatType_Wmf = 0x103 ,
			/// <summary>
			/// JPEG JFIF.
			/// </summary>
			FileFormatType_Jpg = 0x105 ,
			/// <summary>
			/// Portable Network Graphics.
			/// </summary>
			FileFormatType_Png = 0x106 ,
			/// <summary>
			/// Gif
			/// </summary>
			FileFormatType_Gif = 0x142 ,
			/// <summary>
			/// Json
			/// </summary>
			FileFormatType_Json = 0x201 ,
			/// <summary>
			/// Sql
			/// </summary>
			FileFormatType_SqlScript = 0x202 ,
			/// <summary>
			/// Rrepesents XHtml file.
			/// </summary>
			FileFormatType_XHtml = 0x303 ,
			/// <summary>
			///  Rrepesents One Note file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_OneNote = 0x304 ,
			/// <summary>
			///  /// <summary>
			///  Rrepesents Microsoft Cabinet file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			/// </summary>
			FileFormatType_MicrosoftCabinet = 0x305 ,
			/// <summary>
			/// 
			/// </summary>
			FileFormatType_Rtf = 0x306 ,
			/// <summary>
			/// EPUB
			/// </summary>
			FileFormatType_Epub = 0x307 ,
			/// <summary>
			///  Rrepesents GZip file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_GZip = 0x8B1F ,
	};


}

}
