///////////////////////////////////////////////////////////
//  FieldDispatchStep.h
//  Implementation of the Class FieldDispatchStep
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef FIELDDISPATCHSTEP_H
#define FIELDDISPATCHSTEP_H

#include "BaseClass.h"
#include "IEC61968/Common/CrewStatusKind.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Details of the step in the field dispatch history.
		 */
		class FieldDispatchStep : public BaseClass
		{

		public:
			FieldDispatchStep();
			virtual ~FieldDispatchStep();
			/**
			 * The status of one or more crews dispatched to perform field work at one or more
			 * work sites
			 */
			IEC61968::Common::CrewStatusKind dispatchStatus = IEC61968::Common::CrewStatusKind::_undef;
			/**
			 * The date and time at which the dispatch status occurred.
			 */
			IEC61970::Base::Domain::DateTime occurredDateTime;
			/**
			 * freeform comments related to the dispatch to perform field work.
			 */
			IEC61970::Base::Domain::String remarks;
			/**
			 * The sequence number of the field dispatch step within the field dispatch
			 * history.  Begins with 1 and increments up.
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;

		};

	}

}
#endif // FIELDDISPATCHSTEP_H
