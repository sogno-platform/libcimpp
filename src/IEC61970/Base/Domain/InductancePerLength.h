///////////////////////////////////////////////////////////
//  InductancePerLength.h
//  Implementation of the Class InductancePerLength
//  Created on:      28-Jan-2016 12:45:28
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_7128B626_F52E_4163_AFA2_BFAA4D792D22__INCLUDED_)
#define EA_7128B626_F52E_4163_AFA2_BFAA4D792D22__INCLUDED_

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
			 * Inductance per unit of length.
			 */
			class InductancePerLength
			{

			public:
				InductancePerLength();
				virtual ~InductancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_7128B626_F52E_4163_AFA2_BFAA4D792D22__INCLUDED_)
