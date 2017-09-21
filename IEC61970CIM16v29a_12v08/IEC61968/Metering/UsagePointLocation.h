///////////////////////////////////////////////////////////
//  UsagePointLocation.h
//  Implementation of the Class UsagePointLocation
///////////////////////////////////////////////////////////

#ifndef USAGEPOINTLOCATION_H
#define USAGEPOINTLOCATION_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Location.h"
#include "IEC61968/Metering/UsagePoint.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Location of an individual usage point.
		 */
		class UsagePointLocation : public IEC61968::Common::Location
		{

		public:
			UsagePointLocation();
			virtual ~UsagePointLocation();
			/**
			 * Method for the service person to access this usage point location. For example,
			 * a description of where to obtain a key if the facility is unmanned and secured.
			 */
			IEC61970::Base::Domain::String accessMethod;
			/**
			 * Remarks about this location.
			 */
			IEC61970::Base::Domain::String remark;
			/**
			 * Problems previously encountered when visiting or performing work at this
			 * location. Examples include: bad dog, violent customer, verbally abusive
			 * occupant, obstructions, safety hazards, etc.
			 */
			IEC61970::Base::Domain::String siteAccessProblem;
			/**
			 * All usage points at this location.
			 */
			std::list<IEC61968::Metering::UsagePoint*> UsagePoints;

		};

	}

}
#endif // USAGEPOINTLOCATION_H
