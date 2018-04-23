///////////////////////////////////////////////////////////
//  WLANChannel.h
//  Implementation of the Class WLANChannel
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WLANCHANNEL_H
#define WLANCHANNEL_H

#include "Sinergien/Communication/Interfaces/WLANInt.h"
#include "Sinergien/Communication/Channels/WirelessChannel.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Channels
		{
			class WLANChannel : public Sinergien::Communication::Channels::WirelessChannel
			{

			public:
				WLANChannel();
				virtual ~WLANChannel();
				Sinergien::Communication::Interfaces::WLANInt* endInterface1;
				Sinergien::Communication::Interfaces::WLANInt* endInterface2;

			};

		}

	}

}
#endif // WLANCHANNEL_H
