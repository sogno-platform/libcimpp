///////////////////////////////////////////////////////////
//  Hours.h
//  Implementation of the Class Hours
///////////////////////////////////////////////////////////

#ifndef HOURS_H
#define HOURS_H

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
			 * Time specified in hours.
			 */
			class Hours
			{

			public:
				Hours();
				virtual ~Hours();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // HOURS_H
