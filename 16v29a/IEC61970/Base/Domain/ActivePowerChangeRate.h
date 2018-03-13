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
				static const IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
				static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ACTIVEPOWERCHANGERATE_H
