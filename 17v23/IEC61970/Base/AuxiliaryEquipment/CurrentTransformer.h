///////////////////////////////////////////////////////////
//  CurrentTransformer.h
//  Implementation of the Class CurrentTransformer
///////////////////////////////////////////////////////////

#ifndef CURRENTTRANSFORMER_H
#define CURRENTTRANSFORMER_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/AuxiliaryEquipment/Sensor.h"

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * Instrument transformer used to measure electrical qualities of the circuit that
			 * is being protected and/or monitored. Typically used as current transducer for
			 * the purpose of metering or protection. A typical secondary current rating would
			 * be 5A.
			 */
			class CurrentTransformer : public IEC61970::Base::AuxiliaryEquipment::Sensor
			{

			public:
				CurrentTransformer();
				virtual ~CurrentTransformer();
				/**
				 * CT accuracy classification.
				 */
				IEC61970::Base::Domain::String accuracyClass;
				/**
				 * Percent of rated current for which the CT remains accurate within specified
				 * limits.
				 */
				IEC61970::Base::Domain::PerCent accuracyLimit;
				/**
				 * Power burden of the CT core.
				 */
				IEC61970::Base::Domain::ActivePower coreBurden;
				/**
				 * CT classification; i.e. class 10P.
				 */
				IEC61970::Base::Domain::String ctClass;
				/**
				 * Intended usage of the CT; i.e. metering, protection.
				 */
				IEC61970::Base::Domain::String usage;

			};

		}

	}

}
#endif // CURRENTTRANSFORMER_H
