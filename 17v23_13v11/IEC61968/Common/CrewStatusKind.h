///////////////////////////////////////////////////////////
//  CrewStatusKind.h
//  Implementation of the Class CrewStatusKind
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef CREWSTATUSKIND_H
#define CREWSTATUSKIND_H

#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * the enumerated values for the dispatch status
		 */
		enum class CrewStatusKind
		{
			/**
			 * Indicates that one or more crews have arrived at the work site
			 */
			 _undef = -1, 	arrived,
			/**
			 * Indicates that one or more crews have been assigned to the work
			 */
			assigned,
			/**
			 * Indicates that the work is awaiting one or more crews to be assigned
			 */
			awaitingCrewAssignment,
			/**
			 * Indicates that one or more crews are traveling to the work site(s)
			 */
			enroute,
			/**
			 * Indicates that the work at one or more work sites has been completed
			 */
			fieldComplete
		};

	}

}
#endif // CREWSTATUSKIND_H
