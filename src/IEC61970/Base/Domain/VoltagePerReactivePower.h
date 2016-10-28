///////////////////////////////////////////////////////////
//  VoltagePerReactivePower.h
//  Implementation of the Class VoltagePerReactivePower
///////////////////////////////////////////////////////////

#ifndef VOLTAGEPERREACTIVEPOWER_H
#define VOLTAGEPERREACTIVEPOWER_H

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
#endif // VOLTAGEPERREACTIVEPOWER_H
