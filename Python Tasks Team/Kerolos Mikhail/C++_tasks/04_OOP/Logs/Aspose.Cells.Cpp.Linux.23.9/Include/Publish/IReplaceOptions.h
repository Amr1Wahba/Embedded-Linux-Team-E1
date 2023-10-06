#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"

namespace Aspose {
	namespace Cells {
		class IFontSetting;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represent the replace options.
			/// </summary>
	class ASPOSE_CELLS_API IReplaceOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates if the searched string is case sensitive.
			/// </summary>
			 virtual bool GetCaseSensitive()=0;
			/// <summary>
			/// Indicates if the searched string is case sensitive.
			/// </summary>
			 virtual void SetCaseSensitive(bool value)=0;
			/// <summary>
			/// Indicates whether to match entire cells contents
			/// </summary>
			 virtual bool GetMatchEntireCellContents()=0;
			/// <summary>
			/// Indicates whether to match entire cells contents
			/// </summary>
			 virtual void SetMatchEntireCellContents(bool value)=0;
			/// <summary>
			/// Indicates whether the searched key is regex. If true then the searched key will be taken as regex.
			/// </summary>
			 virtual bool GetRegexKey()=0;
			/// <summary>
			/// Indicates whether the searched key is regex. If true then the searched key will be taken as regex.
			/// </summary>
			 virtual void SetRegexKey(bool value)=0;
			/// <summary>
			/// The rich formatted settings for the replaced text. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IFontSetting*>> 		GetIFontSettings()=0;
			/// <summary>
			/// The rich formatted settings for the replaced text. 
			/// </summary>
			 virtual void 		SetIFontSettings(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IFontSetting*>> value)=0;

	};
}
}
