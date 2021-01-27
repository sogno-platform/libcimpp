///////////////////////////////////////////////////////////
//  IPAccessPoint.h
//  Implementation of the Class IPAccessPoint
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef IPACCESSPOINT_H
#define IPACCESSPOINT_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/ICCPConfiguration/IPAddressKind.h"
#include "IEC61970/Base/SCADA/CommunicationLink.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			class IPAccessPoint : public IEC61970::Base::SCADA::CommunicationLink
			{

			public:
				IPAccessPoint();
				virtual ~IPAccessPoint();
				IEC61970::Base::Domain::String address;
				IEC61970::Base::ICCPConfiguration::IPAddressKind addressType = IEC61970::Base::ICCPConfiguration::IPAddressKind::_undef;
				IEC61970::Base::Domain::String gateway;
				IEC61970::Base::Domain::String subnet;

			};

		}

	}

}
#endif // IPACCESSPOINT_H
