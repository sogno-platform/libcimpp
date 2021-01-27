///////////////////////////////////////////////////////////
//  FieldDispatchHistory.h
//  Implementation of the Class FieldDispatchHistory
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef FIELDDISPATCHHISTORY_H
#define FIELDDISPATCHHISTORY_H

#include <list>

#include "IEC61968/Operations/UnplannedOutage.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Operations/PlannedOutage.h"
#include "IEC61968/Common/Crew.h"
#include "IEC61968/Common/FieldDispatchStep.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * The history of field dispatch statuses for this work.
		 */
		class FieldDispatchHistory : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			FieldDispatchHistory();
			virtual ~FieldDispatchHistory();
			IEC61968::Operations::UnplannedOutage *UnplannedOutage;
			IEC61968::Operations::PlannedOutage *PlannedOutage;
			IEC61968::Common::Crew *Crew;
			std::list<IEC61968::Common::FieldDispatchStep*> FieldDispatchStep;

		};

	}

}
#endif // FIELDDISPATCHHISTORY_H
