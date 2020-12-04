///////////////////////////////////////////////////////////
//  SurgeArrester.h
//  Implementation of the Class SurgeArrester
///////////////////////////////////////////////////////////

#ifndef SURGEARRESTER_H
#define SURGEARRESTER_H

#include "IEC61970/Base/AuxiliaryEquipment/AuxiliaryEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * Shunt device, installed on the network, usually in the proximity of electrical
			 * equipment in order to protect the said equipment against transient voltage
			 * transients caused by lightning or switching activity.
			 */
			class SurgeArrester : public IEC61970::Base::AuxiliaryEquipment::AuxiliaryEquipment
			{

			public:
				SurgeArrester();
				virtual ~SurgeArrester();

			};

		}

	}

}
#endif // SURGEARRESTER_H
