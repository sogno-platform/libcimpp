///////////////////////////////////////////////////////////
//  ActivePower.h
//  Implementation of the Class ActivePower
//  Created on:      28-Jan-2016 12:43:14
///////////////////////////////////////////////////////////

#if !defined(EA_EC2ADAD4_0A5D_438c_A1BE_3CE3B0C5F207__INCLUDED_)
#define EA_EC2ADAD4_0A5D_438c_A1BE_3CE3B0C5F207__INCLUDED_

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
			 * Product of RMS value of the voltage and the RMS value of the in-phase component
			 * of the current.
			 */
			class ActivePower
			{

			public:
				ActivePower();
				virtual ~ActivePower();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_EC2ADAD4_0A5D_438c_A1BE_3CE3B0C5F207__INCLUDED_)
