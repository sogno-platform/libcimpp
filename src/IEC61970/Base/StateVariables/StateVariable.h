///////////////////////////////////////////////////////////
//  StateVariable.h
//  Implementation of the Class StateVariable
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef STATEVARIABLE_H
#define STATEVARIABLE_H

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
#endif // STATEVARIABLE_H
