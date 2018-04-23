///////////////////////////////////////////////////////////
//  SinergienNetworkInjection.h
//  Implementation of the Class SinergienNetworkInjection
//  Original author: mmi
///////////////////////////////////////////////////////////

#ifndef SINERGIENNETWORKINJECTION_H
#define SINERGIENNETWORKINJECTION_H

#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/Wires/ExternalNetworkInjection.h"

namespace Sinergien
{
	namespace EnergyGrid
	{
		namespace Wires
		{
			class SinergienNetworkInjection : public IEC61970::Base::Wires::ExternalNetworkInjection
			{

			public:
				SinergienNetworkInjection();
				virtual ~SinergienNetworkInjection();
				IEC61970::Base::Domain::AngleDegrees phiV;

			};

		}

	}

}
#endif // SINERGIENNETWORKINJECTION_H
