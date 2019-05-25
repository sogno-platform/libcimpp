///////////////////////////////////////////////////////////
//  FieldSafetySupervisor.h
//  Implementation of the Class FieldSafetySupervisor
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef FIELDSAFETYSUPERVISOR_H
#define FIELDSAFETYSUPERVISOR_H

#include <list>

#include "IEC61968/Operations/SafetyDocument.h"
#include "IEC61968/Common/CrewMember.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Crew member on work site responsible for all local safety measures for the work
		 * crew doing maintenance, construction and repair in a substation or on a power
		 * line/cable.
		 */
		class FieldSafetySupervisor : public IEC61968::Common::CrewMember
		{

		public:
			FieldSafetySupervisor();
			virtual ~FieldSafetySupervisor();
			/**
			 * All safety documents released by this supervisor.
			 */
			std::list<IEC61968::Operations::SafetyDocument*> ReleasedSafetyDocuments;
			/**
			 * All safety documents issued to this supervisor.
			 */
			std::list<IEC61968::Operations::SafetyDocument*> IssuedSafetyDocuments;

		};

	}

}
#endif // FIELDSAFETYSUPERVISOR_H
