///////////////////////////////////////////////////////////
//  AccessPoint.h
//  Implementation of the Class AccessPoint
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef ACCESSPOINT_H
#define ACCESSPOINT_H

#include "Sinergien/Communication/NetworkNodes/RouterNode.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace NetworkNodes
		{
			class AccessPoint : public Sinergien::Communication::NetworkNodes::RouterNode
			{

			public:
				AccessPoint();
				virtual ~AccessPoint();

			};

		}

	}

}
#endif // ACCESSPOINT_H
