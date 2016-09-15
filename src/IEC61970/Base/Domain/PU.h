///////////////////////////////////////////////////////////
//  PU.h
//  Implementation of the Class PU
//  Created on:      28-Jan-2016 12:46:22
///////////////////////////////////////////////////////////

#if !defined(EA_31C219EA_3ED4_49ff_8AA2_512B0A93FF52__INCLUDED_)
#define EA_31C219EA_3ED4_49ff_8AA2_512B0A93FF52__INCLUDED_

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
#endif // !defined(EA_31C219EA_3ED4_49ff_8AA2_512B0A93FF52__INCLUDED_)
