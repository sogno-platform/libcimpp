///////////////////////////////////////////////////////////
//  GenericAction.h
//  Implementation of the Class GenericAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef GENERICACTION_H
#define GENERICACTION_H

#include "IEC61968/Operations/SwitchingStep.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * An arbitrary switching step.
		 */
		class GenericAction : public IEC61968::Operations::SwitchingStep
		{

		public:
			GenericAction();
			virtual ~GenericAction();

		};

	}

}
#endif // GENERICACTION_H
