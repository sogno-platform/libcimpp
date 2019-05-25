///////////////////////////////////////////////////////////
//  OutagePlan.h
//  Implementation of the Class OutagePlan
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OUTAGEPLAN_H
#define OUTAGEPLAN_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Operations/OutageOrder.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Operations
	{
		class PlannedOutage;
	}
}

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Document containing the definition of planned outages of equipment and/or usage
		 * points. It will reference switching plans that are used to execute the planned
		 * outage.
		 */
		class OutagePlan : public IEC61968::Common::Document
		{

		public:
			OutagePlan();
			virtual ~OutagePlan();
			/**
			 * The date and time the outage plan was approved
			 */
			IEC61970::Base::Domain::DateTime approvedDateTime;
			/**
			 * Date and Time the planned outage was canceled.
			 */
			IEC61970::Base::Domain::DateTime cancelledDateTime;
			/**
			 * planned start and end time of the planned outage.
			 */
			IEC61970::Base::Domain::DateTimeInterval plannedPeriod;
			/**
			 * Purpose of  this outage plan, such as whether it is to replace equipment or
			 * perform maintenance or repairs or to reconfigure network topology.
			 */
			IEC61970::Base::Domain::String purpose;
			IEC61968::Operations::OutageOrder *OutageOrder;
			/**
			 * The outage resulting from the execution of the outage plan.
			 */
			IEC61968::Operations::PlannedOutage *PlannedOutage;

		};

	}

}
#endif // OUTAGEPLAN_H
