///////////////////////////////////////////////////////////
//  ConductancePerLength.h
//  Implementation of the Class ConductancePerLength
//  Created on:      28-Jan-2016 12:43:36
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_7C32C1B9_7284_44e8_AAE4_860738F3F887__INCLUDED_)
#define EA_7C32C1B9_7284_44e8_AAE4_860738F3F887__INCLUDED_

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
			 * Real part of admittance per unit of length.
			 */
			class ConductancePerLength
			{

			public:
				ConductancePerLength();
				virtual ~ConductancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_7C32C1B9_7284_44e8_AAE4_860738F3F887__INCLUDED_)
