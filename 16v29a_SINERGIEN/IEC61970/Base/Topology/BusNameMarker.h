///////////////////////////////////////////////////////////
//  BusNameMarker.h
//  Implementation of the Class BusNameMarker
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef BUSNAMEMARKER_H
#define BUSNAMEMARKER_H

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Core/ReportingSuperGroup.h"
#include "IEC61970/Base/Core/ACDCTerminal.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Topology
		{
			/**
			 * Used to apply user standard names to topology buses. Typically used for
			 * "bus/branch" case generation. Associated with one or more terminals that are
			 * normally connected with the bus name.    The associated terminals are normally
			 * connected by non-retained switches. For a ring bus station configuration, all
			 * busbar terminals in the ring are typically associated.   For a breaker and a
			 * half scheme, both busbars would normally be associated.  For a ring bus, all
			 * busbars would normally be associated.  For a "straight" busbar configuration,
			 * normally only the main terminal at the busbar would be associated.  
			 */
			class BusNameMarker : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BusNameMarker();
				virtual ~BusNameMarker();
				/**
				 * Priority of bus name marker for use as topology bus name.  Use 0 for don t care.
				 *  Use 1 for highest priority.  Use 2 as priority is less than 1 and so on.
				 */
				IEC61970::Base::Domain::Integer priority;
				/**
				 * The reporting group to which this bus name marker belongs.
				 */
				IEC61970::Base::Core::ReportingSuperGroup::ReportingGroup *ReportingGroup;
				/**
				 * The terminals associated with this bus name marker.
				 */
				std::list<IEC61970::Base::Core::ACDCTerminal*> Terminal;

			};

		}

	}

}
#endif // BUSNAMEMARKER_H
