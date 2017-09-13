///////////////////////////////////////////////////////////
//  CrewType.h
//  Implementation of the Class CrewType
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CREWTYPE_H
#define CREWTYPE_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Custom description of the type of crew. This may be used to determine the type
		 * of work the crew can be assigned to. Examples include repair, tree trimming,
		 * switching, etc.
		 */
		class CrewType : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			CrewType();
			virtual ~CrewType();

		};

	}

}
#endif // CREWTYPE_H
