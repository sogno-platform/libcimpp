///////////////////////////////////////////////////////////
//  Voltage.h
//  Implementation of the Class Voltage
//  Created on:      28-Jan-2016 12:47:34
///////////////////////////////////////////////////////////

#if !defined(EA_0C2E925B_C9F6_43ee_92C1_4D81BD097FE8__INCLUDED_)
#define EA_0C2E925B_C9F6_43ee_92C1_4D81BD097FE8__INCLUDED_

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
			 * Electrical voltage, can be both AC and DC.
			 */
			class Voltage
			{

			public:
				Voltage();
				virtual ~Voltage();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_0C2E925B_C9F6_43ee_92C1_4D81BD097FE8__INCLUDED_)
