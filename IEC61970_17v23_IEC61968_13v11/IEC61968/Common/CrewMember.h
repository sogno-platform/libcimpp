///////////////////////////////////////////////////////////
//  CrewMember.h
//  Implementation of the Class CrewMember
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CREWMEMBER_H
#define CREWMEMBER_H

#include "IEC61968/Common/OperationPersonRole.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Member of a crew.
		 */
		class CrewMember : public IEC61968::Common::OperationPersonRole
		{

		public:
			CrewMember();
			virtual ~CrewMember();

		};

	}

}
#endif // CREWMEMBER_H
