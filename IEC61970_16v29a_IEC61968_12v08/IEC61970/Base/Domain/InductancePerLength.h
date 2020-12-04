///////////////////////////////////////////////////////////
//  InductancePerLength.h
//  Implementation of the Class InductancePerLength
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef INDUCTANCEPERLENGTH_H
#define INDUCTANCEPERLENGTH_H

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
			 * Inductance per unit of length.
			 */
			class InductancePerLength
			{

			public:
				InductancePerLength();
				virtual ~InductancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
				static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // INDUCTANCEPERLENGTH_H
