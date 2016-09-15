///////////////////////////////////////////////////////////
//  DCSeriesDevice.h
//  Implementation of the Class DCSeriesDevice
//  Created on:      28-Jan-2016 12:44:00
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_CB2291C8_A9C9_4ed9_8743_8D3274EF9D7B__INCLUDED_)
#define EA_CB2291C8_A9C9_4ed9_8743_8D3274EF9D7B__INCLUDED_

#include "IEC61970/Base/Domain/Inductance.h"
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
			 * A series device within the DC system, typically a reactor used for filtering or
			 * smoothing.  Needed for transient and short circuit studies.
			 */
			class DCSeriesDevice : public IEC61970::Base::DC::DCConductingEquipment
			{

			public:
				DCSeriesDevice();
				virtual ~DCSeriesDevice();
				/**
				 * Inductance of the device.
				 */
				IEC61970::Base::Domain::Inductance inductance;
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
#endif // !defined(EA_CB2291C8_A9C9_4ed9_8743_8D3274EF9D7B__INCLUDED_)
