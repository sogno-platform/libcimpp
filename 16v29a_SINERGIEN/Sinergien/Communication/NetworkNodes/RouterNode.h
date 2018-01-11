///////////////////////////////////////////////////////////
//  RouterNode.h
//  Implementation of the Class RouterNode
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef ROUTERNODE_H
#define ROUTERNODE_H

#include "Sinergien/Communication/NetworkNodes/BackboneNode.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace NetworkNodes
		{
			class RouterNode : public Sinergien::Communication::NetworkNodes::BackboneNode
			{

			public:
				RouterNode();
				virtual ~RouterNode();

			};

		}

	}

}
#endif // ROUTERNODE_H
