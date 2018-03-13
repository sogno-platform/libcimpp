///////////////////////////////////////////////////////////
//  UsagePoint.h
//  Implementation of the Class UsagePoint
///////////////////////////////////////////////////////////

#ifndef USAGEPOINT_H
#define USAGEPOINT_H

#include <list>

#include "IEC61968/Metering/AmiBillingReadyKind.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Metering/UsagePointConnectedKind.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/PhaseCode.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Core/Equipment.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Metering/ServiceMultiplier.h"
#include "IEC61968/Metering/EndDevice.h"
#include "IEC61968/Customers/ServiceCategory.h"
#include "IEC61968/Common/ConfigurationEvent.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Logical or physical point in the network to which readings or events may be
		 * attributed. Used at the place where a physical or virtual meter may be located;
		 * however, it is not required that a meter be present.
		 */
		class UsagePoint : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			UsagePoint();
			virtual ~UsagePoint();
			/**
			 * Tracks the lifecycle of the metering installation at a usage point with respect
			 * to readiness for billing via advanced metering infrastructure reads.
			 */
			IEC61968::Metering::AmiBillingReadyKind amiBillingReady = IEC61968::Metering::AmiBillingReadyKind::_undef;
			/**
			 * True if as a result of an inspection or otherwise, there is a reason to suspect
			 * that a previous billing may have been performed with erroneous data. Value
			 * should be reset once this potential discrepancy has been resolved.
			 */
			IEC61970::Base::Domain::Boolean checkBilling;
			/**
			 * State of the usage point with respect to connection to the network.
			 */
			IEC61968::Metering::UsagePointConnectedKind connectionState = IEC61968::Metering::UsagePointConnectedKind::_undef;
			/**
			 * Estimated load.
			 */
			IEC61970::Base::Domain::CurrentFlow estimatedLoad;
			/**
			 * True if grounded.
			 */
			IEC61970::Base::Domain::Boolean grounded;
			/**
			 * If true, this usage point is a service delivery point, i.e., a usage point
			 * where the ownership of the service changes hands.
			 */
			IEC61970::Base::Domain::Boolean isSdp;
			/**
			 * If true, this usage point is virtual, i.e., no physical location exists in the
			 * network where a meter could be located to collect the meter readings. For
			 * example, one may define a virtual usage point to serve as an aggregation of
			 * usage for all of a company's premises distributed widely across the
			 * distribution territory. Otherwise, the usage point is physical, i.e., there is
			 * a logical point in the network where a meter could be located to collect meter
			 * readings.
			 */
			IEC61970::Base::Domain::Boolean isVirtual;
			/**
			 * If true, minimal or zero usage is expected at this usage point for situations
			 * such as premises vacancy, logical or physical disconnect. It is used for
			 * readings validation and estimation.
			 */
			IEC61970::Base::Domain::Boolean minimalUsageExpected;
			/**
			 * Nominal service voltage.
			 */
			IEC61970::Base::Domain::Voltage nominalServiceVoltage;
			/**
			 * Outage region in which this usage point is located.
			 */
			IEC61970::Base::Domain::String outageRegion;
			/**
			 * Phase code. Number of wires and specific nominal phases can be deduced from
			 * enumeration literal values. For example, ABCN is three-phase, four-wire, s12n
			 * (splitSecondary12N) is single-phase, three-wire, and s1n and s2n are single-
			 * phase, two-wire.
			 */
			IEC61970::Base::Core::PhaseCode phaseCode = IEC61970::Base::Core::PhaseCode::_undef;
			/**
			 * Current flow that this usage point is configured to deliver.
			 */
			IEC61970::Base::Domain::CurrentFlow ratedCurrent;
			/**
			 * Active power that this usage point is configured to deliver.
			 */
			IEC61970::Base::Domain::ActivePower ratedPower;
			/**
			 * Cycle day on which the meter for this usage point will normally be read.
			 * Usually correlated with the billing cycle.
			 */
			IEC61970::Base::Domain::String readCycle;
			/**
			 * Identifier of the route to which this usage point is assigned for purposes of
			 * meter reading. Typically used to configure hand held meter reading systems
			 * prior to collection of reads.
			 */
			IEC61970::Base::Domain::String readRoute;
			/**
			 * Remarks about this usage point, for example the reason for it being rated with
			 * a non-nominal priority.
			 */
			IEC61970::Base::Domain::String serviceDeliveryRemark;
			/**
			 * Priority of service for this usage point. Note that usage points at the same
			 * service location can have different priorities.
			 */
			IEC61970::Base::Domain::String servicePriority;
			/**
			 * All equipment connecting this usage point to the electrical grid.
			 */
			std::list<IEC61970::Base::Core::Equipment*> Equipments;
			/**
			 * All multipliers applied at this usage point.
			 */
			std::list<IEC61968::Metering::ServiceMultiplier*> ServiceMultipliers;
			/**
			 * All end devices at this usage point.
			 */
			std::list<IEC61968::Metering::EndDevice*> EndDevices;
			/**
			 * Service category delivered by this usage point.
			 */
			IEC61968::Customers::ServiceCategory *ServiceCategory;
			/**
			 * All configuration events created for this usage point.
			 */
			std::list<IEC61968::Common::ConfigurationEvent*> ConfigurationEvents;

		};

	}

}
#endif // USAGEPOINT_H
