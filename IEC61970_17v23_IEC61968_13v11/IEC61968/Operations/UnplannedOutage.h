///////////////////////////////////////////////////////////
//  UnplannedOutage.h
//  Implementation of the Class UnplannedOutage
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef UNPLANNEDOUTAGE_H
#define UNPLANNEDOUTAGE_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Operations/OutageCauseKind.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Customers/TroubleTicket.h"
#include "IEC61968/Operations/Outage.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Document describing the consequence of an unplanned outage in a part of the
		 * electrical network. For the purposes of this model, an unplanned outage refers
		 * to a state where energy is not delivered; such as, customers out of service, a
		 * street light is not served, etc.
		 * A unplanned outage may be created upon:
		 * - impacts the SAIDI calculation
		 * - a breaker trip,
		 * - a fault indicator status change,
		 * - a meter event indicating customer outage,
		 * - a reception of one or more customer trouble calls, or
		 * - an operator command, reflecting information obtained from the field crew.
		 * Outage restoration may be performed using a switching plan which complements
		 * the outage information with detailed switching activities, including the
		 * relationship to the crew and work.
		 */
		class UnplannedOutage : public IEC61968::Operations::Outage
		{

		public:
			UnplannedOutage();
			virtual ~UnplannedOutage();
			/**
			 * The cause of this outage.  This is the cause that is used to present to
			 * external entities.  That is, the cause is weather, equipment failure, etc.
			 * 
			 * Note: At present, this is a free text; could be replaced with a separate
			 * associated class in case we have multiple causes (e.g. OutageCauseType,
			 * inheriting from IdentifiedObject).
			 */
			IEC61970::Base::Domain::String cause;
			IEC61968::Operations::OutageCauseKind causeKind = IEC61968::Operations::OutageCauseKind::_undef;
			/**
			 * The earliest start time of the Outage - as reported by some system or individual
			 */
			IEC61970::Base::Domain::DateTime reportedStartTime;
			std::list<IEC61968::Customers::TroubleTicket*> TroubleTicket;

		};

	}

}
#endif // UNPLANNEDOUTAGE_H
