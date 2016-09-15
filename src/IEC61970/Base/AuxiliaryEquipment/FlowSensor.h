///////////////////////////////////////////////////////////
//  FlowSensor.h
//  Implementation of the Class FlowSensor
//  Created on:      28-Jan-2016 12:44:52
//  Original author: 222206
///////////////////////////////////////////////////////////

#if !defined(EA_B1D76C87_110D_475a_86C3_174BFC2D761D__INCLUDED_)
#define EA_B1D76C87_110D_475a_86C3_174BFC2D761D__INCLUDED_

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
#endif // !defined(EA_B1D76C87_110D_475a_86C3_174BFC2D761D__INCLUDED_)
