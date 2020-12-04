///////////////////////////////////////////////////////////
//  MaintenanceWorkTask.h
//  Implementation of the Class MaintenanceWorkTask
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef MAINTENANCEWORKTASK_H
#define MAINTENANCEWORKTASK_H

#include "IEC61968/Work/BreakerMaintenanceKind.h"
#include "IEC61968/Work/TransformerMaintenanceKind.h"
#include "IEC61968/Work/WorkTask.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Maintenance work task.  Costs associated with this are considered preventive
		 * maintenance (PM) costs.
		 */
		class MaintenanceWorkTask : public IEC61968::Work::WorkTask
		{

		public:
			MaintenanceWorkTask();
			virtual ~MaintenanceWorkTask();
			/**
			 * Kind of breaker maintenance performed by this maintenance work task.
			 */
			IEC61968::Work::BreakerMaintenanceKind breakerMaintenanceKind = IEC61968::Work::BreakerMaintenanceKind::_undef;
			/**
			 * Kind of transformer maintenance performed by this maintenance work task.
			 */
			IEC61968::Work::TransformerMaintenanceKind transformerMaintenanceKind = IEC61968::Work::TransformerMaintenanceKind::_undef;

		};

	}

}
#endif // MAINTENANCEWORKTASK_H
