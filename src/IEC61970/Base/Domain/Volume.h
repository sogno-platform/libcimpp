///////////////////////////////////////////////////////////
//  Volume.h
//  Implementation of the Class Volume
//  Created on:      28-Jan-2016 12:47:40
///////////////////////////////////////////////////////////

#if !defined(EA_B54A7B38_BC38_4d25_8F39_F7DD6374FF37__INCLUDED_)
#define EA_B54A7B38_BC38_4d25_8F39_F7DD6374FF37__INCLUDED_

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
			 * Volume.
			 */
			class Volume
			{

			public:
				Volume();
				virtual ~Volume();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_B54A7B38_BC38_4d25_8F39_F7DD6374FF37__INCLUDED_)
