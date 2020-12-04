///////////////////////////////////////////////////////////
//  TailbayLossCurve.h
//  Implementation of the Class TailbayLossCurve
///////////////////////////////////////////////////////////

#ifndef TAILBAYLOSSCURVE_H
#define TAILBAYLOSSCURVE_H

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
#endif // TAILBAYLOSSCURVE_H
