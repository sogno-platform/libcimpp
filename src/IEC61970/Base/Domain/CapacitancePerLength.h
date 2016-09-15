///////////////////////////////////////////////////////////
//  CapacitancePerLength.h
//  Implementation of the Class CapacitancePerLength
//  Created on:      28-Jan-2016 12:43:32
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_6634A4E1_2630_475c_A5AC_B66FB3542DDA__INCLUDED_)
#define EA_6634A4E1_2630_475c_A5AC_B66FB3542DDA__INCLUDED_

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
			 * Capacitance per unit of length.
			 */
			class CapacitancePerLength
			{

			public:
				CapacitancePerLength();
				virtual ~CapacitancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_6634A4E1_2630_475c_A5AC_B66FB3542DDA__INCLUDED_)
