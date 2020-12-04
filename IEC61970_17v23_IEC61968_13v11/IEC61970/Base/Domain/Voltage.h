///////////////////////////////////////////////////////////
//  Voltage.h
//  Implementation of the Class Voltage
///////////////////////////////////////////////////////////

#ifndef VOLTAGE_H
#define VOLTAGE_H

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
			 * Electrical voltage, can be both AC and DC.
			 */
			class Voltage
			{

			public:
				Voltage();
				virtual ~Voltage();
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				IEC61970::Base::Domain::UncefactUnitCode uncefactUnitCode;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // VOLTAGE_H
