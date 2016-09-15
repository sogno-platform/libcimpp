///////////////////////////////////////////////////////////
//  SurgeArrester.h
//  Implementation of the Class SurgeArrester
//  Created on:      28-Jan-2016 12:46:55
///////////////////////////////////////////////////////////

#if !defined(EA_E4920173_C896_491b_ABF8_378FE704DB74__INCLUDED_)
#define EA_E4920173_C896_491b_ABF8_378FE704DB74__INCLUDED_

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
#endif // !defined(EA_E4920173_C896_491b_ABF8_378FE704DB74__INCLUDED_)
