///////////////////////////////////////////////////////////
//  PenstockLossCurve.h
//  Implementation of the Class PenstockLossCurve
///////////////////////////////////////////////////////////

#ifndef PENSTOCKLOSSCURVE_H
#define PENSTOCKLOSSCURVE_H

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
				 * Relationship between penstock head loss (in meters) and  total discharge
				 * through the penstock (in cubic meters per second). One or more turbines may be
				 * connected to the same penstock.
				 */
				class PenstockLossCurve : public IEC61970::Base::Core::Curve
				{

				public:
					PenstockLossCurve();
					virtual ~PenstockLossCurve();

				};

			}

		}

	}

}
#endif // PENSTOCKLOSSCURVE_H
