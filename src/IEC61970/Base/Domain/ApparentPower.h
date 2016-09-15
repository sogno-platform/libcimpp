///////////////////////////////////////////////////////////
//  ApparentPower.h
//  Implementation of the Class ApparentPower
//  Created on:      28-Jan-2016 12:43:21
///////////////////////////////////////////////////////////

#if !defined(EA_DE76360B_84C3_4948_8B0E_44FD26FD8EBB__INCLUDED_)
#define EA_DE76360B_84C3_4948_8B0E_44FD26FD8EBB__INCLUDED_

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
			 * Product of the RMS value of the voltage and the RMS value of the current.
			 */
			class ApparentPower
			{

			public:
				ApparentPower();
				virtual ~ApparentPower();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_DE76360B_84C3_4948_8B0E_44FD26FD8EBB__INCLUDED_)
