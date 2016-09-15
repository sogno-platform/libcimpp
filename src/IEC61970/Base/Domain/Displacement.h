///////////////////////////////////////////////////////////
//  Displacement.h
//  Implementation of the Class Displacement
//  Created on:      28-Jan-2016 12:44:10
//  Original author: LOO
///////////////////////////////////////////////////////////

#if !defined(EA_8E288D68_9A69_4afe_87E4_80808228F98C__INCLUDED_)
#define EA_8E288D68_9A69_4afe_87E4_80808228F98C__INCLUDED_

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
#endif // !defined(EA_8E288D68_9A69_4afe_87E4_80808228F98C__INCLUDED_)
