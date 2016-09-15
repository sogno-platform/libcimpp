///////////////////////////////////////////////////////////
//  RealEnergy.h
//  Implementation of the Class RealEnergy
//  Created on:      28-Jan-2016 12:46:26
///////////////////////////////////////////////////////////

#if !defined(EA_9CA00F58_7661_4de6_B571_7C985081FBB6__INCLUDED_)
#define EA_9CA00F58_7661_4de6_B571_7C985081FBB6__INCLUDED_

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
			 * Real electrical energy.
			 */
			class RealEnergy
			{

			public:
				RealEnergy();
				virtual ~RealEnergy();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_9CA00F58_7661_4de6_B571_7C985081FBB6__INCLUDED_)
