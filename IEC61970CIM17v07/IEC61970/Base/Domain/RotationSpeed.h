///////////////////////////////////////////////////////////
//  RotationSpeed.h
//  Implementation of the Class RotationSpeed
///////////////////////////////////////////////////////////

#ifndef ROTATIONSPEED_H
#define ROTATIONSPEED_H

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
			 * Number of revolutions per second.
			 */
			class RotationSpeed
			{

			public:
				RotationSpeed();
				virtual ~RotationSpeed();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ROTATIONSPEED_H
