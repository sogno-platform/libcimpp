///////////////////////////////////////////////////////////
//  PowerCutZone.h
//  Implementation of the Class PowerCutZone
///////////////////////////////////////////////////////////

#ifndef POWERCUTZONE_H
#define POWERCUTZONE_H

#include <list>

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Wires/EnergyConsumer.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * An area or zone of the power system which is used for load shedding purposes.
			 */
			class PowerCutZone : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				PowerCutZone();
				virtual ~PowerCutZone();
				/**
				 * First level (amount) of load to cut as a percentage of total zone load.
				 */
				IEC61970::Base::Domain::PerCent cutLevel1;
				/**
				 * Second level (amount) of load to cut as a percentage of total zone load.
				 */
				IEC61970::Base::Domain::PerCent cutLevel2;
				/**
				 * Energy consumer is assigned to the power cut zone.
				 */
				std::list<IEC61970::Base::Wires::EnergyConsumer*> EnergyConsumers;

			};

		}

	}

}
#endif // POWERCUTZONE_H
