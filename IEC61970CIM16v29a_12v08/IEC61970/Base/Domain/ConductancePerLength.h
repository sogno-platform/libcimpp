///////////////////////////////////////////////////////////
//  ConductancePerLength.h
//  Implementation of the Class ConductancePerLength
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CONDUCTANCEPERLENGTH_H
#define CONDUCTANCEPERLENGTH_H

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
			 * Real part of admittance per unit of length.
			 */
			class ConductancePerLength
			{

			public:
				ConductancePerLength();
				virtual ~ConductancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
				static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // CONDUCTANCEPERLENGTH_H
