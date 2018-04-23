///////////////////////////////////////////////////////////
//  FiberModem.h
//  Implementation of the Class FiberModem
//  Original author: ha
///////////////////////////////////////////////////////////

#ifndef FIBERMODEM_H
#define FIBERMODEM_H

#include <list>

#include "Sinergien/Communication/Modems/WiredMod.h"
#include "Sinergien/Communication/Interfaces/FiberInt.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Modems
		{
			class FiberModem : public Sinergien::Communication::Modems::WiredMod
			{

			public:
				FiberModem();
				virtual ~FiberModem();
				std::list<Sinergien::Communication::Interfaces::FiberInt*> m_FiberInt;

			};

		}

	}

}
#endif // FIBERMODEM_H
