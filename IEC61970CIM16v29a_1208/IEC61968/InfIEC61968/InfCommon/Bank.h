///////////////////////////////////////////////////////////
//  Bank.h
//  Implementation of the Class Bank
///////////////////////////////////////////////////////////

#ifndef BANK_H
#define BANK_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/OrganisationRole.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Organisation that is a commercial bank, agency, or other institution that
			 * offers a similar service.
			 */
			class Bank : public IEC61968::Common::OrganisationRole
			{

			public:
				Bank();
				virtual ~Bank();
				/**
				 * Bank identifier code as defined in ISO 9362; for use in countries wher IBAN is
				 * not yet in operation.
				 */
				IEC61970::Base::Domain::String bic;
				/**
				 * International bank account number defined in ISO 13616; for countries where
				 * IBAN is not in operation, the existing BIC or SWIFT codes may be used instead
				 * (see ISO 9362).
				 */
				IEC61970::Base::Domain::String iban;

			};

		}

	}

}
#endif // BANK_H
