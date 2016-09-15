///////////////////////////////////////////////////////////
//  Name.h
//  Implementation of the Class Name
//  Created on:      28-Jan-2016 12:45:45
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_89FD129B_639E_4a08_BE1E_73127409CF2E__INCLUDED_)
#define EA_89FD129B_639E_4a08_BE1E_73127409CF2E__INCLUDED_

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/NameType.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The Name class provides the means to define any number of human readable  names
			 * for an object. A name is <b>not</b> to be used for defining inter-object
			 * relationships. For inter-object relationships instead use the object
			 * identification 'mRID'.
			 */
			class Name : public BaseClass
			{

			public:
				Name();
				virtual ~Name();
				/**
				 * Any free text that name the object.
				 */
				IEC61970::Base::Domain::String name;
				/**
				 * Type of this name.
				 */
				IEC61970::Base::Core::NameType *NameType;
				/**
				 * Identified object that this name designates.
				 */
				IEC61970::Base::Core::IdentifiedObject *IdentifiedObject;

			};

		}

	}

}
#endif // !defined(EA_89FD129B_639E_4a08_BE1E_73127409CF2E__INCLUDED_)
