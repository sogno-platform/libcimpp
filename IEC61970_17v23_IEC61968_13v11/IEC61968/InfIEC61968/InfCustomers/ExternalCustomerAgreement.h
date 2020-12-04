///////////////////////////////////////////////////////////
//  ExternalCustomerAgreement.h
//  Implementation of the Class ExternalCustomerAgreement
///////////////////////////////////////////////////////////

#ifndef EXTERNALCUSTOMERAGREEMENT_H
#define EXTERNALCUSTOMERAGREEMENT_H

#include "IEC61968/Common/Agreement.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCustomers
		{
			/**
			 * A type of customer agreement involving an external agency. For example, a
			 * customer may form a contracts with an Energy Service Supplier if Direct Access
			 * is permitted.
			 */
			class ExternalCustomerAgreement : public IEC61968::Common::Agreement
			{

			public:
				ExternalCustomerAgreement();
				virtual ~ExternalCustomerAgreement();

			};

		}

	}

}
#endif // EXTERNALCUSTOMERAGREEMENT_H
