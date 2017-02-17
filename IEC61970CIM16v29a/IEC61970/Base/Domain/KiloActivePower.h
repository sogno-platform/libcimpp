///////////////////////////////////////////////////////////
//  KiloActivePower.h
//  Implementation of the Class KiloActivePower
///////////////////////////////////////////////////////////

#ifndef KILOACTIVEPOWER_H
#define KILOACTIVEPOWER_H

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
			 * Active power in kilowatts.
			 */
			class KiloActivePower
			{

			public:
				KiloActivePower();
				virtual ~KiloActivePower();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // KILOACTIVEPOWER_H
