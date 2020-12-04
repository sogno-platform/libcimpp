///////////////////////////////////////////////////////////
//  ClearanceAction.h
//  Implementation of the Class ClearanceAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CLEARANCEACTION_H
#define CLEARANCEACTION_H

#include "IEC61968/Operations/ClearanceActionKind.h"
#include "IEC61968/Operations/SwitchingStep.h"
#include "IEC61968/Operations/ClearanceDocument.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Action on clearance document as a switching step.
		 */
		class ClearanceAction : public IEC61968::Operations::SwitchingStep
		{

		public:
			ClearanceAction();
			virtual ~ClearanceAction();
			/**
			 * Clearance action to perform.
			 */
			IEC61968::Operations::ClearanceActionKind kind = IEC61968::Operations::ClearanceActionKind::_undef;
			/**
			 * Clearance associated with this clearance action.
			 */
			IEC61968::Operations::ClearanceDocument *Clearance;

		};

	}

}
#endif // CLEARANCEACTION_H
