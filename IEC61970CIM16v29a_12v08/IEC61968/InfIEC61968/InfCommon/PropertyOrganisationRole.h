///////////////////////////////////////////////////////////
//  PropertyOrganisationRole.h
//  Implementation of the Class PropertyOrganisationRole
///////////////////////////////////////////////////////////

#ifndef PROPERTYORGANISATIONROLE_H
#define PROPERTYORGANISATIONROLE_H

#include "IEC61968/Common/OrganisationRole.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Role an organisation plays with respect to property (for example, the
			 * organisation may be the owner, renter, occupier, taxiing authority, etc.).
			 */
			class PropertyOrganisationRole : public IEC61968::Common::OrganisationRole
			{

			public:
				PropertyOrganisationRole();
				virtual ~PropertyOrganisationRole();

			};

		}

	}

}
#endif // PROPERTYORGANISATIONROLE_H
