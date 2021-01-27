///////////////////////////////////////////////////////////
//  SwitchingOrder.h
//  Implementation of the Class SwitchingOrder
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef SWITCHINGORDER_H
#define SWITCHINGORDER_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Operations/SwitchingPlan.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Transmits a switching plan to a crew in order for the plan to be executed.
		 */
		class SwitchingOrder : public IEC61968::Common::Document
		{

		public:
			SwitchingOrder();
			virtual ~SwitchingOrder();
			/**
			 * Free-form comment associated with the switching order.
			 */
			IEC61970::Base::Domain::String comment;
			/**
			 * The planned start and end time for the switching order. 
			 */
			IEC61970::Base::Domain::DateTimeInterval plannedExecutionInterval;
			IEC61968::Operations::SwitchingPlan *SwitchingPlan;

		};

	}

}
#endif // SWITCHINGORDER_H
