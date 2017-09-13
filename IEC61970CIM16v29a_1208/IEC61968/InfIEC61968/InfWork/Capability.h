///////////////////////////////////////////////////////////
//  Capability.h
//  Implementation of the Class Capability
///////////////////////////////////////////////////////////

#ifndef CAPABILITY_H
#define CAPABILITY_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/InfIEC61968/InfWork/OldWorkTask.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfCommon/OldCrew.h"
#include "IEC61968/InfIEC61968/InfCommon/Craft.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Capabilities of a crew.
			 */
			class Capability : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				Capability();
				virtual ~Capability();
				/**
				 * Capability performance factor.
				 */
				IEC61970::Base::Domain::String performanceFactor;
				IEC61968::Common::Status status;
				/**
				 * Classification by utility's work management standards and practices.
				 */
				IEC61970::Base::Domain::String type;
				/**
				 * Date and time interval for which this capability is valid (when it became
				 * effective and when it expires).
				 */
				IEC61970::Base::Domain::DateTimeInterval validityInterval;
				std::list<IEC61968::InfIEC61968::InfWork::OldWorkTask*> WorkTasks;
				IEC61968::InfIEC61968::InfCommon::OldCrew *Crew;
				std::list<IEC61968::InfIEC61968::InfCommon::Craft*> Crafts;

			};

		}

	}

}
#endif // CAPABILITY_H
