///////////////////////////////////////////////////////////
//  BranchGroup.h
//  Implementation of the Class BranchGroup
//  Created on:      28-Jan-2016 12:43:28
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_DBF35F52_797E_4613_9106_F4B88E5018B2__INCLUDED_)
#define EA_DBF35F52_797E_4613_9106_F4B88E5018B2__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/OperationalLimits/BranchGroupTerminal.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * A group of branch terminals whose directed flow summation is to be monitored. A
			 * branch group need not form a cutset of the network.
			 */
			class BranchGroup : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BranchGroup();
				virtual ~BranchGroup();
				/**
				 * The maximum active power flow.
				 */
				IEC61970::Base::Domain::ActivePower maximumActivePower;
				/**
				 * The maximum reactive power flow.
				 */
				IEC61970::Base::Domain::ReactivePower maximumReactivePower;
				/**
				 * The minimum active power flow.
				 */
				IEC61970::Base::Domain::ActivePower minimumActivePower;
				/**
				 * The minimum reactive power flow.
				 */
				IEC61970::Base::Domain::ReactivePower minimumReactivePower;
				/**
				 * Monitor the active power flow.
				 */
				IEC61970::Base::Domain::Boolean monitorActivePower;
				/**
				 * Monitor the reactive power flow.
				 */
				IEC61970::Base::Domain::Boolean monitorReactivePower;
				/**
				 * The directed branch group terminals to be summed.
				 */
				std::list<IEC61970::Base::OperationalLimits::BranchGroupTerminal*> BranchGroupTerminal;

			};

		}

	}

}
#endif // !defined(EA_DBF35F52_797E_4613_9106_F4B88E5018B2__INCLUDED_)
