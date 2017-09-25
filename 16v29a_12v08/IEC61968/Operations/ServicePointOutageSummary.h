///////////////////////////////////////////////////////////
//  ServicePointOutageSummary.h
//  Implementation of the Class ServicePointOutageSummary
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SERVICEPOINTOUTAGESUMMARY_H
#define SERVICEPOINTOUTAGESUMMARY_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Summary counts of service points affected by an outage. These counts are
		 * sometimes referred to as total and critical customer count.
		 */
		class ServicePointOutageSummary : public BaseClass
		{

		public:
			ServicePointOutageSummary();
			virtual ~ServicePointOutageSummary();
			/**
			 * Number of critical service (delivery) points affected by an outage.
			 */
			IEC61970::Base::Domain::Integer criticalCount;
			/**
			 * Number of all service (delivery) points affected by an outage.
			 */
			IEC61970::Base::Domain::Integer totalCount;

		};

	}

}
#endif // SERVICEPOINTOUTAGESUMMARY_H
