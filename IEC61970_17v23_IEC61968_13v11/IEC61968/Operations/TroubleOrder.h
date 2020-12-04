///////////////////////////////////////////////////////////
//  TroubleOrder.h
//  Implementation of the Class TroubleOrder
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef TROUBLEORDER_H
#define TROUBLEORDER_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Operations/Incident.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Common/Location.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Trouble order sends an incident to a crew to initiate a response to an
		 * unplanned outage.
		 */
		class TroubleOrder : public IEC61968::Common::Document
		{

		public:
			TroubleOrder();
			virtual ~TroubleOrder();
			/**
			 * Free-form comment associated with the trouble order.
			 */
			IEC61970::Base::Domain::String comment;
			/**
			 * The planned start and end time for the trouble order. 
			 */
			IEC61970::Base::Domain::DateTimeInterval plannedExecutionInterval;
			IEC61968::Operations::Incident *Incident;
			IEC61968::Common::Location *Location;

		};

	}

}
#endif // TROUBLEORDER_H
