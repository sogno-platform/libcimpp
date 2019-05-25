///////////////////////////////////////////////////////////
//  Damping.h
//  Implementation of the Class Damping
///////////////////////////////////////////////////////////

#ifndef DAMPING_H
#define DAMPING_H

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
			 * Per-unit active power variation with frequency referenced on the system
			 * apparent power base. Typical values are in range 1.0 - 2.0.
			 */
			class Damping
			{

			public:
				Damping();
				virtual ~Damping();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // DAMPING_H
