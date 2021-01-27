///////////////////////////////////////////////////////////
//  PU.h
//  Implementation of the Class PU
///////////////////////////////////////////////////////////

#ifndef PU_H
#define PU_H

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
			 * Per Unit - a positive or negative value referred to a defined base. Values
			 * typically range from -10 to +10.
			 */
			class PU
			{

			public:
				PU();
				virtual ~PU();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // PU_H
