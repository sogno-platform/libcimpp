///////////////////////////////////////////////////////////
//  HeatRate.h
//  Implementation of the Class HeatRate
//  Created on:      28-Jan-2016 12:45:17
///////////////////////////////////////////////////////////

#if !defined(EA_C5AC7711_6B73_453f_B939_E72FFF21FAB2__INCLUDED_)
#define EA_C5AC7711_6B73_453f_B939_E72FFF21FAB2__INCLUDED_

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Heat generated, in energy pertime unit of elapsed time.
				 */
				class HeatRate
				{

				public:
					HeatRate();
					virtual ~HeatRate();
					IEC61970::Base::Domain::UnitMultiplier multiplier;
					static const IEC61970::Base::Domain::UnitSymbol unit;
					IEC61970::Base::Domain::Float value;

				};

			}

		}

	}

}
#endif // !defined(EA_C5AC7711_6B73_453f_B939_E72FFF21FAB2__INCLUDED_)
