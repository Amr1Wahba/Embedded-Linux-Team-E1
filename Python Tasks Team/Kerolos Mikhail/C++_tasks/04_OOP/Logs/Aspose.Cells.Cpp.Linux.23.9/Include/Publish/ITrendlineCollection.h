#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "TrendlineType.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum TrendlineType;
			class ITrendline;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents a collection of all the <see cref="Trendline" />
			///  objects for the specified data series.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// int chartIndex = excel.Worksheets[0].Charts.Add(ChartType.Column, 3, 3, 15, 10);
			/// Chart chart = excel.Worksheets[0].Charts[chartIndex];
			/// chart.NSeries.Add("A1:a3", true);
			/// chart.NSeries[0].TrendLines.Add(TrendlineType.Linear, "MyTrendLine");
			/// Trendline line = chart.NSeries[0].TrendLines[0];
			/// line.DisplayEquation = true;
			/// line.DisplayRSquared = true;
			/// line.Color = Color.Red;
			/// 
			/// [Visual Basic]
			/// Dim chartIndex As Integer =  excel.Worksheets(0).Charts.Add(ChartType.Column,3,3,15,10) 
			/// Dim chart As Chart =  excel.Worksheets(0).Charts(chartIndex) 
			/// chart.NSeries.Add("A1:a3", True)
			/// chart.NSeries(0).TrendLines.Add(TrendlineType.Linear, "MyTrendLine")
			/// Dim line As Trendline =  chart.NSeries(0).TrendLines(0) 
			/// line.DisplayEquation = True
			/// line.DisplayRSquared = True
			/// line.Color = Color.Red
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ITrendlineCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a <seealso cref="Trendline" />
			///  object to this collection with specified type.
			/// </summary>
			/// <param name="type" >Trendline type.</param>
			/// <returns><see cref="Trendline" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Charts::TrendlineType type)=0;
			/// <summary>
			/// Adds a <seealso cref="Trendline" />
			///  object to this collection with specified type and name.
			/// </summary>
			/// <param name="type" >Trendline type.</param>
			/// <param name="name" >Trendline name.</param>
			/// <returns><see cref="Trendline" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Charts::TrendlineType type , intrusive_ptr<Aspose::Cells::Systems::String> name)=0;
			/// <summary>
			/// Gets a <seealso cref="Trendline" />
			///  object by its index.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ITrendline> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
}
