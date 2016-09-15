///////////////////////////////////////////////////////////
//  RemoteSource.h
//  Implementation of the Class RemoteSource
//  Created on:      28-Jan-2016 12:46:32
///////////////////////////////////////////////////////////

#if !defined(EA_A6E5CC29_2946_4604_8C4F_582C21F5CAD5__INCLUDED_)
#define EA_A6E5CC29_2946_4604_8C4F_582C21F5CAD5__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/SCADA/RemotePoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace SCADA
		{
			/**
			 * Remote sources are state variables that are telemetered or calculated within
			 * the remote unit.
			 */
			class RemoteSource : public IEC61970::Base::SCADA::RemotePoint
			{

			public:
				RemoteSource();
				virtual ~RemoteSource();
				/**
				 * The smallest change in value to be reported.
				 */
				IEC61970::Base::Domain::Float deadband;
				/**
				 * The time interval between scans.
				 */
				IEC61970::Base::Domain::Seconds scanInterval;
				/**
				 * The maximum value the telemetry item can return.
				 */
				IEC61970::Base::Domain::Float sensorMaximum;
				/**
				 * The minimum value the telemetry item can return.
				 */
				IEC61970::Base::Domain::Float sensorMinimum;

			};

		}

	}

}
#endif // !defined(EA_A6E5CC29_2946_4604_8C4F_582C21F5CAD5__INCLUDED_)
