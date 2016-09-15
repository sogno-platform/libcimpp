///////////////////////////////////////////////////////////
//  ReactivePower.h
//  Implementation of the Class ReactivePower
//  Created on:      28-Jan-2016 12:46:26
///////////////////////////////////////////////////////////

#if !defined(EA_97172BEF_95C3_4ac5_8C6E_386DF797AF18__INCLUDED_)
#define EA_97172BEF_95C3_4ac5_8C6E_386DF797AF18__INCLUDED_

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
			 * Product of RMS value of the voltage and the RMS value of the quadrature
			 * component of the current.
			 */
			class ReactivePower
			{

			public:
				ReactivePower();
				virtual ~ReactivePower();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_97172BEF_95C3_4ac5_8C6E_386DF797AF18__INCLUDED_)
