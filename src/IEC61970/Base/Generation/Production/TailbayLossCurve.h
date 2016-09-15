///////////////////////////////////////////////////////////
//  TailbayLossCurve.h
//  Implementation of the Class TailbayLossCurve
//  Created on:      28-Jan-2016 12:47:09
///////////////////////////////////////////////////////////

#if !defined(EA_92E1B272_959D_42af_B56F_DAD976C697CA__INCLUDED_)
#define EA_92E1B272_959D_42af_B56F_DAD976C697CA__INCLUDED_

#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Relationship between tailbay head loss hight (y-axis) and the total discharge
				 * into the power station's tailbay volume per time unit (x-axis) . There could be
				 * more than one curve depending on the level of the tailbay reservoir or river
				 * level.
				 */
				class TailbayLossCurve : public IEC61970::Base::Core::Curve
				{

				public:
					TailbayLossCurve();
					virtual ~TailbayLossCurve();

				};

			}

		}

	}

}
#endif // !defined(EA_92E1B272_959D_42af_B56F_DAD976C697CA__INCLUDED_)
