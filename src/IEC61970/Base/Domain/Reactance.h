///////////////////////////////////////////////////////////
//  Reactance.h
//  Implementation of the Class Reactance
///////////////////////////////////////////////////////////

#ifndef REACTANCE_H
#define REACTANCE_H

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
			 * Reactance (imaginary part of impedance), at rated frequency.
			 */
			class Reactance
			{

			public:
				Reactance();
				virtual ~Reactance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // REACTANCE_H
