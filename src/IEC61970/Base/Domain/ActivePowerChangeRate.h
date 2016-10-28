///////////////////////////////////////////////////////////
//  ActivePowerChangeRate.h
//  Implementation of the Class ActivePowerChangeRate
///////////////////////////////////////////////////////////

#ifndef ACTIVEPOWERCHANGERATE_H
#define ACTIVEPOWERCHANGERATE_H

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
#endif // ACTIVEPOWERCHANGERATE_H
