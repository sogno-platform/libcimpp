///////////////////////////////////////////////////////////
//  GenericAction.h
//  Implementation of the Class GenericAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef GENERICACTION_H
#define GENERICACTION_H

#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "IEC61968/Operations/SwitchingAction.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * An arbitrary switching step.
		 */
		class GenericAction : public IEC61968::Operations::SwitchingAction
		{

		public:
			GenericAction();
			virtual ~GenericAction();
			IEC61970::Base::Core::PowerSystemResource *PowerSystemResource;

		};

	}

}
#endif // GENERICACTION_H
