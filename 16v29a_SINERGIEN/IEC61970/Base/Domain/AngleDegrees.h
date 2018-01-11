///////////////////////////////////////////////////////////
//  AngleDegrees.h
//  Implementation of the Class AngleDegrees
///////////////////////////////////////////////////////////

#ifndef ANGLEDEGREES_H
#define ANGLEDEGREES_H

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
			 * Measurement of angle in degrees.
			 */
			class AngleDegrees
			{

			public:
				AngleDegrees();
				virtual ~AngleDegrees();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ANGLEDEGREES_H
