///////////////////////////////////////////////////////////
//  WLANModem.h
//  Implementation of the Class WLANModem
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WLANMODEM_H
#define WLANMODEM_H

#include <list>

#include "Sinergien/Communication/Modems/WirelessMod.h"
#include "Sinergien/Communication/Interfaces/WLANInt.h"
#include "Sinergien/Communication/Modems/WLANType.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Modems
		{
			class WLANModem : public Sinergien::Communication::Modems::WirelessMod
			{

			public:
				WLANModem();
				virtual ~WLANModem();
				Sinergien::Communication::Modems::WLANType WiFiType = Sinergien::Communication::Modems::WLANType::_undef;
				std::list<Sinergien::Communication::Interfaces::WLANInt*> m_WLANInt;

			};

		}

	}

}
#endif // WLANMODEM_H
