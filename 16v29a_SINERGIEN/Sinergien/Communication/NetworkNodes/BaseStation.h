///////////////////////////////////////////////////////////
//  BaseStation.h
//  Implementation of the Class BaseStation
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef BASESTATION_H
#define BASESTATION_H

#include "Sinergien/Communication/NetworkNodes/RouterNode.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace NetworkNodes
		{
			class BaseStation : public Sinergien::Communication::NetworkNodes::RouterNode
			{

			public:
				BaseStation();
				virtual ~BaseStation();

			};

		}

	}

}
#endif // BASESTATION_H
