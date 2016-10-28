///////////////////////////////////////////////////////////
//  CapacitancePerLength.h
//  Implementation of the Class CapacitancePerLength
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CAPACITANCEPERLENGTH_H
#define CAPACITANCEPERLENGTH_H

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
			 * Capacitance per unit of length.
			 */
			class CapacitancePerLength
			{

			public:
				CapacitancePerLength();
				virtual ~CapacitancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // CAPACITANCEPERLENGTH_H
