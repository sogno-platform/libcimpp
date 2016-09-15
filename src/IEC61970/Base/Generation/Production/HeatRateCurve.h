///////////////////////////////////////////////////////////
//  HeatRateCurve.h
//  Implementation of the Class HeatRateCurve
//  Created on:      28-Jan-2016 12:45:18
///////////////////////////////////////////////////////////

#if !defined(EA_1EF41C52_5914_4cac_9838_5B89B1911239__INCLUDED_)
#define EA_1EF41C52_5914_4cac_9838_5B89B1911239__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Relationship between unit heat rate per active power (Y-axis) and  unit output
				 * (X-axis). The heat input is from all fuels.
				 */
				class HeatRateCurve : public IEC61970::Base::Core::Curve
				{

				public:
					HeatRateCurve();
					virtual ~HeatRateCurve();
					/**
					 * Flag is set to true when output is expressed in net active power.
					 */
					IEC61970::Base::Domain::Boolean isNetGrossP;

				};

			}

		}

	}

}
#endif // !defined(EA_1EF41C52_5914_4cac_9838_5B89B1911239__INCLUDED_)
