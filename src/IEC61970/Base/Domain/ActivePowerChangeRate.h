///////////////////////////////////////////////////////////
//  ActivePowerChangeRate.h
//  Implementation of the Class ActivePowerChangeRate
//  Created on:      28-Jan-2016 12:43:14
///////////////////////////////////////////////////////////

#if !defined(EA_974D2B99_3ABF_434f_8016_7D7120CB5F5A__INCLUDED_)
#define EA_974D2B99_3ABF_434f_8016_7D7120CB5F5A__INCLUDED_

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Rate of change of active power per time.
			 */
			class ActivePowerChangeRate
			{

			public:
				ActivePowerChangeRate();
				virtual ~ActivePowerChangeRate();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_974D2B99_3ABF_434f_8016_7D7120CB5F5A__INCLUDED_)
