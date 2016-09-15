///////////////////////////////////////////////////////////
//  DCBaseTerminal.h
//  Implementation of the Class DCBaseTerminal
//  Created on:      28-Jan-2016 12:43:54
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_AA26E2C4_CE42_49b7_82D3_1AFE0932DAE6__INCLUDED_)
#define EA_AA26E2C4_CE42_49b7_82D3_1AFE0932DAE6__INCLUDED_

#include "IEC61970/Base/Topology/DCTopologicalNode.h"
#include "IEC61970/Base/Core/ACDCTerminal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * An electrical connection point at a piece of DC conducting equipment. DC
			 * terminals are connected at one physical DC node that may have multiple DC
			 * terminals connected. A DC node is similar to an AC connectivity node. The model
			 * enforces that DC connections are distinct from AC connections. 
			 */
			class DCBaseTerminal : public IEC61970::Base::Core::ACDCTerminal
			{

			public:
				DCBaseTerminal();
				virtual ~DCBaseTerminal();
				/**
				 * See association end Terminal.TopologicalNode.
				 */
				IEC61970::Base::Topology::DCTopologicalNode *DCTopologicalNode;

			};

		}

	}

}
#endif // !defined(EA_AA26E2C4_CE42_49b7_82D3_1AFE0932DAE6__INCLUDED_)
