#pragma once
#include "IIPageSavingCallback.h"
#include "Aspose.Cells.Systems/Object.h"
#define STATIC_IPAGESAVINGCALLBACK() 

namespace Aspose {
namespace Cells {
namespace Rendering {
class PageStartSavingArgs;
class PageEndSavingArgs;
}
}
}

namespace Aspose {
namespace Cells {
namespace Rendering {
	class ASPOSE_CELLS_API IPageSavingCallback : public IIPageSavingCallback

	{
	public:

			virtual void PageStartSaving(intrusive_ptr<Aspose::Cells::Rendering::PageStartSavingArgs> args) = 0;
			virtual void PageEndSaving(intrusive_ptr<Aspose::Cells::Rendering::PageEndSavingArgs> args) = 0;
		public:
		public:
	};

}

}

}
