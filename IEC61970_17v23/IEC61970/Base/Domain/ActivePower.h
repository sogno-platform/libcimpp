///////////////////////////////////////////////////////////
//  ActivePower.h
//  Implementation of the Class ActivePower
///////////////////////////////////////////////////////////

#ifndef ACTIVEPOWER_H
#define ACTIVEPOWER_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UncefactUnitCode.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Product of RMS value of the voltage and the RMS value of the in-phase component
			 * of the current.
			 */
			class ActivePower
			{

			public:
				ActivePower();
				virtual ~ActivePower();
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				IEC61970::Base::Domain::UncefactUnitCode uncefactUnitCode;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ACTIVEPOWER_H
