///////////////////////////////////////////////////////////
//  NameTypeAuthority.h
//  Implementation of the Class NameTypeAuthority
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef NAMETYPEAUTHORITY_H
#define NAMETYPEAUTHORITY_H

#include "IEC61970/Base/Domain/String.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Authority responsible for creation and management of names of a given type;
			 * typically an organization or an enterprise system.
			 */
			class NameTypeAuthority : public BaseClass
			{

			public:
				NameTypeAuthority();
				virtual ~NameTypeAuthority();
				/**
				 * Description of the name type authority.
				 */
				IEC61970::Base::Domain::String description;
				/**
				 * Name of the name type authority.
				 */
				IEC61970::Base::Domain::String name;

			};

		}

	}

}
#endif // NAMETYPEAUTHORITY_H
