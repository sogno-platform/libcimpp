///////////////////////////////////////////////////////////
//  OperatingParticipant.h
//  Implementation of the Class OperatingParticipant
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef OPERATINGPARTICIPANT_H
#define OPERATINGPARTICIPANT_H

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
#endif // OPERATINGPARTICIPANT_H
