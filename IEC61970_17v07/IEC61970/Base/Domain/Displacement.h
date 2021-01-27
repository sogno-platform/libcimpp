///////////////////////////////////////////////////////////
//  Displacement.h
//  Implementation of the Class Displacement
//  Original author: LOO
///////////////////////////////////////////////////////////

#ifndef DISPLACEMENT_H
#define DISPLACEMENT_H

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
			 * Unit of displacement relative a reference position, hence can be negative.
			 */
			class Displacement
			{

			public:
				Displacement();
				virtual ~Displacement();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // DISPLACEMENT_H
