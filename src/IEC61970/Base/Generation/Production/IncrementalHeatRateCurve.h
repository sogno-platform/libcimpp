///////////////////////////////////////////////////////////
//  IncrementalHeatRateCurve.h
//  Implementation of the Class IncrementalHeatRateCurve
//  Created on:      28-Jan-2016 12:45:27
///////////////////////////////////////////////////////////

#if !defined(EA_3890FE29_6C64_47f5_8B3B_8FBD70DF1623__INCLUDED_)
#define EA_3890FE29_6C64_47f5_8B3B_8FBD70DF1623__INCLUDED_

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
#endif // !defined(EA_3890FE29_6C64_47f5_8B3B_8FBD70DF1623__INCLUDED_)
