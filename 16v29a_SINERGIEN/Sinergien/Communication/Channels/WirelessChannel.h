///////////////////////////////////////////////////////////
//  WirelessChannel.h
//  Implementation of the Class WirelessChannel
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WIRELESSCHANNEL_H
#define WIRELESSCHANNEL_H

#include "Sinergien/Communication/Channels/CommChannel.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Channels
		{
			class WirelessChannel : public Sinergien::Communication::Channels::CommChannel
			{

			public:
				WirelessChannel();
				virtual ~WirelessChannel();

			};

		}

	}

}
#endif // WIRELESSCHANNEL_H
