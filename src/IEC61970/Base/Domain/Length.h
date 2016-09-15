///////////////////////////////////////////////////////////
//  Length.h
//  Implementation of the Class Length
//  Created on:      28-Jan-2016 12:45:32
///////////////////////////////////////////////////////////

#if !defined(EA_2B6E09C7_39C8_4513_82EA_6C8C8BBD9041__INCLUDED_)
#define EA_2B6E09C7_39C8_4513_82EA_6C8C8BBD9041__INCLUDED_

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
			 * Unit of length. Never negative.
			 */
			class Length
			{

			public:
				Length();
				virtual ~Length();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_2B6E09C7_39C8_4513_82EA_6C8C8BBD9041__INCLUDED_)
