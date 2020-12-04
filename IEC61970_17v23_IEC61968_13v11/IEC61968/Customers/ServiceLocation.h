///////////////////////////////////////////////////////////
//  ServiceLocation.h
//  Implementation of the Class ServiceLocation
///////////////////////////////////////////////////////////

#ifndef SERVICELOCATION_H
#define SERVICELOCATION_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Metering/EndDevice.h"
#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61968/Customers/TroubleTicket.h"
#include "IEC61968/Work/WorkLocation.h"

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * A real estate location, commonly referred to as premises.
		 */
		class ServiceLocation : public IEC61968::Work::WorkLocation
		{

		public:
			ServiceLocation();
			virtual ~ServiceLocation();
			/**
			 * Method for the service person to access this service location. For example, a
			 * description of where to obtain a key if the facility is unmanned and secured.
			 */
			IEC61970::Base::Domain::String accessMethod;
			/**
			 * True if inspection is needed of facilities at this service location. This could
			 * be requested by a customer, due to suspected tampering, environmental concerns
			 * (e.g., a fire in the vicinity), or to correct incompatible data.
			 */
			IEC61970::Base::Domain::Boolean needsInspection;
			/**
			 * Problems previously encountered when visiting or performing work on this
			 * location. Examples include: bad dog, violent customer, verbally abusive
			 * occupant, obstructions, safety hazards, etc.
			 */
			IEC61970::Base::Domain::String siteAccessProblem;
			/**
			 * All end devices that measure the service delivered to this service location.
			 */
			std::list<IEC61968::Metering::EndDevice*> EndDevices;
			/**
			 * All usage points delivering service (of the same type) to this service location.
			 */
			std::list<IEC61968::Metering::UsagePoint*> UsagePoints;
			std::list<IEC61968::Customers::TroubleTicket*> TroubleTicket;

		};

	}

}
#endif // SERVICELOCATION_H
