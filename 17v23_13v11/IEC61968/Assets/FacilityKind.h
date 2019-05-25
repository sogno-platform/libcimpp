///////////////////////////////////////////////////////////
//  FacilityKind.h
//  Implementation of the Class FacilityKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef FACILITYKIND_H
#define FACILITYKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Types of facilities at which an asset can be deployed.
		 */
		enum class FacilityKind
		{
			 _undef = -1, 	substationHydroPlant,
			substationFossilPlant,
			substationNuclearPlant,
			substationTransmission,
			substationSubTransmission,
			substationDistribution,
			distributionPoleTop
		};

	}

}
#endif // FACILITYKIND_H
