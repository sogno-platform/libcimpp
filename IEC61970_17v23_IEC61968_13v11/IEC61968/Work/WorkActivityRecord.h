///////////////////////////////////////////////////////////
//  WorkActivityRecord.h
//  Implementation of the Class WorkActivityRecord
///////////////////////////////////////////////////////////

#ifndef WORKACTIVITYRECORD_H
#define WORKACTIVITYRECORD_H

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Records information about the status of work or work task at a point in time. 
		 */
		class WorkActivityRecord : public IEC61968::Common::ActivityRecord
		{

		public:
			WorkActivityRecord();
			virtual ~WorkActivityRecord();
			/**
			 * Estimated percentage of completion of this individual work task or overall work
			 * order.
			 */
			IEC61970::Base::Domain::PerCent percentComplete;

		};

	}

}
#endif // WORKACTIVITYRECORD_H
