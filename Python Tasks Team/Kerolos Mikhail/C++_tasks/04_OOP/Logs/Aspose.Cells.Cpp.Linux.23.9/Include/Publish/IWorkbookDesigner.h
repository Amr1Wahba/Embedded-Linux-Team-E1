#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"

namespace Aspose {
	namespace Cells {
		class IWorkbook;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents a designer spreadsheet.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Create a connection object, specify the provider info and set the data source.
			/// OleDbConnection con = new OleDbConnection("provider=microsoft.jet.oledb.4.0;data source=d:\\test\\Northwind.mdb");
			/// //Open the connection object.
			/// con.Open();
			/// //Create a command object and specify the SQL query.
			/// OleDbCommand cmd = new OleDbCommand("Select * from [Order Details]", con);
			/// //Create a data adapter object.
			/// OleDbDataAdapter da = new OleDbDataAdapter();
			/// //Specify the command.
			/// da.SelectCommand = cmd;
			/// //Create a dataset object.
			/// DataSet ds = new DataSet();
			/// //Fill the dataset with the table records.
			/// da.Fill(ds, "Order Details");
			/// //Create a datatable with respect to dataset table.
			/// DataTable dt = ds.Tables["Order Details"];
			/// //Create WorkbookDesigner object.
			/// WorkbookDesigner wd = new WorkbookDesigner();
			/// //Open the template file (which contains smart markers).
			/// wd.Open("D:\\test\\SmartMarker_Designer.xls");
			/// //Set the datatable as the data source.
			/// wd.SetDataSource(dt);
			/// //Process the smart markers to fill the data into the worksheets.
			/// wd.Process(true);
			/// //Save the excel file.
			/// wd.Workbook.Save("D:\\test\\outSmartMarker_Designer.xls");
			/// 
			/// [Visual Basic]
			/// 
			/// 'Create a connection object, specify the provider info and set the data source.
			/// Dim con As OleDbConnection = New OleDbConnection("provider=microsoft.jet.oledb.4.0;data source=d:\test\Northwind.mdb")
			/// 'Open the connection object.
			/// con.Open()
			/// 'Create a command object and specify the SQL query.
			/// Dim cmd As OleDbCommand = New OleDbCommand("Select * from [Order Details]", con)
			/// 'Create a data adapter object.
			/// Dim da As OleDbDataAdapter = New OleDbDataAdapter()
			/// 'Specify the command.
			/// da.SelectCommand = cmd
			/// 'Create a dataset object.
			/// Dim ds As DataSet = New DataSet()
			/// 'Fill the dataset with the table records.
			/// da.Fill(ds, "Order Details")
			/// 'Create a datatable with respect to dataset table.
			/// Dim dt As DataTable = ds.Tables("Order Details")
			/// 'Create WorkbookDesigner object.
			/// Dim wd As WorkbookDesigner = New WorkbookDesigner()
			/// 'Open the template file (which contains smart markers).
			/// wd.Open("D:\test\SmartMarker_Designer.xls")
			/// 'Set the datatable as the data source.
			/// wd.SetDataSource(dt)
			/// 'Process the smart markers to fill the data into the worksheets.
			/// wd.Process(True)
			/// 'Save the excel file.
			/// wd.Workbook.Save("D:\test\outSmartMarker_Designer.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IWorkbookDesigner : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets and sets the <see cref="Workbook" />
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IWorkbook> 		GetIWorkbook()=0;
			/// <summary>
			/// Gets and sets the <see cref="Workbook" />
			///  object.
			/// </summary>
			 virtual void 		SetIWorkbook(intrusive_ptr<Aspose::Cells::IWorkbook> value)=0;
			/// <summary>
			/// Indicates whether repeating formulas with subtotal row.
			/// </summary>
			 virtual bool GetRepeatFormulasWithSubtotal()=0;
			/// <summary>
			/// Indicates whether repeating formulas with subtotal row.
			/// </summary>
			 virtual void SetRepeatFormulasWithSubtotal(bool value)=0;
			/// <summary>
			/// Clears all data sources.
			/// </summary>
			 virtual void ClearDataSource()=0;
			/// <summary>
			/// Sets data binding to a variable.
			/// </summary>
			/// <param name="variable" >Variable name created using smart marker.</param>
			/// <param name="data" >Source data.</param>
			 virtual void SetDataSource(intrusive_ptr<Aspose::Cells::Systems::String> variable , intrusive_ptr<Aspose::Cells::Systems::Object> data)=0;
			/// <summary>
			/// If TRUE, Null will be inserted if the value is "";
			/// </summary>
			 virtual bool GetUpdateEmptyStringAsNull()=0;
			/// <summary>
			/// If TRUE, Null will be inserted if the value is "";
			/// </summary>
			 virtual void SetUpdateEmptyStringAsNull(bool value)=0;
			/// <summary>
			/// Indicates if references in other worksheets will be updated.
			/// </summary>
			 virtual bool GetUpdateReference()=0;
			/// <summary>
			/// Indicates if references in other worksheets will be updated.
			/// </summary>
			 virtual void SetUpdateReference(bool value)=0;
			/// <summary>
			/// Indicates whether formulas should be calculated.
			/// </summary>
			 virtual bool GetCalculateFormula()=0;
			/// <summary>
			/// Indicates whether formulas should be calculated.
			/// </summary>
			 virtual void SetCalculateFormula(bool value)=0;
			/// <summary>
			/// Indicates wether processing the smart marker line by line.
			///  </summary>
			/// <remarks>
			///  The default value is false.
			///  If False, the template file must contain a range which is named as "_CellsSmartMarkers".
			///  </remarks>
			 virtual bool GetLineByLine()=0;
			/// <summary>
			/// Indicates wether processing the smart marker line by line.
			///  </summary>
			/// <remarks>
			///  The default value is false.
			///  If False, the template file must contain a range which is named as "_CellsSmartMarkers".
			///  </remarks>
			 virtual void SetLineByLine(bool value)=0;
			/// <summary>
			/// Processes the smart markers and populates the data source values.
			/// </summary>
			 virtual void Process()=0;
			/// <summary>
			/// Processes the smart markers and populates the data source values.
			/// </summary>
			/// <param name="isPreserved" >True if the unrecognized smart marker is preserved.</param>
			 virtual void Process(bool isPreserved)=0;
			/// <summary>
			/// Processes the smart markers and populates the data source values.
			/// </summary>
			/// <param name="sheetIndex" >Worksheet index.</param>
			/// <param name="isPreserved" >True if the unrecognized smart marker is preserved.</param>
			/// <remarks>This method works on worksheet level.</remarks>
			 virtual void Process(Aspose::Cells::Systems::Int32 sheetIndex , bool isPreserved)=0;
			/// <summary>
			/// Returns a collection of smart markers in a spreadsheet.
			/// </summary>
			/// <returns>A collection of smart markers</returns>
			/// <remarks>A string array is created on every call. The array is sorted and duplicated values are removed.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::String*>> GetSmartMarkers()=0;

	};
}
}
