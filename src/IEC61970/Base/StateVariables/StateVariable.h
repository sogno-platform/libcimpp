///////////////////////////////////////////////////////////
//  StateVariable.h
//  Implementation of the Class StateVariable
//  Created on:      28-Jan-2016 12:46:46
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_3585C506_801F_4aeb_9AAC_417B44D88F52__INCLUDED_)
#define EA_3585C506_801F_4aeb_9AAC_417B44D88F52__INCLUDED_

#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace StateVariables
		{
			/**
			 * An abstract class for state variables.
			 */
			class StateVariable : public BaseClass
			{

			public:
				StateVariable();
				virtual ~StateVariable();

			};

		}

	}

}
#endif // !defined(EA_3585C506_801F_4aeb_9AAC_417B44D88F52__INCLUDED_)
