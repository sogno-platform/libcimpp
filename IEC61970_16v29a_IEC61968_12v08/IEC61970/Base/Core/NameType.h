///////////////////////////////////////////////////////////
//  NameType.h
//  Implementation of the Class NameType
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef NAMETYPE_H
#define NAMETYPE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/NameTypeAuthority.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Type of name. Possible values for attribute 'name' are implementation dependent
			 * but standard profiles may specify types. An enterprise may have multiple IT
			 * systems each having its own local name for the same object, e.g. a planning
			 * system may have different names from an EMS. An object may also have different
			 * names within the same IT system, e.g. localName as defined in CIM version 14.
			 * The definition from CIM14 is:
			 * The localName is a human readable name of the object. It is a free text name
			 * local to a node in a naming hierarchy similar to a file directory structure. A
			 * power system related naming hierarchy may be: Substation, VoltageLevel,
			 * Equipment etc. Children of the same parent in such a hierarchy have names that
			 * typically are unique among them.
			 */
			class NameType : public BaseClass
			{

			public:
				NameType();
				virtual ~NameType();
				/**
				 * Description of the name type.
				 */
				IEC61970::Base::Domain::String description;
				/**
				 * Name of the name type.
				 */
				IEC61970::Base::Domain::String name;
				/**
				 * Authority responsible for managing names of this type.
				 */
				IEC61970::Base::Core::NameTypeAuthority *NameTypeAuthority;

			};

		}

	}

}
#endif // NAMETYPE_H
