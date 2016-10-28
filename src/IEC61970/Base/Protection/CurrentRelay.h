///////////////////////////////////////////////////////////
//  CurrentRelay.h
//  Implementation of the Class CurrentRelay
///////////////////////////////////////////////////////////

#ifndef CURRENTRELAY_H
#define CURRENTRELAY_H

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
#endif // CURRENTRELAY_H
