///////////////////////////////////////////////////////////
//  VoltageControlZone.h
//  Implementation of the Class VoltageControlZone
///////////////////////////////////////////////////////////

#ifndef VOLTAGECONTROLZONE_H
#define VOLTAGECONTROLZONE_H

#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * An area of the power system network which is defined for secondary voltage
			 * control purposes. A voltage control zone consists of a collection of
			 * substations with a designated bus bar section whose voltage will be controlled.
			 */
			class VoltageControlZone : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				VoltageControlZone();
				virtual ~VoltageControlZone();

			};

		}

	}

}
#endif // VOLTAGECONTROLZONE_H
