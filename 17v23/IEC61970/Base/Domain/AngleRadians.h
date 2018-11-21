///////////////////////////////////////////////////////////
//  AngleRadians.h
//  Implementation of the Class AngleRadians
///////////////////////////////////////////////////////////

#ifndef ANGLERADIANS_H
#define ANGLERADIANS_H

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
			 * Phase angle in radians.
			 */
			class AngleRadians
			{

			public:
				AngleRadians();
				virtual ~AngleRadians();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ANGLERADIANS_H
