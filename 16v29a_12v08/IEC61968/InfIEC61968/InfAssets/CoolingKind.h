///////////////////////////////////////////////////////////
//  CoolingKind.h
//  Implementation of the Class CoolingKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef COOLINGKIND_H
#define COOLINGKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of cooling.
			 */
			enum class CoolingKind
			{
				selfCooling,
				forcedAir,
				forcedOilAndAir,
				other
			};

		}

	}

}
#endif // COOLINGKIND_H
