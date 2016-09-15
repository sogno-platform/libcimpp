///////////////////////////////////////////////////////////
//  EarthFaultCompensator.h
//  Implementation of the Class EarthFaultCompensator
//  Created on:      28-Jan-2016 12:44:12
//  Original author: namstutz
///////////////////////////////////////////////////////////

#if !defined(EA_6920FC10_6A36_4573_9196_FF31AA6A4950__INCLUDED_)
#define EA_6920FC10_6A36_4573_9196_FF31AA6A4950__INCLUDED_

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
#endif // !defined(EA_6920FC10_6A36_4573_9196_FF31AA6A4950__INCLUDED_)
