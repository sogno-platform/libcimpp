///////////////////////////////////////////////////////////
//  CurrentFlow.h
//  Implementation of the Class CurrentFlow
///////////////////////////////////////////////////////////

#ifndef CURRENTFLOW_H
#define CURRENTFLOW_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Electrical current with sign convention: positive flow is out of the conducting
			 * equipment into the connectivity node. Can be both AC and DC.
			 */
			class CurrentFlow
			{

			public:
				CurrentFlow();
				virtual ~CurrentFlow();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // CURRENTFLOW_H
