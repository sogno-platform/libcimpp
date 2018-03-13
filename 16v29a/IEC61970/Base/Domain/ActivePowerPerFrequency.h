///////////////////////////////////////////////////////////
//  ActivePowerPerFrequency.h
//  Implementation of the Class ActivePowerPerFrequency
///////////////////////////////////////////////////////////

#ifndef ACTIVEPOWERPERFREQUENCY_H
#define ACTIVEPOWERPERFREQUENCY_H

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
			 * Active power variation with frequency.
			 */
			class ActivePowerPerFrequency
			{

			public:
				ActivePowerPerFrequency();
				virtual ~ActivePowerPerFrequency();
				IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ACTIVEPOWERPERFREQUENCY_H
