///////////////////////////////////////////////////////////
//  CurrentRelay.h
//  Implementation of the Class CurrentRelay
//  Created on:      28-Jan-2016 12:43:48
///////////////////////////////////////////////////////////

#if !defined(EA_887C83CB_91AE_4794_9A7A_0E1537380FEE__INCLUDED_)
#define EA_887C83CB_91AE_4794_9A7A_0E1537380FEE__INCLUDED_

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Protection/ProtectionEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Protection
		{
			/**
			 * A device that checks current flow values in any direction or designated
			 * direction.
			 */
			class CurrentRelay : public IEC61970::Base::Protection::ProtectionEquipment
			{

			public:
				CurrentRelay();
				virtual ~CurrentRelay();
				/**
				 * Current limit number one 1 for inverse time pickup.
				 */
				IEC61970::Base::Domain::CurrentFlow currentLimit1;
				/**
				 * Current limit number 2 for inverse time pickup.
				 */
				IEC61970::Base::Domain::CurrentFlow currentLimit2;
				/**
				 * Current limit number 3 for inverse time pickup.
				 */
				IEC61970::Base::Domain::CurrentFlow currentLimit3;
				/**
				 * Set true if the current relay has inverse time characteristic.
				 */
				IEC61970::Base::Domain::Boolean inverseTimeFlag;
				/**
				 * Inverse time delay number 1 for current limit number 1.
				 */
				IEC61970::Base::Domain::Seconds timeDelay1;
				/**
				 * Inverse time delay number 2 for current limit number 2.
				 */
				IEC61970::Base::Domain::Seconds timeDelay2;
				/**
				 * Inverse time delay number 3 for current limit number 3.
				 */
				IEC61970::Base::Domain::Seconds timeDelay3;

			};

		}

	}

}
#endif // !defined(EA_887C83CB_91AE_4794_9A7A_0E1537380FEE__INCLUDED_)
