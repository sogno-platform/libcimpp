///////////////////////////////////////////////////////////
//  Pressure.h
//  Implementation of the Class Pressure
///////////////////////////////////////////////////////////

#ifndef PRESSURE_H
#define PRESSURE_H

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
			 * Pressure in Pascal.
			 */
			class Pressure
			{

			public:
				Pressure();
				virtual ~Pressure();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // PRESSURE_H
