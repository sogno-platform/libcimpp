///////////////////////////////////////////////////////////
//  OperationalUpdatedRating.h
//  Implementation of the Class OperationalUpdatedRating
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OPERATIONALUPDATEDRATING_H
#define OPERATIONALUPDATEDRATING_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Operations/OperationalRestriction.h"
#include "IEC61968/Operations/Outage.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Lowered capability because of deterioration or inadequacy (sometimes referred
		 * to as derating or partial outage) or other kind of operational rating change.
		 */
		class OperationalUpdatedRating : public IEC61968::Operations::OperationalRestriction
		{

		public:
			OperationalUpdatedRating();
			virtual ~OperationalUpdatedRating();
			/**
			 * Type of operational updated rating, e.g. a derate, a rerate or a return to
			 * normal.
			 */
			IEC61970::Base::Domain::String changeType;
			/**
			 * Planned equipment outage with this updated rating.
			 */
			IEC61968::Operations::Outage *PlannedOutage;

		};

	}

}
#endif // OPERATIONALUPDATEDRATING_H
