///////////////////////////////////////////////////////////
//  Speed.h
//  Implementation of the Class Speed
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SPEED_H
#define SPEED_H

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
			 * Distance per unit of time.
			 */
			class Speed
			{

			public:
				Speed();
				virtual ~Speed();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // SPEED_H
