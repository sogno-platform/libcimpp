///////////////////////////////////////////////////////////
//  WiredChannel.h
//  Implementation of the Class WiredChannel
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WIREDCHANNEL_H
#define WIREDCHANNEL_H

#include "Sinergien/Communication/Channels/CommChannel.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Channels
		{
			class WiredChannel : public Sinergien::Communication::Channels::CommChannel
			{

			public:
				WiredChannel();
				virtual ~WiredChannel();

			};

		}

	}

}
#endif // WIREDCHANNEL_H
