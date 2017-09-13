///////////////////////////////////////////////////////////
//  DocumentOrganisationRole.h
//  Implementation of the Class DocumentOrganisationRole
///////////////////////////////////////////////////////////

#ifndef DOCUMENTORGANISATIONROLE_H
#define DOCUMENTORGANISATIONROLE_H

#include "IEC61968/Common/OrganisationRole.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Role an organisation plays with respect to documents.
			 */
			class DocumentOrganisationRole : public IEC61968::Common::OrganisationRole
			{

			public:
				DocumentOrganisationRole();
				virtual ~DocumentOrganisationRole();

			};

		}

	}

}
#endif // DOCUMENTORGANISATIONROLE_H
