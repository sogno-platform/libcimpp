///////////////////////////////////////////////////////////
//  EarthFaultCompensator.h
//  Implementation of the Class EarthFaultCompensator
//  Original author: namstutz
///////////////////////////////////////////////////////////

#ifndef EARTHFAULTCOMPENSATOR_H
#define EARTHFAULTCOMPENSATOR_H

#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A conducting equipment used to represent a connection to ground which is
			 * typically used to compensate earth faults..   An earth fault compensator device
			 * modeled with a single terminal implies a second terminal solidly connected to
			 * ground.  If two terminals are modeled, the ground is not assumed and normal
			 * connection rules apply.
			 */
			class EarthFaultCompensator : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				EarthFaultCompensator();
				virtual ~EarthFaultCompensator();
				/**
				 * Nominal resistance of device.
				 */
				IEC61970::Base::Domain::Resistance r;

			};

		}

	}

}
#endif // EARTHFAULTCOMPENSATOR_H
