///////////////////////////////////////////////////////////
//  Role.h
//  Implementation of the Class Role
///////////////////////////////////////////////////////////

#ifndef ROLE_H
#define ROLE_H

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Enumeration of potential roles that might be played by one object relative to
			 * another.
			 */
			class Role : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Role();
				virtual ~Role();
				IEC61968::Common::Status status;
				/**
				 * Type of role.
				 */
				IEC61970::Base::Domain::String type;

			};

		}

	}

}
#endif // ROLE_H
