///////////////////////////////////////////////////////////
//  NameTypeAuthority.h
//  Implementation of the Class NameTypeAuthority
//  Created on:      28-Jan-2016 12:45:46
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_988481CB_6E06_4401_A5E5_FAA32FBD1C96__INCLUDED_)
#define EA_988481CB_6E06_4401_A5E5_FAA32FBD1C96__INCLUDED_

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
#endif // !defined(EA_988481CB_6E06_4401_A5E5_FAA32FBD1C96__INCLUDED_)
