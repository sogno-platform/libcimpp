///////////////////////////////////////////////////////////
//  Outage.h
//  Implementation of the Class Outage
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OUTAGE_H
#define OUTAGE_H

#include <list>

#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Operations/ServicePointOutageSummary.h"
#include "IEC61970/Base/Wires/Switch.h"
#include "IEC61968/Common/Document.h"
#include "IEC61970/Base/Faults/Fault.h"
#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61970/Base/Core/Equipment.h"
#include "IEC61968/Operations/SwitchAction.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Document describing details of an active or planned outage in a part of the
		 * electrical network.
		 * A non-planned outage may be created upon:
		 * - a breaker trip,
		 * - a fault indicator status change,
		 * - a meter event indicating customer outage,
		 * - a reception of one or more customer trouble calls, or
		 * - an operator command, reflecting information obtained from the field crew.
		 * Outage restoration may be performed using a switching plan which complements
		 * the outage information with detailed switching activities, including the
		 * relationship to the crew and work.
		 * A planned outage may be created upon:
		 * - a request for service, maintenance or construction work in the field, or
		 * - an operator-defined outage for what-if/contingency network analysis.
		 */
		class Outage : public IEC61968::Common::Document
		{

		public:
			Outage();
			virtual ~Outage();
			/**
			 * Actual outage period; end of the period corresponds to the actual restoration
			 * time.
			 */
			IEC61970::Base::Domain::DateTimeInterval actualPeriod;
			/**
			 * Date and time planned outage has been cancelled.
			 */
			IEC61970::Base::Domain::DateTime cancelledDateTime;
			/**
			 * One or more causes of this outage.
			 * Note: At present, this is a free text; could be replaced with a separate
			 * associated class in case we have multiple causes (e.g. OutageCauseType,
			 * inheriting from IdentifiedObject).
			 */
			IEC61970::Base::Domain::String cause;
			/**
			 * Estimated outage period. The start of the period makes sense in case of a
			 * planned outage only, whereas the end of the period corresponds to the estimated
			 * restoration time in general.
			 */
			IEC61970::Base::Domain::DateTimeInterval estimatedPeriod;
			/**
			 * True if planned, false otherwise (for example due to a breaker trip).
			 */
			IEC61970::Base::Domain::Boolean isPlanned;
			/**
			 * Summary counts of service points (customers) affected by this outage.
			 */
			IEC61968::Operations::ServicePointOutageSummary summary;
			/**
			 * All potentially open switches causing this outage. This realationship is meant
			 * to be used as "indication" for initiation of outage-related business processes,
			 * whereas for actual actions of switches, SwitchAction-Switch relationship should
			 * be used.
			 */
			std::list<IEC61970::Base::Wires::Switch*> OpenedSwitches;
			/**
			 * All faults involved in this outage.
			 */
			std::list<IEC61970::Base::Faults::Fault*> Faults;
			/**
			 * All usage points associated with this outage.
			 */
			std::list<IEC61968::Metering::UsagePoint*> UsagePoints;
			/**
			 * All equipments associated with this outage.
			 */
			std::list<IEC61970::Base::Core::Equipment*> Equipments;
			/**
			 * All switch actions to apply within the scope of this planned outage. Each such
			 * action groups switches to which the action is to apply in order to produce the
			 * desired network state considered as outage.
			 */
			std::list<IEC61968::Operations::SwitchAction*> PlannedSwitchActions;

		};

	}

}
#endif // OUTAGE_H
