///////////////////////////////////////////////////////////
//  Admittance.h
//  Implementation of the Class Admittance
///////////////////////////////////////////////////////////

#ifndef ADMITTANCE_H
#define ADMITTANCE_H

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
			 * Ratio of current to voltage.
			 */
			class Admittance
			{

			public:
				Admittance();
				virtual ~Admittance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ADMITTANCE_H
