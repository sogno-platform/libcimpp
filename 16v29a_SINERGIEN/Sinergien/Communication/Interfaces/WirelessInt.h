///////////////////////////////////////////////////////////
//  WirelessInt.h
//  Implementation of the Class WirelessInt
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WIRELESSINT_H
#define WIRELESSINT_H

#include "Sinergien/Communication/Interfaces/ComInterface.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Interfaces
		{
			class WirelessInt : public Sinergien::Communication::Interfaces::ComInterface
			{

			public:
				WirelessInt();
				virtual ~WirelessInt();

			};

		}

	}

}
#endif // WIRELESSINT_H
