///////////////////////////////////////////////////////////
//  WLANAP.h
//  Implementation of the Class WLANAP
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WLANAP_H
#define WLANAP_H

#include "Sinergien/Communication/NetworkNodes/AccessPoint.h"
#include "Sinergien/Communication/Modems/WLANModem.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace NetworkNodes
		{
			class WLANAP : public Sinergien::Communication::NetworkNodes::AccessPoint
			{

			public:
				WLANAP();
				virtual ~WLANAP();
				Sinergien::Communication::Modems::WLANModem *m_WLANModem;

			};

		}

	}

}
#endif // WLANAP_H
