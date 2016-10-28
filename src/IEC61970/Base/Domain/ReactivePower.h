///////////////////////////////////////////////////////////
//  ReactivePower.h
//  Implementation of the Class ReactivePower
///////////////////////////////////////////////////////////

#ifndef REACTIVEPOWER_H
#define REACTIVEPOWER_H

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
			 * Product of RMS value of the voltage and the RMS value of the quadrature
			 * component of the current.
			 */
			class ReactivePower
			{

			public:
				ReactivePower();
				virtual ~ReactivePower();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // REACTIVEPOWER_H
