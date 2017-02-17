///////////////////////////////////////////////////////////
//  Frequency.h
//  Implementation of the Class Frequency
///////////////////////////////////////////////////////////

#ifndef FREQUENCY_H
#define FREQUENCY_H

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
			 * Cycles per second.
			 */
			class Frequency
			{

			public:
				Frequency();
				virtual ~Frequency();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // FREQUENCY_H
