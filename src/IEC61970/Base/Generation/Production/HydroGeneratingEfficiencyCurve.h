///////////////////////////////////////////////////////////
//  HydroGeneratingEfficiencyCurve.h
//  Implementation of the Class HydroGeneratingEfficiencyCurve
//  Created on:      28-Jan-2016 12:45:19
///////////////////////////////////////////////////////////

#if !defined(EA_D3225AA6_32F1_4e9d_ACA1_BCB03B2D3C30__INCLUDED_)
#define EA_D3225AA6_32F1_4e9d_ACA1_BCB03B2D3C30__INCLUDED_

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
				 * Relationship between unit efficiency in percent and unit output active power
				 * for a given net head in meters. The relationship between efficiency, discharge,
				 * head, and power output is expressed as follows:   E =KP/HQ
				 * Where:  (E=percentage)  (P=active power)  (H=height)  (Q=volume/time unit)
				 * (K=constant)
				 * For example, a curve instance for a given net head could relate efficiency (Y-
				 * axis) versus active power output (X-axis) or versus discharge on the X-axis.
				 */
				class HydroGeneratingEfficiencyCurve : public IEC61970::Base::Core::Curve
				{

				public:
					HydroGeneratingEfficiencyCurve();
					virtual ~HydroGeneratingEfficiencyCurve();

				};

			}

		}

	}

}
#endif // !defined(EA_D3225AA6_32F1_4e9d_ACA1_BCB03B2D3C30__INCLUDED_)
