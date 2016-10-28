///////////////////////////////////////////////////////////
//  ReactancePerLength.h
//  Implementation of the Class ReactancePerLength
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef REACTANCEPERLENGTH_H
#define REACTANCEPERLENGTH_H

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
			 * Reactance (imaginary part of impedance) per unit of length, at rated frequency.
			 */
			class ReactancePerLength
			{

			public:
				ReactancePerLength();
				virtual ~ReactancePerLength();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // REACTANCEPERLENGTH_H
