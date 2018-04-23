///////////////////////////////////////////////////////////
//  PLCModem.h
//  Implementation of the Class PLCModem
//  Original author: ha
///////////////////////////////////////////////////////////

#ifndef PLCMODEM_H
#define PLCMODEM_H

#include "Sinergien/Communication/Modems/WiredMod.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Modems
		{
			class PLCModem : public Sinergien::Communication::Modems::WiredMod
			{

			public:
				PLCModem();
				virtual ~PLCModem();

			};

		}

	}

}
#endif // PLCMODEM_H
