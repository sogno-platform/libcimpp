///////////////////////////////////////////////////////////
//  PostLineSensor.h
//  Implementation of the Class PostLineSensor
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef POSTLINESENSOR_H
#define POSTLINESENSOR_H

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
#endif // POSTLINESENSOR_H
