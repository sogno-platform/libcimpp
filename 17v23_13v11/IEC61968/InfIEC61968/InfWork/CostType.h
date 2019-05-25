///////////////////////////////////////////////////////////
//  CostType.h
//  Implementation of the Class CostType
///////////////////////////////////////////////////////////

#ifndef COSTTYPE_H
#define COSTTYPE_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/WorkCostDetail.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpJournalEntry.h"
#include "IEC61968/InfIEC61968/InfWork/CompatibleUnit.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A categorization for resources, often costs, in accounting transactions.
			 * Examples include: material components, building in service, coal sales,
			 * overhead, etc.
			 */
			class CostType : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				CostType();
				virtual ~CostType();
				/**
				 * True if an amount can be assigned to the resource element (e.g., building in
				 * service, transmission plant, software development capital); false otherwise (e.
				 * g., internal labor, material components).
				 */
				IEC61970::Base::Domain::Boolean amountAssignable;
				/**
				 * A codified representation of the resource element.
				 */
				IEC61970::Base::Domain::String code;
				/**
				 * The level of the resource element in the hierarchy of resource elements
				 * (recursive relationship).
				 */
				IEC61970::Base::Domain::String level;
				/**
				 * The stage for which this costType applies: estimated design, estimated actual
				 * or actual actual. 
				 */
				IEC61970::Base::Domain::String stage;
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::CostType*> ChildCostTypes;
				std::list<IEC61968::InfIEC61968::InfWork::WorkCostDetail*> WorkCostDetails;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*> ErpJournalEntries;
				std::list<IEC61968::InfIEC61968::InfWork::CompatibleUnit*> CompatibleUnits;

			};

		}

	}

}
#endif // COSTTYPE_H
