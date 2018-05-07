///////////////////////////////////////////////////////////
//  eNodeB.h
//  Implementation of the Class eNodeB
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef ENODEB_H
#define ENODEB_H

#include <list>

#include "Sinergien/Communication/NetworkNodes/BaseStation.h"
#include "Sinergien/Communication/Modems/LTEModem.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace NetworkNodes
		{
			class eNodeB : public Sinergien::Communication::NetworkNodes::BaseStation
			{

			public:
				eNodeB();
				virtual ~eNodeB();
				std::list<Sinergien::Communication::Modems::LTEModem*> m_LTEModem;

			};

		}

	}

}
#endif // ENODEB_H
