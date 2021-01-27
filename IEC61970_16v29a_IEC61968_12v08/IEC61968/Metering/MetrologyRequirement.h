///////////////////////////////////////////////////////////
//  MetrologyRequirement.h
//  Implementation of the Class MetrologyRequirement
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef METROLOGYREQUIREMENT_H
#define METROLOGYREQUIREMENT_H

#include <list>

#include "IEC61968/Metering/ReadingReasonKind.h"
#include "IEC61968/Metering/ReadingType.h"
#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * A specification of the metering requirements for a particular point within a
		 * network.
		 */
		class MetrologyRequirement : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			MetrologyRequirement();
			virtual ~MetrologyRequirement();
			/**
			 * Reason for this metrology requirement being specified.
			 */
			IEC61968::Metering::ReadingReasonKind reason = IEC61968::Metering::ReadingReasonKind::_undef;
			/**
			 * All reading types required to be collected by this metrology requirement.
			 */
			std::list<IEC61968::Metering::ReadingType*> ReadingTypes;
			/**
			 * All usage points having this metrology requirement.
			 */
			std::list<IEC61968::Metering::UsagePoint*> UsagePoints;

		};

	}

}
#endif // METROLOGYREQUIREMENT_H
