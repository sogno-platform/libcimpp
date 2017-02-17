///////////////////////////////////////////////////////////
//  ActivePowerPerCurrentFlow.h
//  Implementation of the Class ActivePowerPerCurrentFlow
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef ACTIVEPOWERPERCURRENTFLOW_H
#define ACTIVEPOWERPERCURRENTFLOW_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			class ActivePowerPerCurrentFlow
			{

			public:
				ActivePowerPerCurrentFlow();
				virtual ~ActivePowerPerCurrentFlow();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ACTIVEPOWERPERCURRENTFLOW_H
