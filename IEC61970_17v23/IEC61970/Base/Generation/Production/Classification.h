///////////////////////////////////////////////////////////
//  Classification.h
//  Implementation of the Class Classification
///////////////////////////////////////////////////////////

#ifndef CLASSIFICATION_H
#define CLASSIFICATION_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Classification of level.  Specify as 1..n, with 1 being the most detailed,
				 * highest priority, etc as described on the attribue using this data type.
				 */
				class Classification
				{

				public:
					Classification();
					virtual ~Classification();
					static const IEC61970::Base::Domain::UnitMultiplier multiplier;
					static const IEC61970::Base::Domain::UnitSymbol unit;
					IEC61970::Base::Domain::Integer value;

				};

			}

		}

	}

}
#endif // CLASSIFICATION_H
