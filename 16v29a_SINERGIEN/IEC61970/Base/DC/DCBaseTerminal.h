///////////////////////////////////////////////////////////
//  DCBaseTerminal.h
//  Implementation of the Class DCBaseTerminal
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCBASETERMINAL_H
#define DCBASETERMINAL_H

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
#endif // DCBASETERMINAL_H
