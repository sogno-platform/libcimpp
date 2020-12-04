///////////////////////////////////////////////////////////
//  EstimatedRestorationTime.h
//  Implementation of the Class EstimatedRestorationTime
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef ESTIMATEDRESTORATIONTIME_H
#define ESTIMATEDRESTORATIONTIME_H

#include "BaseClass.h"
#include <list>

#include "IEC61968/Operations/ERTConfidenceKind.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Operations/Outage.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * The Estimated Restoration Time for a single outage
		 */
		class EstimatedRestorationTime : public BaseClass
		{

		public:
			EstimatedRestorationTime();
			virtual ~EstimatedRestorationTime();
			/**
			 * provides the confidence level that this ERT can be accomplished.  This may be
			 * changed/updated as needed.
			 */
			IEC61968::Operations::ERTConfidenceKind confidenceKind = IEC61968::Operations::ERTConfidenceKind::_undef;
			/**
			 * estimated time the outage will be restored
			 */
			IEC61970::Base::Domain::DateTime ert;
			/**
			 * defines the source that provided the ERT value.
			 */
			IEC61970::Base::Domain::String ertSource;
			std::list<IEC61968::Operations::Outage*> Outage;

		};

	}

}
#endif // ESTIMATEDRESTORATIONTIME_H
