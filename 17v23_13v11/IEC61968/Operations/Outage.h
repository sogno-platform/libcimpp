///////////////////////////////////////////////////////////
//  Outage.h
//  Implementation of the Class Outage
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef OUTAGE_H
#define OUTAGE_H

#include <list>

#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Operations/OutageStatusKind.h"
#include "IEC61968/Common/CrewStatusKind.h"
#include "IEC61968/Operations/ServicePointOutageSummary.h"
#include "IEC61970/Base/Faults/Fault.h"
#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61970/Base/Wires/Switch.h"
#include "IEC61970/Base/Core/Equipment.h"
#include "IEC61968/Operations/SwitchAction.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Common/Crew.h"

namespace IEC61968
{
	namespace Operations
	{
		class Outage : public IEC61968::Common::Document
		{

		public:
			Outage();
			virtual ~Outage();
			IEC61970::Base::Domain::DateTimeInterval actualPeriod;
			IEC61970::Base::Domain::String communityDescriptor;
			IEC61970::Base::Domain::Integer customersRestored;
			IEC61970::Base::Domain::DateTimeInterval estimatedPeriod;
			IEC61970::Base::Domain::Integer metersAffected;
			IEC61970::Base::Domain::Integer originalCustomersServed;
			IEC61970::Base::Domain::Integer originalMetersAffected;
			/**
			 * Defines if the outage has been verified or is only estimated.
			 */
			IEC61968::Operations::OutageStatusKind outageKind = IEC61968::Operations::OutageStatusKind::_undef;
			IEC61968::Common::CrewStatusKind statusKind = IEC61968::Common::CrewStatusKind::_undef;
			IEC61968::Operations::ServicePointOutageSummary summary;
			IEC61970::Base::Domain::String utilityDisclaimer;
			/**
			 * All faults involved in this outage.
			 */
			std::list<IEC61970::Base::Faults::Fault*> Faults;
			/**
			 * all deenergized useage points associated with the outage. 
			 */
			std::list<IEC61968::Metering::UsagePoint*> DeEnergizedUsagePoint;
			/**
			 * All potentially open switches causing this outage. This realationship is meant
			 * to be used as "indication" for initiation of outage-related business processes,
			 * whereas for actual actions of switches, SwitchAction-Switch relationship should
			 * be used.
			 */
			std::list<IEC61970::Base::Wires::Switch*> OpenedSwitches;
			/**
			 * All equipments associated with this outage.
			 */
			std::list<IEC61970::Base::Core::Equipment*> Equipments;
			/**
			 * All energized usage points associated with this outage.
			 */
			std::list<IEC61968::Metering::UsagePoint*> EnergizedUsagePoint;
			/**
			 * All switch actions to apply within the scope of this planned outage. Each such
			 * action groups switches to which the action is to apply in order to produce the
			 * desired network state considered as outage.
			 */
			std::list<IEC61968::Operations::SwitchAction*> PlannedSwitchActions;
			std::list<IEC61968::Common::Crew*> Crew;

		};

	}

}
#endif // OUTAGE_H
