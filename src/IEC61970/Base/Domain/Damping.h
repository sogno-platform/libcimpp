///////////////////////////////////////////////////////////
//  Damping.h
//  Implementation of the Class Damping
//  Created on:      28-Jan-2016 12:43:52
///////////////////////////////////////////////////////////

#if !defined(EA_A47D1EEB_A73F_4900_8F3C_DD4BC715E48D__INCLUDED_)
#define EA_A47D1EEB_A73F_4900_8F3C_DD4BC715E48D__INCLUDED_

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
			 * Per-unit active power variation with frequency referenced on the system
			 * apparent power base. Typical values are in range 1.0 - 2.0.
			 */
			class Damping
			{

			public:
				Damping();
				virtual ~Damping();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_A47D1EEB_A73F_4900_8F3C_DD4BC715E48D__INCLUDED_)
