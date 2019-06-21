///////////////////////////////////////////////////////////
//  PublicX509Certificate.h
//  Implementation of the Class PublicX509Certificate
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef PUBLICX509CERTIFICATE_H
#define PUBLICX509CERTIFICATE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/ICCPConfiguration/TCPAccessPoint.h"
#include "IEC61970/Base/ICCPConfiguration/ISOUpperLayer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * Used to convey information that will allow matching in order to determine which
			 * certificate to use.  Actual certificates are exchanged externally to the CIM
			 * exchange.
			 */
			class PublicX509Certificate : public BaseClass
			{

			public:
				PublicX509Certificate();
				virtual ~PublicX509Certificate();
				/**
				 * Represents the CA that issued the certificate.  Defined to be per X.509.
				 */
				IEC61970::Base::Domain::String issuerName;
				/**
				 * Is the serial number of the certificate per X.509 definition.
				 */
				IEC61970::Base::Domain::String serialNumber;
				IEC61970::Base::ICCPConfiguration::TCPAccessPoint *TCPAccessPoint;
				IEC61970::Base::ICCPConfiguration::ISOUpperLayer *ISOUpperLayer;

			};

		}

	}

}
#endif // PUBLICX509CERTIFICATE_H
