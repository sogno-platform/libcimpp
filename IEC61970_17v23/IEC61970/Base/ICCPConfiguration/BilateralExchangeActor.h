///////////////////////////////////////////////////////////
//  BilateralExchangeActor.h
//  Implementation of the Class BilateralExchangeActor
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef BILATERALEXCHANGEACTOR_H
#define BILATERALEXCHANGEACTOR_H

#include <list>

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			class BilateralExchangeAgreement;

			class BilateralExchangeActor : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BilateralExchangeActor();
				virtual ~BilateralExchangeActor();
				std::list<IEC61970::Base::ICCPConfiguration::BilateralExchangeAgreement*> ProviderBilateralExchange;

			};

		}

	}

}
#endif // BILATERALEXCHANGEACTOR_H
