///////////////////////////////////////////////////////////
//  VoltagePerReactivePower.h
//  Implementation of the Class VoltagePerReactivePower
//  Created on:      28-Jan-2016 12:47:39
///////////////////////////////////////////////////////////

#if !defined(EA_584E69A8_E006_4142_8A6C_EC9E05EE261D__INCLUDED_)
#define EA_584E69A8_E006_4142_8A6C_EC9E05EE261D__INCLUDED_

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
			 * Voltage variation with reactive power.
			 */
			class VoltagePerReactivePower
			{

			public:
				VoltagePerReactivePower();
				virtual ~VoltagePerReactivePower();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_584E69A8_E006_4142_8A6C_EC9E05EE261D__INCLUDED_)
