///////////////////////////////////////////////////////////
//  EmissionCurve.h
//  Implementation of the Class EmissionCurve
///////////////////////////////////////////////////////////

#ifndef EMISSIONCURVE_H
#define EMISSIONCURVE_H

#include "IEC61970/Base/Generation/Production/Emission.h"
#include "IEC61970/Base/Generation/Production/EmissionType.h"
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
				 * Relationship between the unit's emission rate in units of mass per hour (Y-
				 * axis) and output active power (X-axis) for a given type of emission. This curve
				 * applies when only one type of fuel is being burned.
				 */
				class EmissionCurve : public IEC61970::Base::Core::Curve
				{

				public:
					EmissionCurve();
					virtual ~EmissionCurve();
					/**
					 * The emission content per quantity of fuel burned.
					 */
					IEC61970::Base::Generation::Production::Emission emissionContent;
					/**
					 * The type of emission, which also gives the production rate measurement unit.
					 * The y1AxisUnits of the curve contains the unit of measure (e.g. kg) and the
					 * emissionType is the type of emission (e.g. sulfer dioxide).
					 */
					IEC61970::Base::Generation::Production::EmissionType emissionType = IEC61970::Base::Generation::Production::EmissionType::_undef;
					/**
					 * Flag is set to true when output is expressed in net active power.
					 */
					IEC61970::Base::Domain::Boolean isNetGrossP;

				};

			}

		}

	}

}
#endif // EMISSIONCURVE_H
