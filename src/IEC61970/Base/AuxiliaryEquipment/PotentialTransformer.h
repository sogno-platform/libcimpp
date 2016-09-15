///////////////////////////////////////////////////////////
//  PotentialTransformer.h
//  Implementation of the Class PotentialTransformer
//  Created on:      28-Jan-2016 12:46:07
///////////////////////////////////////////////////////////

#if !defined(EA_51543F79_2682_4045_B483_0E1D30917F51__INCLUDED_)
#define EA_51543F79_2682_4045_B483_0E1D30917F51__INCLUDED_

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/AuxiliaryEquipment/PotentialTransformerKind.h"
#include "IEC61970/Base/AuxiliaryEquipment/Sensor.h"

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * Instrument transformer (also known as Voltage Transformer) used to measure
			 * electrical qualities of the circuit that is being protected and/or monitored.
			 * Typically used as voltage transducer for the purpose of metering, protection,
			 * or sometimes auxiliary substation supply. A typical secondary voltage rating
			 * would be 120V.
			 */
			class PotentialTransformer : public IEC61970::Base::AuxiliaryEquipment::Sensor
			{

			public:
				PotentialTransformer();
				virtual ~PotentialTransformer();
				/**
				 * PT accuracy classification.
				 */
				IEC61970::Base::Domain::String accuracyClass;
				/**
				 * Nominal ratio between the primary and secondary voltage.
				 */
				IEC61970::Base::Domain::Float nominalRatio;
				/**
				 * Potential transformer (PT) classification covering burden.
				 */
				IEC61970::Base::Domain::String ptClass;
				/**
				 * Potential transformer construction type.
				 */
				IEC61970::Base::AuxiliaryEquipment::PotentialTransformerKind type;

			};

		}

	}

}
#endif // !defined(EA_51543F79_2682_4045_B483_0E1D30917F51__INCLUDED_)
