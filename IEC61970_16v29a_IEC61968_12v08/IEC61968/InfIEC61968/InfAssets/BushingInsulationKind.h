///////////////////////////////////////////////////////////
//  BushingInsulationKind.h
//  Implementation of the Class BushingInsulationKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef BUSHINGINSULATIONKIND_H
#define BUSHINGINSULATIONKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Insulation kind for bushings.
			 */
			enum class BushingInsulationKind
			{
				 _undef = -1, 	paperoil,
				compound,
				solidPorcelain,
				other
			};

		}

	}

}
#endif // BUSHINGINSULATIONKIND_H
