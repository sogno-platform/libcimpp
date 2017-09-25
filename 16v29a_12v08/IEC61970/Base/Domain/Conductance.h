///////////////////////////////////////////////////////////
//  Conductance.h
//  Implementation of the Class Conductance
///////////////////////////////////////////////////////////

#ifndef CONDUCTANCE_H
#define CONDUCTANCE_H

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
			 * Factor by which voltage must be multiplied to give corresponding power lost
			 * from a circuit. Real part of admittance.
			 */
			class Conductance
			{

			public:
				Conductance();
				virtual ~Conductance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // CONDUCTANCE_H
