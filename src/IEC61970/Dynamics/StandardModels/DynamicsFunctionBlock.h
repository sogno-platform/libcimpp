///////////////////////////////////////////////////////////
//  DynamicsFunctionBlock.h
//  Implementation of the Class DynamicsFunctionBlock
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef DYNAMICSFUNCTIONBLOCK_H
#define DYNAMICSFUNCTIONBLOCK_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			/**
			 * Abstract parent class for all Dynamics function blocks.
			 */
			class DynamicsFunctionBlock : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DynamicsFunctionBlock();
				virtual ~DynamicsFunctionBlock();
				/**
				 * Function block used indicator.
				 * true = use of function block is enabled
				 * false = use of function block is disabled.
				 */
				IEC61970::Base::Domain::Boolean enabled;

			};

		}

	}

}
#endif // DYNAMICSFUNCTIONBLOCK_H
