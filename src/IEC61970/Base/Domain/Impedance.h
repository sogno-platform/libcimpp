///////////////////////////////////////////////////////////
//  Impedance.h
//  Implementation of the Class Impedance
//  Created on:      28-Jan-2016 12:45:26
///////////////////////////////////////////////////////////

#if !defined(EA_AD81899F_6511_491c_8903_8937A76C1D73__INCLUDED_)
#define EA_AD81899F_6511_491c_8903_8937A76C1D73__INCLUDED_

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
			 * Ratio of voltage to current.
			 */
			class Impedance
			{

			public:
				Impedance();
				virtual ~Impedance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_AD81899F_6511_491c_8903_8937A76C1D73__INCLUDED_)
