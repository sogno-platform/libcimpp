///////////////////////////////////////////////////////////
//  WirelessMod.h
//  Implementation of the Class WirelessMod
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WIRELESSMOD_H
#define WIRELESSMOD_H

#include "Sinergien/Communication/Modems/ComMod.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Modems
		{
			class WirelessMod : public Sinergien::Communication::Modems::ComMod
			{

			public:
				WirelessMod();
				virtual ~WirelessMod();

			};

		}

	}

}
#endif // WIRELESSMOD_H
