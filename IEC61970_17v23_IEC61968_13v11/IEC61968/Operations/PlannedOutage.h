///////////////////////////////////////////////////////////
//  PlannedOutage.h
//  Implementation of the Class PlannedOutage
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef PLANNEDOUTAGE_H
#define PLANNEDOUTAGE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Operations/Outage.h"

namespace IEC61968
{
	namespace Operations
	{
		class PlannedOutage : public IEC61968::Operations::Outage
		{

		public:
			PlannedOutage();
			virtual ~PlannedOutage();
			/**
			 * The reason for the planned outage.
			 */
			IEC61970::Base::Domain::String reason;

		};

	}

}
#endif // PLANNEDOUTAGE_H
