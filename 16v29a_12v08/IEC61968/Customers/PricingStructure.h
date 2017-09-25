///////////////////////////////////////////////////////////
//  PricingStructure.h
//  Implementation of the Class PricingStructure
///////////////////////////////////////////////////////////

#ifndef PRICINGSTRUCTURE_H
#define PRICINGSTRUCTURE_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Customers/RevenueKind.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Customers/Tariff.h"
#include "IEC61968/PaymentMetering/Transaction.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Metering{
		class UsagePoint;
	}
	namespace Customers
	{
		/**
		 * Grouping of pricing components and prices used in the creation of customer
		 * charges and the eligibility criteria under which these terms may be offered to
		 * a customer. The reasons for grouping include state, customer classification,
		 * site characteristics, classification (i.e. fee price structure, deposit price
		 * structure, electric service price structure, etc.) and accounting requirements.
		 */
		class PricingStructure : public IEC61968::Common::Document
		{

		public:
			PricingStructure();
			virtual ~PricingStructure();
			/**
			 * Unique user-allocated key for this pricing structure, used by company
			 * representatives to identify the correct price structure for allocating to a
			 * customer. For rate schedules it is often prefixed by a state code.
			 */
			IEC61970::Base::Domain::String code;
			/**
			 * Absolute maximum valid non-demand usage quantity used in validating a
			 * customer's billed non-demand usage.
			 */
			IEC61970::Base::Domain::Integer dailyCeilingUsage;
			/**
			 * Used in place of actual computed estimated average when history of usage is not
			 * available, and typically manually entered by customer accounting.
			 */
			IEC61970::Base::Domain::Integer dailyEstimatedUsage;
			/**
			 * Absolute minimum valid non-demand usage quantity used in validating a
			 * customer's billed non-demand usage.
			 */
			IEC61970::Base::Domain::Integer dailyFloorUsage;
			/**
			 * (accounting) Kind of revenue, often used to determine the grace period allowed,
			 * before collection actions are taken on a customer (grace periods vary between
			 * revenue classes).
			 */
			IEC61968::Customers::RevenueKind revenueKind;
			/**
			 * True if this pricing structure is not taxable.
			 */
			IEC61970::Base::Domain::Boolean taxExemption;
			/**
			 * All service delivery points (with prepayment meter running as a stand-alone
			 * device, with no CustomerAgreement or Customer) to which this pricing structure
			 * applies.
			 */
			std::list<IEC61968::Metering::UsagePoint*> UsagePoints;
			/**
			 * All tariffs used by this pricing structure.
			 */
			std::list<IEC61968::Customers::Tariff*> Tariffs;
			/**
			 * All transactions applying this pricing structure.
			 */
			std::list<IEC61968::PaymentMetering::Transaction*> Transactions;

		};

	}

}
#endif // PRICINGSTRUCTURE_H
