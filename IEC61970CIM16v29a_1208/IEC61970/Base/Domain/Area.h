///////////////////////////////////////////////////////////
//  Area.h
//  Implementation of the Class Area
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef AREA_H
#define AREA_H

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
			 * Area.
			 */
			class Area
			{

			public:
				Area();
				virtual ~Area();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // AREA_H
