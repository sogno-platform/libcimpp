///////////////////////////////////////////////////////////
//  Sensor.h
//  Implementation of the Class Sensor
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef SENSOR_H
#define SENSOR_H

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
#endif // SENSOR_H
