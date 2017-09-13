///////////////////////////////////////////////////////////
//  WindingInsulationKind.h
//  Implementation of the Class WindingInsulationKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WINDINGINSULATIONKIND_H
#define WINDINGINSULATIONKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Insulation kind for windings.
			 */
			enum class WindingInsulationKind
			{
				paper,
				thermallyUpgradedPaper,
				nomex,
				other
			};

		}

	}

}
#endif // WINDINGINSULATIONKIND_H
