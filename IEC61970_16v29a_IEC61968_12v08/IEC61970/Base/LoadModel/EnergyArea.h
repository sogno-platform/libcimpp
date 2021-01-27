///////////////////////////////////////////////////////////
//  EnergyArea.h
//  Implementation of the Class EnergyArea
///////////////////////////////////////////////////////////

#ifndef ENERGYAREA_H
#define ENERGYAREA_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * Describes an area having energy production or consumption.  Specializations are
			 * intended to support the load allocation function as typically required in
			 * energy management systems or planning studies to allocate hypothesized load
			 * levels to individual load points for power flow analysis.  Often the energy
			 * area can be linked to both measured and forecast load levels.
			 */
			class EnergyArea : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				EnergyArea();
				virtual ~EnergyArea();

			};

		}

	}

}
#endif // ENERGYAREA_H
