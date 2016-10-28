///////////////////////////////////////////////////////////
//  GenUnitOpCostCurve.h
//  Implementation of the Class GenUnitOpCostCurve
///////////////////////////////////////////////////////////

#ifndef GENUNITOPCOSTCURVE_H
#define GENUNITOPCOSTCURVE_H

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
				 * Relationship between unit operating cost (Y-axis) and unit output active power
				 * (X-axis). The operating cost curve for thermal units is derived from heat input
				 * and fuel costs. The operating cost curve for hydro units is derived from water
				 * flow rates and equivalent water costs.
				 */
				class GenUnitOpCostCurve : public IEC61970::Base::Core::Curve
				{

				public:
					GenUnitOpCostCurve();
					virtual ~GenUnitOpCostCurve();
					/**
					 * Flag is set to true when output is expressed in net active power.
					 */
					IEC61970::Base::Domain::Boolean isNetGrossP;

				};

			}

		}

	}

}
#endif // GENUNITOPCOSTCURVE_H
