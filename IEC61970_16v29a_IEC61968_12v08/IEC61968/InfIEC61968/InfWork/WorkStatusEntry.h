///////////////////////////////////////////////////////////
//  WorkStatusEntry.h
//  Implementation of the Class WorkStatusEntry
///////////////////////////////////////////////////////////

#ifndef WORKSTATUSENTRY_H
#define WORKSTATUSENTRY_H

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A type of ActivityRecord that records information about the status of an item,
			 * such as a Work or WorkTask, at a point in time. 
			 */
			class WorkStatusEntry : public IEC61968::Common::ActivityRecord
			{

			public:
				WorkStatusEntry();
				virtual ~WorkStatusEntry();
				/**
				 * Estimated percentage of completion of this individual work task or overall work
				 * order.
				 */
				IEC61970::Base::Domain::PerCent percentComplete;

			};

		}

	}

}
#endif // WORKSTATUSENTRY_H
