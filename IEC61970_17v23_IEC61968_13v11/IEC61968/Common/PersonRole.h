///////////////////////////////////////////////////////////
//  PersonRole.h
//  Implementation of the Class PersonRole
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PERSONROLE_H
#define PERSONROLE_H

#include <list>

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Common/Appointment.h"
#include "IEC61968/Common/ConfigurationEvent.h"

namespace IEC61968
{
	namespace Common
	{
		class PersonRole : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			PersonRole();
			virtual ~PersonRole();
			/**
			 * All appointments for this person.
			 */
			std::list<IEC61968::Common::Appointment*> Appointments;
			/**
			 * All configuration events created for this person role.
			 */
			std::list<IEC61968::Common::ConfigurationEvent*> ConfigurationEvents;

		};

	}

}
#endif // PERSONROLE_H
