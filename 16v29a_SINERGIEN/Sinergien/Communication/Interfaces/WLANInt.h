///////////////////////////////////////////////////////////
//  WLANInt.h
//  Implementation of the Class WLANInt
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WLANINT_H
#define WLANINT_H

#include "Sinergien/Communication/Interfaces/WirelessInt.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Interfaces
		{
			class WLANInt : public Sinergien::Communication::Interfaces::WirelessInt
			{

			public:
				WLANInt();
				virtual ~WLANInt();

			};

		}

	}

}
#endif // WLANINT_H
