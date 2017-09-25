///////////////////////////////////////////////////////////
//  Inductance.h
//  Implementation of the Class Inductance
///////////////////////////////////////////////////////////

#ifndef INDUCTANCE_H
#define INDUCTANCE_H

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
			 * Inductive part of reactance (imaginary part of impedance), at rated frequency.
			 */
			class Inductance
			{

			public:
				Inductance();
				virtual ~Inductance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // INDUCTANCE_H
