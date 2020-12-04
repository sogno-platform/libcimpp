///////////////////////////////////////////////////////////
//  OrganisationRole.h
//  Implementation of the Class OrganisationRole
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ORGANISATIONROLE_H
#define ORGANISATIONROLE_H

#include <list>

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Common/Organisation.h"
#include "IEC61968/Common/ConfigurationEvent.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Identifies a way in which an organisation may participate in the utility
		 * enterprise (e.g., customer, manufacturer, etc).
		 */
		class OrganisationRole : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			OrganisationRole();
			virtual ~OrganisationRole();
			/**
			 * Organisation having this role.
			 */
			IEC61968::Common::Organisation *Organisation;
			/**
			 * All configuration events created for this organisation role.
			 */
			std::list<IEC61968::Common::ConfigurationEvent*> ConfigurationEvents;

		};

	}

}
#endif // ORGANISATIONROLE_H
