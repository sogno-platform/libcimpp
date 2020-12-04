///////////////////////////////////////////////////////////
//  BranchGroupTerminal.h
//  Implementation of the Class BranchGroupTerminal
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef BRANCHGROUPTERMINAL_H
#define BRANCHGROUPTERMINAL_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Core/Terminal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * A specific directed terminal flow for a branch group.
			 */
			class BranchGroupTerminal : public BaseClass
			{

			public:
				BranchGroupTerminal();
				virtual ~BranchGroupTerminal();
				/**
				 * The flow into the terminal is summed if set true.   The flow out of the
				 * terminanl is summed if set false.
				 */
				IEC61970::Base::Domain::Boolean positiveFlowIn;
				/**
				 * The terminal to be summed.
				 */
				IEC61970::Base::Core::Terminal *Terminal;

			};

		}

	}

}
#endif // BRANCHGROUPTERMINAL_H
