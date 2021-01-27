///////////////////////////////////////////////////////////
//  CTTempActivePowerCurve.h
//  Implementation of the Class CTTempActivePowerCurve
///////////////////////////////////////////////////////////

#ifndef CTTEMPACTIVEPOWERCURVE_H
#define CTTEMPACTIVEPOWERCURVE_H

#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * Relationship between the combustion turbine's power output rating in gross
				 * active power (X-axis) and the ambient air temperature (Y-axis).
				 */
				class CTTempActivePowerCurve : public IEC61970::Base::Core::Curve
				{

				public:
					CTTempActivePowerCurve();
					virtual ~CTTempActivePowerCurve();

				};

			}

		}

	}

}
#endif // CTTEMPACTIVEPOWERCURVE_H
