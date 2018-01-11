///////////////////////////////////////////////////////////
//  ServiceSupplier.h
//  Implementation of the Class ServiceSupplier
///////////////////////////////////////////////////////////

#ifndef SERVICESUPPLIER_H
#define SERVICESUPPLIER_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/PaymentMetering/SupplierKind.h"
#include "IEC61968/InfIEC61968/InfCommon/BankAccount.h"
#include "IEC61968/Common/OrganisationRole.h"
#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61968/Customers/CustomerAgreement.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Organisation that provides services to customers.
		 */
		class ServiceSupplier : public IEC61968::Common::OrganisationRole
		{

		public:
			ServiceSupplier();
			virtual ~ServiceSupplier();
			/**
			 * Unique transaction reference prefix number issued to an entity by the
			 * International Organization for Standardization for the purpose of tagging onto
			 * electronic financial transactions, as defined in ISO/IEC 7812-1 and ISO/IEC
			 * 7812-2.
			 */
			IEC61970::Base::Domain::String issuerIdentificationNumber;
			/**
			 * Kind of supplier.
			 */
			IEC61968::PaymentMetering::SupplierKind kind = IEC61968::PaymentMetering::SupplierKind::_undef;
			/**
			 * All BackAccounts this ServiceSupplier owns.
			 */
			std::list<IEC61968::InfIEC61968::InfCommon::BankAccount*> BankAccounts;
			/**
			 * All usage points this service supplier utilises to deliver a service.
			 */
			std::list<IEC61968::Metering::UsagePoint*> UsagePoints;
			/**
			 * All customer agreements of this service supplier.
			 */
			std::list<IEC61968::Customers::CustomerAgreement*> CustomerAgreements;

		};

	}

}
#endif // SERVICESUPPLIER_H
