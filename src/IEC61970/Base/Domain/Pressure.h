///////////////////////////////////////////////////////////
//  Pressure.h
//  Implementation of the Class Pressure
//  Created on:      28-Jan-2016 12:46:11
///////////////////////////////////////////////////////////

#if !defined(EA_1F879E5A_4298_431d_BA18_9E3E98CC43FC__INCLUDED_)
#define EA_1F879E5A_4298_431d_BA18_9E3E98CC43FC__INCLUDED_

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
#endif // !defined(EA_1F879E5A_4298_431d_BA18_9E3E98CC43FC__INCLUDED_)
