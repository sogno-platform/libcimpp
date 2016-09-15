///////////////////////////////////////////////////////////
//  DynamicsFunctionBlock.h
//  Implementation of the Class DynamicsFunctionBlock
//  Created on:      28-Jan-2016 12:44:11
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_C551510D_5004_41b2_BB3E_BCECD7498C7C__INCLUDED_)
#define EA_C551510D_5004_41b2_BB3E_BCECD7498C7C__INCLUDED_

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
#endif // !defined(EA_C551510D_5004_41b2_BB3E_BCECD7498C7C__INCLUDED_)
