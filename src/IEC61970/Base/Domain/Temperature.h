///////////////////////////////////////////////////////////
//  Temperature.h
//  Implementation of the Class Temperature
//  Created on:      28-Jan-2016 12:47:13
///////////////////////////////////////////////////////////

#if !defined(EA_9AD8F6D8_A142_48ca_8D2F_9EC924CEB295__INCLUDED_)
#define EA_9AD8F6D8_A142_48ca_8D2F_9EC924CEB295__INCLUDED_

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
			 * Value of temperature in degrees Celsius.
			 */
			class Temperature
			{

			public:
				Temperature();
				virtual ~Temperature();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_9AD8F6D8_A142_48ca_8D2F_9EC924CEB295__INCLUDED_)
