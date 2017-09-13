///////////////////////////////////////////////////////////
//  OldWorkTask.h
//  Implementation of the Class OldWorkTask
///////////////////////////////////////////////////////////

#ifndef OLDWORKTASK_H
#define OLDWORKTASK_H

#include <list>

#include "IEC61968/InfIEC61968/InfWork/OverheadCost.h"
#include "IEC61968/InfIEC61968/InfWork/QualificationRequirement.h"
#include "IEC61968/InfIEC61968/InfWork/Usage.h"
#include "IEC61968/Work/WorkTask.h"
#include "IEC61968/InfIEC61968/InfWork/ContractorItem.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A set of tasks is required to implement a design.
			 */
			class LaborItem;
			class MiscCostItem;
			class OldWorkTask : public IEC61968::Work::WorkTask
			{

			public:
				OldWorkTask();
				virtual ~OldWorkTask();
				IEC61968::InfIEC61968::InfWork::OverheadCost *OverheadCost;
				std::list<IEC61968::InfIEC61968::InfWork::QualificationRequirement*> QualificationRequirements;
				std::list<IEC61968::InfIEC61968::InfWork::Usage*> Usages;
				std::list<IEC61968::InfIEC61968::InfWork::MiscCostItem*> MiscCostItems;
				std::list<IEC61968::InfIEC61968::InfWork::LaborItem*> LaborItems;
				std::list<IEC61968::InfIEC61968::InfWork::ContractorItem*> ContractorItems;

			};

		}

	}

}
#endif // OLDWORKTASK_H
