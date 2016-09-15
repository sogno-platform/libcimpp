///////////////////////////////////////////////////////////
//  BranchGroupTerminal.h
//  Implementation of the Class BranchGroupTerminal
//  Created on:      28-Jan-2016 12:43:29
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_3FE4FA9F_BC99_4eab_819B_1F5FA152FE39__INCLUDED_)
#define EA_3FE4FA9F_BC99_4eab_819B_1F5FA152FE39__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Core/Terminal.h"
#include "BaseClass.h"

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
#endif // !defined(EA_3FE4FA9F_BC99_4eab_819B_1F5FA152FE39__INCLUDED_)
