///////////////////////////////////////////////////////////
//  OrgOrgRole.h
//  Implementation of the Class OrgOrgRole
///////////////////////////////////////////////////////////

#ifndef ORGORGROLE_H
#define ORGORGROLE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/OrganisationRole.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Roles played between Organisations and other Organisations. This includes role
			 * ups for ogranisations, cost centers, profit centers, regulatory reporting, etc.
			 * 
			 * Note that the parent and child relationship is indicated by the name on each
			 * end of the association.
			 */
			class OrgOrgRole : public IEC61968::Common::OrganisationRole
			{

			public:
				OrgOrgRole();
				virtual ~OrgOrgRole();
				/**
				 * Identifiers of the organisation held by another organisation, such as a
				 * government agency (federal, state, province, city, county), financial
				 * institution (Dun and Bradstreet), etc.
				 */
				IEC61970::Base::Domain::String clientID;

			};

		}

	}

}
#endif // ORGORGROLE_H
