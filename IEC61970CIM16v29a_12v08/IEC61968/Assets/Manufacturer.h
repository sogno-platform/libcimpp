///////////////////////////////////////////////////////////
//  Manufacturer.h
//  Implementation of the Class Manufacturer
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef MANUFACTURER_H
#define MANUFACTURER_H

#include "IEC61968/Common/OrganisationRole.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Organisation that manufactures asset products.
		 */
		class Manufacturer : public IEC61968::Common::OrganisationRole
		{

		public:
			Manufacturer();
			virtual ~Manufacturer();

		};

	}

}
#endif // MANUFACTURER_H
