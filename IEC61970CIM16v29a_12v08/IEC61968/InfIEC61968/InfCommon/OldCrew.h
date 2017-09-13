///////////////////////////////////////////////////////////
//  OldCrew.h
//  Implementation of the Class OldCrew
///////////////////////////////////////////////////////////

#ifndef OLDCREW_H
#define OLDCREW_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfLocations/Route.h"
#include "IEC61968/InfIEC61968/InfWork/Assignment.h"
#include "IEC61968/InfIEC61968/InfWork/ShiftPattern.h"
#include "IEC61968/Common/Crew.h"
#include "IEC61968/Common/Organisation.h"
#include "IEC61968/Common/Location.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * A crew is a group of people with specific skills, tools, and vehicles.
			 */
			class OldCrew : public IEC61968::Common::Crew
			{

			public:
				OldCrew();
				virtual ~OldCrew();
				/**
				 * Classification by utility's work management standards and practices.
				 */
				IEC61970::Base::Domain::String type;
				IEC61968::InfIEC61968::InfLocations::Route *Route;
				/**
				 * All Assignments for this Crew.
				 */
				std::list<IEC61968::InfIEC61968::InfWork::Assignment*> Assignments;
				std::list<IEC61968::InfIEC61968::InfWork::ShiftPattern*> ShiftPatterns;
				std::list<IEC61968::Common::Organisation*> Organisations;
				std::list<IEC61968::Common::Location*> Locations;

			};

		}

	}

}
#endif // OLDCREW_H
