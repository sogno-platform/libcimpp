///////////////////////////////////////////////////////////
//  ContractorItem.h
//  Implementation of the Class ContractorItem
///////////////////////////////////////////////////////////

#ifndef CONTRACTORITEM_H
#define CONTRACTORITEM_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPayable.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Contractor information for work task.
			 */
			class ContractorItem : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				ContractorItem();
				virtual ~ContractorItem();
				/**
				 * Activity code identifies a specific and distinguishable unit of work.
				 */
				IEC61970::Base::Domain::String activityCode;
				/**
				 * The amount that a given contractor will charge for performing this unit of work.
				 */
				IEC61970::Base::Domain::Money bidAmount;
				/**
				 * The total amount charged.
				 */
				IEC61970::Base::Domain::Money cost;
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpPayable*> ErpPayables;

			};

		}

	}

}
#endif // CONTRACTORITEM_H
