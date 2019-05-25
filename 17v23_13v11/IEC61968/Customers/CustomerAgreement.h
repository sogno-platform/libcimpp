///////////////////////////////////////////////////////////
//  CustomerAgreement.h
//  Implementation of the Class CustomerAgreement
///////////////////////////////////////////////////////////

#ifndef CUSTOMERAGREEMENT_H
#define CUSTOMERAGREEMENT_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Customers/ServiceLocation.h"
#include "IEC61968/InfIEC61968/InfCustomers/StandardIndustryCode.h"
#include "IEC61968/PaymentMetering/AuxiliaryAgreement.h"
#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61968/Common/Agreement.h"

namespace IEC61968
{
	namespace Customers
	{
		class ServiceCategory;
		class PricingStructure;
	}
}

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Agreement between the customer and the service supplier to pay for service at a
		 * specific service location. It records certain billing information about the
		 * type of service provided at the service location and is used during charge
		 * creation to determine the type of service.
		 */
		class CustomerAgreement : public IEC61968::Common::Agreement
		{

		public:
			CustomerAgreement();
			virtual ~CustomerAgreement();
			/**
			 * If true, the customer is a pre-pay customer for the specified service.
			 */
			IEC61970::Base::Domain::Boolean isPrePay;
			/**
			 * Load management code.
			 */
			IEC61970::Base::Domain::String loadMgmt;
			/**
			 * Final date and time the service will be billed to the previous customer.
			 */
			IEC61970::Base::Domain::DateTime shutOffDateTime;
			/**
			 * All service locations regulated by this customer agreement.
			 */
			std::list<IEC61968::Customers::ServiceLocation*> ServiceLocations;
			IEC61968::InfIEC61968::InfCustomers::StandardIndustryCode *StandardIndustryCode;
			/**
			 * All (non-service related) auxiliary agreements that refer to this customer
			 * agreement.
			 */
			std::list<IEC61968::PaymentMetering::AuxiliaryAgreement*> AuxiliaryAgreements;
			/**
			 * All pricing structures applicable to this customer agreement.
			 */
			std::list<IEC61968::Customers::PricingStructure*> PricingStructures;
			/**
			 * All service delivery points regulated by this customer agreement.
			 */
			std::list<IEC61968::Metering::UsagePoint*> UsagePoints;
			/**
			 * Service category for this agreement.
			 */
			IEC61968::Customers::ServiceCategory *ServiceCategory;

		};

	}

}
#endif // CUSTOMERAGREEMENT_H
