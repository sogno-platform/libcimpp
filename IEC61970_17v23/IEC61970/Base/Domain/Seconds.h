///////////////////////////////////////////////////////////
//  Seconds.h
//  Implementation of the Class Seconds
///////////////////////////////////////////////////////////

#ifndef SECONDS_H
#define SECONDS_H

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
			 * Time, in seconds.
			 */
			class Seconds
			{

			public:
				Seconds();
				virtual ~Seconds();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				/**
				 * Time, in seconds
				 */
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // SECONDS_H
