///////////////////////////////////////////////////////////
//  SusceptancePerLength.h
//  Implementation of the Class SusceptancePerLength
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SUSCEPTANCEPERLENGTH_H
#define SUSCEPTANCEPERLENGTH_H

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
			 * Imaginary part of admittance per unit of length.
			 */
			class SusceptancePerLength
			{

			public:
				SusceptancePerLength();
				virtual ~SusceptancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
				static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // SUSCEPTANCEPERLENGTH_H
