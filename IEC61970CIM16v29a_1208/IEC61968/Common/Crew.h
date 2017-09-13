///////////////////////////////////////////////////////////
//  Crew.h
//  Implementation of the Class Crew
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CREW_H
#define CREW_H

#include <list>

#include "IEC61968/Common/Status.h"
#include "IEC61968/Common/CrewMember.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Common/CrewType.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Group of people with specific skills, tools, and vehicles.
		 */
		class Crew : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Crew();
			virtual ~Crew();
			/**
			 * Status of this crew.
			 */
			IEC61968::Common::Status status;
			/**
			 * All members of this crew.
			 */
			std::list<IEC61968::Common::CrewMember*> CrewMembers;
			/**
			 * Type of this crew.
			 */
			IEC61968::Common::CrewType *CrewType;

		};

	}

}
#endif // CREW_H
