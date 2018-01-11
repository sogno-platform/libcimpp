///////////////////////////////////////////////////////////
//  WLANType.h
//  Implementation of the Enumeration WLANType
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WLANTYPE_H
#define WLANTYPE_H

namespace Sinergien
{
	namespace Communication
	{
		namespace Modems
		{
			enum class WLANType
			{
				 _undef = -1, 	IEEE80211n,
				IEEE80211g,
				IEEE80211ac
			};

		}

	}

}
#endif // WLANTYPE_H
