///////////////////////////////////////////////////////////
//  BushingInsulationKind.h
//  Implementation of the Class BushingInsulationKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef BUSHINGINSULATIONKIND_H
#define BUSHINGINSULATIONKIND_H

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Insulation kind for bushings.
		 */
		enum class BushingInsulationKind
		{
			/**
			 * <was paperoil>.
			 */
			 _undef = -1, 	oilImpregnatedPaper,
			compound,
			resinBondedPaper,
			resinImpregnatedPaper,
			solidPorcelain,
			other
		};

	}

}
#endif // BUSHINGINSULATIONKIND_H
