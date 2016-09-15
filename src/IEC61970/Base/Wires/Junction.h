///////////////////////////////////////////////////////////
//  Junction.h
//  Implementation of the Class Junction
//  Created on:      28-Jan-2016 12:45:31
///////////////////////////////////////////////////////////

#if !defined(EA_D6BD3342_707C_409b_9F45_6F5B0A19A917__INCLUDED_)
#define EA_D6BD3342_707C_409b_9F45_6F5B0A19A917__INCLUDED_

#include "IEC61970/Base/Wires/Connector.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A point where one or more conducting equipments are connected with zero
			 * resistance.
			 */
			class Junction : public IEC61970::Base::Wires::Connector
			{

			public:
				Junction();
				virtual ~Junction();

			};

		}

	}

}
#endif // !defined(EA_D6BD3342_707C_409b_9F45_6F5B0A19A917__INCLUDED_)
