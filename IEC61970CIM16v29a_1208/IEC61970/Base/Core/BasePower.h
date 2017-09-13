///////////////////////////////////////////////////////////
//  BasePower.h
//  Implementation of the Class BasePower
///////////////////////////////////////////////////////////

#ifndef BASEPOWER_H
#define BASEPOWER_H

#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The BasePower class defines the base power used in the per unit calculations.
			 */
			class BasePower : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BasePower();
				virtual ~BasePower();
				/**
				 * Value used as base power.
				 */
				IEC61970::Base::Domain::ApparentPower basePower;

			};

		}

	}

}
#endif // BASEPOWER_H
