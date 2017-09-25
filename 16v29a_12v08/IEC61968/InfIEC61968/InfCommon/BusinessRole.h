///////////////////////////////////////////////////////////
//  BusinessRole.h
//  Implementation of the Class BusinessRole
///////////////////////////////////////////////////////////

#ifndef BUSINESSROLE_H
#define BUSINESSROLE_H

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/OrganisationRole.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * A business role that this organisation plays. A single organisation typically
			 * performs many functions, each one described as a role.
			 */
			class BusinessRole : public IEC61968::Common::OrganisationRole
			{

			public:
				BusinessRole();
				virtual ~BusinessRole();
				IEC61968::Common::Status status;
				/**
				 * Classification by utility's corporate standards and practices.
				 */
				IEC61970::Base::Domain::String type;

			};

		}

	}

}
#endif // BUSINESSROLE_H
