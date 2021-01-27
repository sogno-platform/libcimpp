///////////////////////////////////////////////////////////
//  HydroGeneratingEfficiencyCurve.h
//  Implementation of the Class HydroGeneratingEfficiencyCurve
///////////////////////////////////////////////////////////

#ifndef HYDROGENERATINGEFFICIENCYCURVE_H
#define HYDROGENERATINGEFFICIENCYCURVE_H

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
#endif // HYDROGENERATINGEFFICIENCYCURVE_H
