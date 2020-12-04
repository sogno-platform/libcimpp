///////////////////////////////////////////////////////////
//  HeatRateCurve.h
//  Implementation of the Class HeatRateCurve
///////////////////////////////////////////////////////////

#ifndef HEATRATECURVE_H
#define HEATRATECURVE_H

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
#endif // HEATRATECURVE_H
