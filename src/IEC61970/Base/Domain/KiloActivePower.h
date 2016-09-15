///////////////////////////////////////////////////////////
//  KiloActivePower.h
//  Implementation of the Class KiloActivePower
//  Created on:      28-Jan-2016 12:45:31
///////////////////////////////////////////////////////////

#if !defined(EA_5E256DC7_D9AC_46ee_97D1_D9840D14C5FC__INCLUDED_)
#define EA_5E256DC7_D9AC_46ee_97D1_D9840D14C5FC__INCLUDED_

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
#endif // !defined(EA_5E256DC7_D9AC_46ee_97D1_D9840D14C5FC__INCLUDED_)
