///////////////////////////////////////////////////////////
//  DCTopologicalNode.h
//  Implementation of the Class DCTopologicalNode
//  Created on:      28-Jan-2016 12:44:02
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_9E9B4C59_1F81_4484_BC39_223A7C8924C8__INCLUDED_)
#define EA_9E9B4C59_1F81_4484_BC39_223A7C8924C8__INCLUDED_

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Topology
		{
			/**
			 * DC bus.
			 */
			class DCTopologicalNode : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DCTopologicalNode();
				virtual ~DCTopologicalNode();

			};

		}

	}

}
#endif // !defined(EA_9E9B4C59_1F81_4484_BC39_223A7C8924C8__INCLUDED_)
