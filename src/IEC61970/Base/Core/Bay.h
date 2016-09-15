///////////////////////////////////////////////////////////
//  Bay.h
//  Implementation of the Class Bay
//  Created on:      28-Jan-2016 12:43:27
///////////////////////////////////////////////////////////

#if !defined(EA_C416F635_23C2_4831_8293_603C76B9526C__INCLUDED_)
#define EA_C416F635_23C2_4831_8293_603C76B9526C__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Core/BreakerConfiguration.h"
#include "IEC61970/Base/Core/BusbarConfiguration.h"
#include "IEC61970/Base/Core/EquipmentContainer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A collection of power system resources (within a given substation) including
			 * conducting equipment, protection relays, measurements, and telemetry.  A bay
			 * typically represents a physical grouping related to modularization of equipment.
			 */
			class Bay : public IEC61970::Base::Core::EquipmentContainer
			{

			public:
				Bay();
				virtual ~Bay();
				/**
				 * Indicates the presence/absence of energy measurements.
				 */
				IEC61970::Base::Domain::Boolean bayEnergyMeasFlag;
				/**
				 * Indicates the presence/absence of active/reactive power measurements.
				 */
				IEC61970::Base::Domain::Boolean bayPowerMeasFlag;
				/**
				 * Breaker configuration. 
				 */
				IEC61970::Base::Core::BreakerConfiguration breakerConfiguration;
				/**
				 * Bus bar configuration.
				 */
				IEC61970::Base::Core::BusbarConfiguration busBarConfiguration;

			};

		}

	}

}
#endif // !defined(EA_C416F635_23C2_4831_8293_603C76B9526C__INCLUDED_)
