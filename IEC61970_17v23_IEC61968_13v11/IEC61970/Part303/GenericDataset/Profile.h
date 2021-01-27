///////////////////////////////////////////////////////////
//  Profile.h
//  Implementation of the Class Profile
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef PROFILE_H
#define PROFILE_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * Describes the existence of a profile.  The MRID is usually defined as a static
			 * value by the document or artifact that defines the contents of the profile and
			 * the rules for using the profile.
			 */
			class Profile : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Profile();
				virtual ~Profile();

			};

		}

	}

}
#endif // PROFILE_H
