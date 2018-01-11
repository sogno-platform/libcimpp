///////////////////////////////////////////////////////////
//  RealEnergy.h
//  Implementation of the Class RealEnergy
///////////////////////////////////////////////////////////

#ifndef REALENERGY_H
#define REALENERGY_H

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
			 * Real electrical energy.
			 */
			class RealEnergy
			{

			public:
				RealEnergy();
				virtual ~RealEnergy();
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // REALENERGY_H
