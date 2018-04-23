///////////////////////////////////////////////////////////
//  BPLCModem.h
//  Implementation of the Class BPLCModem
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef BPLCMODEM_H
#define BPLCMODEM_H

#include <list>

#include "Sinergien/Communication/Modems/WiredMod.h"
#include "Sinergien/Communication/Interfaces/BPLCInt.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Modems
		{
			class BPLCModem : public Sinergien::Communication::Modems::WiredMod
			{

			public:
				BPLCModem();
				virtual ~BPLCModem();
				std::list<Sinergien::Communication::Interfaces::BPLCInt*> m_BPLCInt;

			};

		}

	}

}
#endif // BPLCMODEM_H
