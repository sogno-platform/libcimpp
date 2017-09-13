///////////////////////////////////////////////////////////
//  Incident.h
//  Implementation of the Class Incident
///////////////////////////////////////////////////////////

#ifndef INCIDENT_H
#define INCIDENT_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Operations/Outage.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Work/Work.h"
#include "IEC61968/Customers/IncidentHazard.h"
#include "IEC61968/Common/Operator.h"
#include "IEC61968/Customers/CustomerNotification.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Description of a problem in the field that may be reported in a trouble ticket
		 * or come from another source. It may have to do with an outage.
		 */
		class Incident : public IEC61968::Common::Document
		{

		public:
			Incident();
			virtual ~Incident();
			/**
			 * Cause of this incident.
			 */
			IEC61970::Base::Domain::String cause;
			/**
			 * Outage for this incident.
			 */
			IEC61968::Operations::Outage *Outage;
			/**
			 * All works addressing this incident.
			 */
			std::list<IEC61968::Work::Work*> Works;
			/**
			 * All hazards associated with this incident.
			 */
			std::list<IEC61968::Customers::IncidentHazard*> Hazards;
			/**
			 * Operator who owns this incident.
			 */
			IEC61968::Common::Operator *Owner;
			/**
			 * All notifications for a customer related to the status change of this incident.
			 */
			std::list<IEC61968::Customers::CustomerNotification*> CustomerNotifications;

		};

	}

}
#endif // INCIDENT_H
