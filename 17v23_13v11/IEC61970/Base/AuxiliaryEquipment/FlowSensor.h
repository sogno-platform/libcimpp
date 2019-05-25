///////////////////////////////////////////////////////////
//  FlowSensor.h
//  Implementation of the Class FlowSensor
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef FLOWSENSOR_H
#define FLOWSENSOR_H

#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * Represents a two terminal and power conducting device of negligible impedance
			 * that senses flow through the device.
			 */
			class FlowSensor : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				FlowSensor();
				virtual ~FlowSensor();

			};

		}

	}

}
#endif // FLOWSENSOR_H
