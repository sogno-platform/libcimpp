///////////////////////////////////////////////////////////
//  IPAddressKind.h
//  Implementation of the Class IPAddressKind
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef IPADDRESSKIND_H
#define IPADDRESSKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * Indicates if the addressing of the IPAccessPoint, gateway, and subnet are per
			 * IPv4 or IPv6
			 */
			enum class IPAddressKind
			{
				/**
				 * Indicates that IPv4 dotted decimal notation is in use.
				 */
				 _undef = -1, 	IPv4,
				/**
				 * Indicates that an IPv6 dotted decimal is in use.
				 */
				IPv6
			};

		}

	}

}
#endif // IPADDRESSKIND_H
