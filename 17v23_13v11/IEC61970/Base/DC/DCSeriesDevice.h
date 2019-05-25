///////////////////////////////////////////////////////////
//  DCSeriesDevice.h
//  Implementation of the Class DCSeriesDevice
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef DCSERIESDEVICE_H
#define DCSERIESDEVICE_H

#include "IEC61970/Base/Domain/Inductance.h"
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
				 * Resistance of the DC device.
				 */
				IEC61970::Base::Domain::Resistance resistance;

			};

		}

	}

}
#endif // DCSERIESDEVICE_H
