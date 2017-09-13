///////////////////////////////////////////////////////////
//  IncidentHazard.h
//  Implementation of the Class IncidentHazard
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef INCIDENTHAZARD_H
#define INCIDENTHAZARD_H

#include "IEC61968/Common/Hazard.h"

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Hazardous situation associated with an incident. Examples are line down, gas
		 * leak, fire, etc.
		 */
		class IncidentHazard : public IEC61968::Common::Hazard
		{

		public:
			IncidentHazard();
			virtual ~IncidentHazard();

		};

	}

}
#endif // INCIDENTHAZARD_H
