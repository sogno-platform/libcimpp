///////////////////////////////////////////////////////////
//  ProvidedBilateralPoint.h
//  Implementation of the Class ProvidedBilateralPoint
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef PROVIDEDBILATERALPOINT_H
#define PROVIDEDBILATERALPOINT_H

#include "IEC61970/Base/ICCPConfiguration/BilateralExchangeActor.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			class ProvidedBilateralPoint : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ProvidedBilateralPoint();
				virtual ~ProvidedBilateralPoint();
				IEC61970::Base::ICCPConfiguration::BilateralExchangeActor *BilateralExchangeActor;

			};

		}

	}

}
#endif // PROVIDEDBILATERALPOINT_H
