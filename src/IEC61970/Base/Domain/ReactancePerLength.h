///////////////////////////////////////////////////////////
//  ReactancePerLength.h
//  Implementation of the Class ReactancePerLength
//  Created on:      28-Jan-2016 12:46:25
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_E573AF92_81FF_4959_AB94_330F715B7540__INCLUDED_)
#define EA_E573AF92_81FF_4959_AB94_330F715B7540__INCLUDED_

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
			 * Reactance (imaginary part of impedance) per unit of length, at rated frequency.
			 */
			class ReactancePerLength
			{

			public:
				ReactancePerLength();
				virtual ~ReactancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_E573AF92_81FF_4959_AB94_330F715B7540__INCLUDED_)
