///////////////////////////////////////////////////////////
//  OperatingParticipant.h
//  Implementation of the Class OperatingParticipant
//  Created on:      28-Jan-2016 12:45:51
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_4B73EA2A_564F_4f26_8E48_B072309648C6__INCLUDED_)
#define EA_4B73EA2A_564F_4f26_8E48_B072309648C6__INCLUDED_

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * An operator of multiple power system resource objects. Note multple operating
			 * participants may operate the same power system resource object.   This can be
			 * used for modeling jointly owned units where each owner operates as a
			 * contractual share.
			 */
			class OperatingParticipant : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				OperatingParticipant();
				virtual ~OperatingParticipant();

			};

		}

	}

}
#endif // !defined(EA_4B73EA2A_564F_4f26_8E48_B072309648C6__INCLUDED_)
