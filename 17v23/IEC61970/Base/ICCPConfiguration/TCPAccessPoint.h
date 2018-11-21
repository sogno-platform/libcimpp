///////////////////////////////////////////////////////////
//  TCPAccessPoint.h
//  Implementation of the Class TCPAccessPoint
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef TCPACCESSPOINT_H
#define TCPACCESSPOINT_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/ICCPConfiguration/IPAccessPoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			class TCPAccessPoint : public IEC61970::Base::ICCPConfiguration::IPAccessPoint
			{

			public:
				TCPAccessPoint();
				virtual ~TCPAccessPoint();
				IEC61970::Base::Domain::Integer keepAliveTime;
				/**
				 * This value is only needed to be specified for called nodes (e.g. those that
				 * respond to a TCP.Open request).
				 * 
				 * This value specifies the TCP port to be used. Well known and "registered" ports
				 * are preferred and can be found at:
				 * http://www.iana.org/assignments/service-names-port-numbers/service-names-port-
				 * numbers.xhtml
				 * 
				 * For IEC 60870-6 TASE.2 (e.g. ICCP) and IEC 61850, the value used shall be 102
				 * for non-TLS protected exchanges. The value shall be 3782 for TLS transported
				 * ICCP and 61850 exchanges.
				 */
				IEC61970::Base::Domain::Integer port;

			};

		}

	}

}
#endif // TCPACCESSPOINT_H
