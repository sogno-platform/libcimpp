///////////////////////////////////////////////////////////
//  Admittance.h
//  Implementation of the Class Admittance
//  Created on:      28-Jan-2016 12:43:15
///////////////////////////////////////////////////////////

#if !defined(EA_7CF67142_8868_4069_A5F1_C6D733265E35__INCLUDED_)
#define EA_7CF67142_8868_4069_A5F1_C6D733265E35__INCLUDED_

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
			 * Ratio of current to voltage.
			 */
			class Admittance
			{

			public:
				Admittance();
				virtual ~Admittance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_7CF67142_8868_4069_A5F1_C6D733265E35__INCLUDED_)
