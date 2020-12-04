///////////////////////////////////////////////////////////
//  BilateralExchangeAgreement.h
//  Implementation of the Class BilateralExchangeAgreement
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef BILATERALEXCHANGEAGREEMENT_H
#define BILATERALEXCHANGEAGREEMENT_H

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/ICCPConfiguration/BilateralExchangeActor.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			class BilateralExchangeAgreement : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BilateralExchangeAgreement();
				virtual ~BilateralExchangeAgreement();
				IEC61970::Base::ICCPConfiguration::BilateralExchangeActor *Provider;
				IEC61970::Base::ICCPConfiguration::BilateralExchangeActor *Consumer;

			};

		}

	}

}
#endif // BILATERALEXCHANGEAGREEMENT_H
