///////////////////////////////////////////////////////////
//  PostLineSensor.h
//  Implementation of the Class PostLineSensor
//  Created on:      28-Jan-2016 12:46:06
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_2C77A8F4_B0C9_4905_8E75_340FB2511063__INCLUDED_)
#define EA_2C77A8F4_B0C9_4905_8E75_340FB2511063__INCLUDED_

#include "IEC61970/Base/AuxiliaryEquipment/Sensor.h"

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * A sensor used mainly in overhead distribution networks as the source of both
			 * current and voltage measurements.
			 */
			class PostLineSensor : public IEC61970::Base::AuxiliaryEquipment::Sensor
			{

			public:
				PostLineSensor();
				virtual ~PostLineSensor();

			};

		}

	}

}
#endif // !defined(EA_2C77A8F4_B0C9_4905_8E75_340FB2511063__INCLUDED_)
