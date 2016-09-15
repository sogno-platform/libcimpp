///////////////////////////////////////////////////////////
//  Sensor.h
//  Implementation of the Class Sensor
//  Created on:      28-Jan-2016 12:46:39
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_1A3403C0_D2D1_4763_88D4_57E08C7EED29__INCLUDED_)
#define EA_1A3403C0_D2D1_4763_88D4_57E08C7EED29__INCLUDED_

#include "IEC61970/Base/AuxiliaryEquipment/AuxiliaryEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * This class describe devices that transform a measured quantity into signals
			 * that can be presented at displays, used in control or be recorded.
			 */
			class Sensor : public IEC61970::Base::AuxiliaryEquipment::AuxiliaryEquipment
			{

			public:
				Sensor();
				virtual ~Sensor();

			};

		}

	}

}
#endif // !defined(EA_1A3403C0_D2D1_4763_88D4_57E08C7EED29__INCLUDED_)
