///////////////////////////////////////////////////////////
//  Resistance.h
//  Implementation of the Class Resistance
///////////////////////////////////////////////////////////

#ifndef RESISTANCE_H
#define RESISTANCE_H

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
			 * Resistance (real part of impedance).
			 */
			class Resistance
			{

			public:
				Resistance();
				virtual ~Resistance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // RESISTANCE_H
