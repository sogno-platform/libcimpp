///////////////////////////////////////////////////////////
//  WorkCostDetail.h
//  Implementation of the Class WorkCostDetail
///////////////////////////////////////////////////////////

#ifndef WORKCOSTDETAIL_H
#define WORKCOSTDETAIL_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/InfIEC61968/InfWork/WorkCostSummary.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpProjectAccounting.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"
#include "IEC61968/InfIEC61968/InfWork/PropertyUnit.h"
#include "IEC61968/InfIEC61968/InfWork/OldWorkTask.h"
#include "IEC61968/InfIEC61968/InfWork/ContractorItem.h"
#include "IEC61968/Work/Work.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A collection of all of the individual cost items collected from multiple
			 * sources.
			 */
			class WorkCostDetail : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				WorkCostDetail();
				virtual ~WorkCostDetail();
				/**
				 * Amount in designated currency for work, either a total or an individual element.
				 * As defined in the attribute "type," multiple instances are applicable to each
				 * work for: planned cost, actual cost, authorized cost, budgeted cost, forecasted
				 * cost, other.
				 */
				IEC61970::Base::Domain::Money amount;
				/**
				 * True if 'amount' is a debit, false if it is a credit.
				 */
				IEC61970::Base::Domain::Boolean isDebit;
				/**
				 * Date and time that 'amount' is posted to the work.
				 */
				IEC61970::Base::Domain::DateTime transactionDateTime;
				IEC61968::InfIEC61968::InfWork::WorkCostSummary *WorkCostSummary;
				IEC61968::InfIEC61968::InfERPSupport::ErpProjectAccounting *ErpProjectAccounting;
				std::list<IEC61968::InfIEC61968::InfWork::PropertyUnit*> PropertyUnits;
				IEC61968::InfIEC61968::InfWork::OldWorkTask *WorkTask;
				std::list<IEC61968::InfIEC61968::InfWork::ContractorItem*> ContractorItems;
				std::list<IEC61968::Work::Work*> Works;

			};

		}

	}

}
#endif // WORKCOSTDETAIL_H
