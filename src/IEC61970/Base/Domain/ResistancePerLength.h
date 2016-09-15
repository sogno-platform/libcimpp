///////////////////////////////////////////////////////////
//  ResistancePerLength.h
//  Implementation of the Class ResistancePerLength
//  Created on:      28-Jan-2016 12:46:35
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_AFDA04D6_5D8A_4d77_8929_83B108F25F56__INCLUDED_)
#define EA_AFDA04D6_5D8A_4d77_8929_83B108F25F56__INCLUDED_

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
			 * Resistance (real part of impedance) per unit of length.
			 */
			class ResistancePerLength
			{

			public:
				ResistancePerLength();
				virtual ~ResistancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_AFDA04D6_5D8A_4d77_8929_83B108F25F56__INCLUDED_)
