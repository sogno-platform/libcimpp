///////////////////////////////////////////////////////////
//  ResistancePerLength.h
//  Implementation of the Class ResistancePerLength
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef RESISTANCEPERLENGTH_H
#define RESISTANCEPERLENGTH_H

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
			 * Resistance (real part of impedance) per unit of length.
			 */
			class ResistancePerLength
			{

			public:
				ResistancePerLength();
				virtual ~ResistancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
				static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // RESISTANCEPERLENGTH_H
