///////////////////////////////////////////////////////////
//  Emission.h
//  Implementation of the Class Emission
///////////////////////////////////////////////////////////

#ifndef EMISSION_H
#define EMISSION_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Quantity of emission per fuel heat content.
				 */
				class Emission
				{

				public:
					Emission();
					virtual ~Emission();
					IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
					static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
					static const IEC61970::Base::Domain::UnitMultiplier multiplier;
					static const IEC61970::Base::Domain::UnitSymbol unit;
					IEC61970::Base::Domain::Float value;

				};

			}

		}

	}

}
#endif // EMISSION_H
