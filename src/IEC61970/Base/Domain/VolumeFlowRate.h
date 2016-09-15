///////////////////////////////////////////////////////////
//  VolumeFlowRate.h
//  Implementation of the Class VolumeFlowRate
//  Created on:      28-Jan-2016 12:47:40
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_D4EF2A4E_A855_4699_839B_EFFB78224788__INCLUDED_)
#define EA_D4EF2A4E_A855_4699_839B_EFFB78224788__INCLUDED_

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
			 * Volume per time.
			 */
			class VolumeFlowRate
			{

			public:
				VolumeFlowRate();
				virtual ~VolumeFlowRate();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_D4EF2A4E_A855_4699_839B_EFFB78224788__INCLUDED_)
