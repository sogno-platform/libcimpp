///////////////////////////////////////////////////////////
//  Craft.h
//  Implementation of the Class Craft
///////////////////////////////////////////////////////////

#ifndef CRAFT_H
#define CRAFT_H

#include <list>

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			class OldPerson;
		}
	}
}

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Craft of a person or a crew. Examples include overhead electric, underground
			 * electric, high pressure gas, etc. This ensures necessary knowledge and skills
			 * before being allowed to perform certain types of work.
			 */
			class Craft : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Craft();
				virtual ~Craft();
				IEC61968::Common::Status status;
				/**
				 * Classification by utility's work mangement standards and practices.
				 */
				IEC61970::Base::Domain::String type;
				std::list<IEC61968::InfIEC61968::InfCommon::OldPerson*> ErpPersons;

			};

		}

	}

}
#endif // CRAFT_H
