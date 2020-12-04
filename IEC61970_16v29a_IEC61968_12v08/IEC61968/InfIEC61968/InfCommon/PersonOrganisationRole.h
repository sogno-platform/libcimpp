///////////////////////////////////////////////////////////
//  PersonOrganisationRole.h
//  Implementation of the Class PersonOrganisationRole
///////////////////////////////////////////////////////////

#ifndef PERSONORGANISATIONROLE_H
#define PERSONORGANISATIONROLE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/OrganisationRole.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Role an organisation plays with respect to persons.
			 */
			class PersonOrganisationRole : public IEC61968::Common::OrganisationRole
			{

			public:
				PersonOrganisationRole();
				virtual ~PersonOrganisationRole();
				/**
				 * Identifiers of the person held by an organisation, such as a government agency
				 * (federal, state, province, city, county), financial institutions, etc.
				 */
				IEC61970::Base::Domain::String clientID;

			};

		}

	}

}
#endif // PERSONORGANISATIONROLE_H
