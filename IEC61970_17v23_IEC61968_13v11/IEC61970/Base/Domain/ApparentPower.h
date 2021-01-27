///////////////////////////////////////////////////////////
//  ApparentPower.h
//  Implementation of the Class ApparentPower
///////////////////////////////////////////////////////////

#ifndef APPARENTPOWER_H
#define APPARENTPOWER_H

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
			 * Product of the RMS value of the voltage and the RMS value of the current.
			 */
			class ApparentPower
			{

			public:
				ApparentPower();
				virtual ~ApparentPower();
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				IEC61970::Base::Domain::UncefactUnitCode uncfactUnitCode;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // APPARENTPOWER_H
