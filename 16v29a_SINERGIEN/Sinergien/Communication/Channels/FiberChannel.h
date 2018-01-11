///////////////////////////////////////////////////////////
//  FiberChannel.h
//  Implementation of the Class FiberChannel
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef FIBERCHANNEL_H
#define FIBERCHANNEL_H

#include "Sinergien/Communication/Interfaces/FiberInt.h"
#include "Sinergien/Communication/Channels/WiredChannel.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Channels
		{
			class FiberChannel : public Sinergien::Communication::Channels::WiredChannel
			{

			public:
				FiberChannel();
				virtual ~FiberChannel();
				Sinergien::Communication::Interfaces::FiberInt* endInterface1;
				Sinergien::Communication::Interfaces::FiberInt* endInterface2;

			};

		}

	}

}
#endif // FIBERCHANNEL_H
