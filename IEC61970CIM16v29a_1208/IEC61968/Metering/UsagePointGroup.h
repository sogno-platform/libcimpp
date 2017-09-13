///////////////////////////////////////////////////////////
//  UsagePointGroup.h
//  Implementation of the Class UsagePointGroup
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef USAGEPOINTGROUP_H
#define USAGEPOINTGROUP_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Metering/UsagePoint.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Abstraction for management of group communications within a two-way AMR system
		 * or the data for a group of related usage points. Commands can be issued to all
		 * of the usage points that belong to a usage point group using a defined group
		 * address and the underlying AMR communication infrastructure. 
		 */
		class UsagePointGroup : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			UsagePointGroup();
			virtual ~UsagePointGroup();
			/**
			 * Type of this group.
			 */
			IEC61970::Base::Domain::String type;
			/**
			 * All usage points in this group.
			 */
			std::list<IEC61968::Metering::UsagePoint*> UsagePoints;

		};

	}

}
#endif // USAGEPOINTGROUP_H
