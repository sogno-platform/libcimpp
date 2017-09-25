///////////////////////////////////////////////////////////
//  FloatQuantity.h
//  Implementation of the Class FloatQuantity
///////////////////////////////////////////////////////////

#ifndef FLOATQUANTITY_H
#define FLOATQUANTITY_H

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
			 * Quantity with float value and associated unit information.
			 */
			class FloatQuantity
			{

			public:
				FloatQuantity();
				virtual ~FloatQuantity();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // FLOATQUANTITY_H
