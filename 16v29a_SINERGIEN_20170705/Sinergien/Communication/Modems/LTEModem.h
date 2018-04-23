///////////////////////////////////////////////////////////
//  LTEModem.h
//  Implementation of the Class LTEModem
//  Original author: ha
///////////////////////////////////////////////////////////

#ifndef LTEMODEM_H
#define LTEMODEM_H

#include <list>

#include "IEC61970/Base/Domain/Float.h"
#include "Sinergien/Communication/Modems/WirelessMod.h"
#include "Sinergien/Communication/Interfaces/LTEInt.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Modems
		{
			class LTEModem : public Sinergien::Communication::Modems::WirelessMod
			{

			public:
				LTEModem();
				virtual ~LTEModem();
				IEC61970::Base::Domain::Float frequency;
				std::list<Sinergien::Communication::Interfaces::LTEInt*> m_LTEInt;

			};

		}

	}

}
#endif // LTEMODEM_H
