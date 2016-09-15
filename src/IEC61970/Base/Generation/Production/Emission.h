///////////////////////////////////////////////////////////
//  Emission.h
//  Implementation of the Class Emission
//  Created on:      28-Jan-2016 12:44:12
///////////////////////////////////////////////////////////

#if !defined(EA_9FB98C37_9FA3_4202_AD52_8D5B5C74E501__INCLUDED_)
#define EA_9FB98C37_9FA3_4202_AD52_8D5B5C74E501__INCLUDED_

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
					static const IEC61970::Base::Domain::UnitMultiplier multiplier;
					static const IEC61970::Base::Domain::UnitSymbol unit;
					IEC61970::Base::Domain::Float value;

				};

			}

		}

	}

}
#endif // !defined(EA_9FB98C37_9FA3_4202_AD52_8D5B5C74E501__INCLUDED_)
