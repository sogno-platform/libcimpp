///////////////////////////////////////////////////////////
//  PerCent.h
//  Implementation of the Class PerCent
///////////////////////////////////////////////////////////

#ifndef PERCENT_H
#define PERCENT_H

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
			 * Percentage on a defined base.   For example, specify as 100 to indicate at the
			 * defined base.
			 */
			class PerCent
			{

			public:
				PerCent();
				virtual ~PerCent();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				/**
				 * Normally 0 - 100 on a defined base
				 */
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // PERCENT_H
