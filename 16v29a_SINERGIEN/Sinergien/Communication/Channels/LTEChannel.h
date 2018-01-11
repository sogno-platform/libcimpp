///////////////////////////////////////////////////////////
//  LTEChannel.h
//  Implementation of the Class LTEChannel
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef LTECHANNEL_H
#define LTECHANNEL_H

#include "Sinergien/Communication/Interfaces/LTEInt.h"
#include "Sinergien/Communication/Channels/WirelessChannel.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Channels
		{
			class LTEChannel : public Sinergien::Communication::Channels::WirelessChannel
			{

			public:
				LTEChannel();
				virtual ~LTEChannel();
				Sinergien::Communication::Interfaces::LTEInt* endInterface1;
				Sinergien::Communication::Interfaces::LTEInt* endInterface2;

			};

		}

	}

}
#endif // LTECHANNEL_H
