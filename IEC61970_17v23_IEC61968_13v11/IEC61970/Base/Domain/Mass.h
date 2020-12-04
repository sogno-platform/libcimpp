////////////////////////////////////////////////////////////////////////////////
// This is a substitute class until a proper Datatype Mass has been added to CIM
// Editor : Max Kissgen
////////////////////////////////////////////////////////////////////////////////

#ifndef MASS_H
#define MASS_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Decimal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Decimal is the base-10 notational system for representing real numbers.
			 */
			class Mass : public BaseClass
			{

			public:
				Mass();
				virtual ~Mass();
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Decimal value;
			};

		}

	}

}

#endif // MASS_H
