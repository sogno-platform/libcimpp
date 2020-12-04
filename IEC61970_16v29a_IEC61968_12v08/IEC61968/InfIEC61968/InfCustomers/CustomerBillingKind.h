///////////////////////////////////////////////////////////
//  CustomerBillingKind.h
//  Implementation of the Class CustomerBillingKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CUSTOMERBILLINGKIND_H
#define CUSTOMERBILLINGKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCustomers
		{
			/**
			 * Kind of customer billing.
			 */
			enum class CustomerBillingKind
			{
				/**
				 * Consolidated bill from energy service supplier (ESS).
				 */
				 _undef = -1, 	consolidatedEss,
				/**
				 * Consolidated bill from utility distribution company (UDC).
				 */
				consolidatedUdc,
				/**
				 * Separate bills from ESS and UDC.
				 */
				separateEssUdc,
				other
			};

		}

	}

}
#endif // CUSTOMERBILLINGKIND_H
