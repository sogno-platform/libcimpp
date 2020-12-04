///////////////////////////////////////////////////////////
//  OutageArea.h
//  Implementation of the Class OutageArea
//  Original author: Margaret
///////////////////////////////////////////////////////////

#ifndef OUTAGEAREA_H
#define OUTAGEAREA_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Operations/AreaKind.h"
#include "IEC61968/Operations/Outage.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * This defines the area covered by the Outage.
		 */
		class OutageArea : public BaseClass
		{

		public:
			OutageArea();
			virtual ~OutageArea();
			/**
			 * This is the reported time of the first outage report
			 */
			IEC61970::Base::Domain::DateTime earliestReportedTime;
			/**
			 * defines the number of meters served in the defined area.
			 */
			IEC61970::Base::Domain::Integer metersServed;
			/**
			 * defines the type of area that has the outage - county, state, zipcode, etc.
			 */
			IEC61968::Operations::AreaKind outageAreaKind = IEC61968::Operations::AreaKind::_undef;
			std::list<IEC61968::Operations::Outage*> Outage;

		};

	}

}
#endif // OUTAGEAREA_H
