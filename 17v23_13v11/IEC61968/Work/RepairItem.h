///////////////////////////////////////////////////////////
//  RepairItem.h
//  Implementation of the Class RepairItem
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef REPAIRITEM_H
#define REPAIRITEM_H

#include "BaseClass.h"
#include <list>

#include "IEC61968/Work/BreakerRepairItemKind.h"
#include "IEC61968/Work/TransformerRepairItemKind.h"
#include "IEC61968/Work/RepairWorkTask.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Asset component to be repaired or problem area to be corrected.
		 */
		class RepairItem : public BaseClass
		{

		public:
			RepairItem();
			virtual ~RepairItem();
			/**
			 * Breaker component or problem area which is the focus of this maintenance work
			 * task (for work tasks related to breakers only).
			 */
			IEC61968::Work::BreakerRepairItemKind breakerRepairItem = IEC61968::Work::BreakerRepairItemKind::_undef;
			/**
			 * Transformer component or problem area which is the focus of this maintenance
			 * work task (for work tasks related to transformers only).
			 */
			IEC61968::Work::TransformerRepairItemKind transformerRepairItem = IEC61968::Work::TransformerRepairItemKind::_undef;
			/**
			 * Repair work task under which breaker item of this type is repaired.
			 */
			std::list<IEC61968::Work::RepairWorkTask*> RepairWorkTask;

		};

	}

}
#endif // REPAIRITEM_H
