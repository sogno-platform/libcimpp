///////////////////////////////////////////////////////////
//  IncrementalHeatRateCurve.h
//  Implementation of the Class IncrementalHeatRateCurve
///////////////////////////////////////////////////////////

#ifndef INCREMENTALHEATRATECURVE_H
#define INCREMENTALHEATRATECURVE_H

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
				 * Relationship between unit incremental heat rate in (delta energy/time) per
				 * (delta active power) and unit output in active power. The IHR curve represents
				 * the slope of the HeatInputCurve. Note that the "incremental heat rate" and the
				 * "heat rate" have the same engineering units.
				 */
				class IncrementalHeatRateCurve : public IEC61970::Base::Core::Curve
				{

				public:
					IncrementalHeatRateCurve();
					virtual ~IncrementalHeatRateCurve();
					/**
					 * Flag is set to true when output is expressed in net active power.
					 */
					IEC61970::Base::Domain::Boolean isNetGrossP;

				};

			}

		}

	}

}
#endif // INCREMENTALHEATRATECURVE_H
