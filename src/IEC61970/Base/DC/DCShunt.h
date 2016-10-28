///////////////////////////////////////////////////////////
//  DCShunt.h
//  Implementation of the Class DCShunt
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCSHUNT_H
#define DCSHUNT_H

#include "IEC61970/Base/Domain/Capacitance.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/DC/DCConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A shunt device within the DC system, typically used for filtering.  Needed for
			 * transient and short circuit studies.
			 */
			class DCShunt : public IEC61970::Base::DC::DCConductingEquipment
			{

			public:
				DCShunt();
				virtual ~DCShunt();
				/**
				 * Capacitance of the DC shunt.
				 */
				IEC61970::Base::Domain::Capacitance capacitance;
				/**
				 * Rated DC device voltage. Converter configuration data used in power flow.
				 */
				IEC61970::Base::Domain::Voltage ratedUdc;
				/**
				 * Resistance of the DC device.
				 */
				IEC61970::Base::Domain::Resistance resistance;

			};

		}

	}

}
#endif // DCSHUNT_H
