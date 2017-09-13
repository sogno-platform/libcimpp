///////////////////////////////////////////////////////////
//  Person.h
//  Implementation of the Class Person
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PERSON_H
#define PERSON_H

#include <list>

#include "IEC61968/Common/ElectronicAddress.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/TelephoneNumber.h"
#include "IEC61968/Common/PersonRole.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * General purpose information for name and other information to contact people.
		 */
		class Person : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Person();
			virtual ~Person();
			/**
			 * Electronic address.
			 */
			IEC61968::Common::ElectronicAddress electronicAddress;
			/**
			 * Person's first name.
			 */
			IEC61970::Base::Domain::String firstName;
			/**
			 * Landline phone number.
			 */
			IEC61968::Common::TelephoneNumber landlinePhone;
			/**
			 * Person's last (family, sir) name.
			 */
			IEC61970::Base::Domain::String lastName;
			/**
			 * Middle name(s) or initial(s).
			 */
			IEC61970::Base::Domain::String mName;
			/**
			 * Mobile phone number.
			 */
			IEC61968::Common::TelephoneNumber mobilePhone;
			/**
			 * A prefix or title for the person's name, such as Miss, Mister, Doctor, etc.
			 */
			IEC61970::Base::Domain::String prefix;
			/**
			 * Special service needs for the person (contact) are described; examples include
			 * life support, etc.
			 */
			IEC61970::Base::Domain::String specialNeed;
			/**
			 * A suffix for the person's name, such as II, III, etc.
			 */
			IEC61970::Base::Domain::String suffix;
			/**
			 * All roles of this person.
			 */
			std::list<IEC61968::Common::PersonRole*> Roles;

		};

	}

}
#endif // PERSON_H
