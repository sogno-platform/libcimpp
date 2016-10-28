///////////////////////////////////////////////////////////
//  Susceptance.h
//  Implementation of the Class Susceptance
///////////////////////////////////////////////////////////

#ifndef SUSCEPTANCE_H
#define SUSCEPTANCE_H

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
			 * Imaginary part of admittance.
			 */
			class Susceptance
			{

			public:
				Susceptance();
				virtual ~Susceptance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // SUSCEPTANCE_H
