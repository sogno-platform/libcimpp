///////////////////////////////////////////////////////////
//  Weight.h
//  Implementation of the Class Weight
///////////////////////////////////////////////////////////

#ifndef WEIGHT_H
#define WEIGHT_H

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
			 * The weight of an object.
			 */
			class Weight
			{

			public:
				Weight();
				virtual ~Weight();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // WEIGHT_H
