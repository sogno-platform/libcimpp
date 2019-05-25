///////////////////////////////////////////////////////////
//  VerificationAction.h
//  Implementation of the Class VerificationAction
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef VERIFICATIONACTION_H
#define VERIFICATIONACTION_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "IEC61968/Operations/SwitchingAction.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Verification of a switch position or other condition as a switching step
		 */
		class VerificationAction : public IEC61968::Operations::SwitchingAction
		{

		public:
			VerificationAction();
			virtual ~VerificationAction();
			/**
			 * freeform description of the condition to be verified
			 */
			IEC61970::Base::Domain::String verificationCondition;
			IEC61970::Base::Core::PowerSystemResource *PowerSystemResource;

		};

	}

}
#endif // VERIFICATIONACTION_H
