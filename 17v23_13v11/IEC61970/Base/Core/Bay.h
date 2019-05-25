///////////////////////////////////////////////////////////
//  Bay.h
//  Implementation of the Class Bay
///////////////////////////////////////////////////////////

#ifndef BAY_H
#define BAY_H

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
				IEC61970::Base::Core::BreakerConfiguration breakerConfiguration = IEC61970::Base::Core::BreakerConfiguration::_undef;
				/**
				 * Bus bar configuration.
				 */
				IEC61970::Base::Core::BusbarConfiguration busBarConfiguration = IEC61970::Base::Core::BusbarConfiguration::_undef;

			};

		}

	}

}
#endif // BAY_H
