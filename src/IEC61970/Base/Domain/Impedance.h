///////////////////////////////////////////////////////////
//  Impedance.h
//  Implementation of the Class Impedance
///////////////////////////////////////////////////////////

#ifndef IMPEDANCE_H
#define IMPEDANCE_H

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
			 * Ratio of voltage to current.
			 */
			class Impedance
			{

			public:
				Impedance();
				virtual ~Impedance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // IMPEDANCE_H
