///////////////////////////////////////////////////////////
//  PowerSystemResource.h
//  Implementation of the Class PowerSystemResource
//  Created on:      28-Jan-2016 12:46:09
///////////////////////////////////////////////////////////

#if !defined(EA_695739DF_57BB_4b99_ACB6_B41DC55C9FF2__INCLUDED_)
#define EA_695739DF_57BB_4b99_ACB6_B41DC55C9FF2__INCLUDED_

#include <list>

#include "IEC61970/Base/Meas/Control.h"
#include "IEC61970/Base/Meas/Measurement.h"
#include "IEC61970/Base/Core/PSRType.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A power system resource can be an item of equipment such as a switch, an
			 * equipment container containing many individual items of equipment such as a
			 * substation, or an organisational entity such as sub-control area. Power system
			 * resources can have measurements associated.
			 */
			class PowerSystemResource : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				PowerSystemResource();
				virtual ~PowerSystemResource();
				/**
				 * The controller outputs used to actually govern a regulating device, e.g. the
				 * magnetization of a synchronous machine or capacitor bank breaker actuator.
				 */
				std::list<IEC61970::Base::Meas::Control*> Controls;
				/**
				 * The measurements associated with this power system resource.
				 */
				std::list<IEC61970::Base::Meas::Measurement*> Measurements;
				/**
				 * Custom classification for this power system resource.
				 */
				IEC61970::Base::Core::PSRType *PSRType;

			};

		}

	}

}
#endif // !defined(EA_695739DF_57BB_4b99_ACB6_B41DC55C9FF2__INCLUDED_)
