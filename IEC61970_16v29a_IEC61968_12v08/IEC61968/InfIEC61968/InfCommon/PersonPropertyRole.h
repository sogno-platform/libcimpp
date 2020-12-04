///////////////////////////////////////////////////////////
//  PersonPropertyRole.h
//  Implementation of the Class PersonPropertyRole
///////////////////////////////////////////////////////////

#ifndef PERSONPROPERTYROLE_H
#define PERSONPROPERTYROLE_H

#include "IEC61968/InfIEC61968/InfCommon/Role.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * The role of a person relative to a given piece of property. Examples of roles
			 * include: owner, renter, contractor, etc.
			 */
			class PersonPropertyRole : public IEC61968::InfIEC61968::InfCommon::Role
			{

			public:
				PersonPropertyRole();
				virtual ~PersonPropertyRole();

			};

		}

	}

}
#endif // PERSONPROPERTYROLE_H
