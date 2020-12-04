///////////////////////////////////////////////////////////
//  ShutdownCurve.h
//  Implementation of the Class ShutdownCurve
///////////////////////////////////////////////////////////

#ifndef SHUTDOWNCURVE_H
#define SHUTDOWNCURVE_H

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/DateTime.h"
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
				 * Relationship between the rate in gross active power/minute (Y-axis) at which a
				 * unit should be shutdown and its present gross MW output (X-axis).
				 */
				class ShutdownCurve : public IEC61970::Base::Core::Curve
				{

				public:
					ShutdownCurve();
					virtual ~ShutdownCurve();
					/**
					 * Fixed shutdown cost.
					 */
					IEC61970::Base::Domain::Money shutdownCost;
					/**
					 * The date and time of the most recent generating unit shutdown.
					 */
					IEC61970::Base::Domain::DateTime shutdownDate;

				};

			}

		}

	}

}
#endif // SHUTDOWNCURVE_H
