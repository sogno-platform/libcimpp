///////////////////////////////////////////////////////////
//  Temperature.h
//  Implementation of the Class Temperature
///////////////////////////////////////////////////////////

#ifndef TEMPERATURE_H
#define TEMPERATURE_H

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
			 * Value of temperature in degrees Celsius.
			 */
			class Temperature
			{

			public:
				Temperature();
				virtual ~Temperature();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // TEMPERATURE_H
