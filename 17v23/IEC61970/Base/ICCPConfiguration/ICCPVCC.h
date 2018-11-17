///////////////////////////////////////////////////////////
//  ICCPVCC.h
//  Implementation of the Class ICCPVCC
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef ICCPVCC_H
#define ICCPVCC_H

#include "IEC61970/Base/ICCPConfiguration/BilateralExchangeActor.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			class ICCPVCC : public IEC61970::Base::ICCPConfiguration::BilateralExchangeActor
			{

			public:
				ICCPVCC();
				virtual ~ICCPVCC();

			};

		}

	}

}
#endif // ICCPVCC_H
