///////////////////////////////////////////////////////////
//  BPLCChannel.h
//  Implementation of the Class BPLCChannel
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef BPLCCHANNEL_H
#define BPLCCHANNEL_H

#include "Sinergien/Communication/Interfaces/BPLCInt.h"
#include "Sinergien/Communication/Channels/WiredChannel.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Channels
		{
			class BPLCChannel : public Sinergien::Communication::Channels::WiredChannel
			{

			public:
				BPLCChannel();
				virtual ~BPLCChannel();
				Sinergien::Communication::Interfaces::BPLCInt* endInterface1;
				Sinergien::Communication::Interfaces::BPLCInt* endInterface2;

			};

		}

	}

}
#endif // BPLCCHANNEL_H
