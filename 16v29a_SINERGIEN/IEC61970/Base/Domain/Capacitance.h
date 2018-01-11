///////////////////////////////////////////////////////////
//  Capacitance.h
//  Implementation of the Class Capacitance
///////////////////////////////////////////////////////////

#ifndef CAPACITANCE_H
#define CAPACITANCE_H

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
			 * Capacitive part of reactance (imaginary part of impedance), at rated frequency.
			 */
			class Capacitance
			{

			public:
				Capacitance();
				virtual ~Capacitance();
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // CAPACITANCE_H
