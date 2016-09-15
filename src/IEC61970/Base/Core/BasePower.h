///////////////////////////////////////////////////////////
//  BasePower.h
//  Implementation of the Class BasePower
//  Created on:      28-Jan-2016 12:43:26
///////////////////////////////////////////////////////////

#if !defined(EA_BCDAF241_FCDD_4147_8E5F_CF71BB1CCBEE__INCLUDED_)
#define EA_BCDAF241_FCDD_4147_8E5F_CF71BB1CCBEE__INCLUDED_

#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The BasePower class defines the base power used in the per unit calculations.
			 */
			class BasePower : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BasePower();
				virtual ~BasePower();
				/**
				 * Value used as base power.
				 */
				IEC61970::Base::Domain::ApparentPower basePower;

			};

		}

	}

}
#endif // !defined(EA_BCDAF241_FCDD_4147_8E5F_CF71BB1CCBEE__INCLUDED_)
