///////////////////////////////////////////////////////////
//  Router.h
//  Implementation of the Class Router
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef ROUTER_H
#define ROUTER_H

#include "Sinergien/Communication/NetworkNodes/RouterNode.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace NetworkNodes
		{
			class Router : public Sinergien::Communication::NetworkNodes::RouterNode
			{

			public:
				Router();
				virtual ~Router();

			};

		}

	}

}
#endif // ROUTER_H
