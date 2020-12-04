///////////////////////////////////////////////////////////
//  ErpCompetency.h
//  Implementation of the Class ErpCompetency
///////////////////////////////////////////////////////////

#ifndef ERPCOMPETENCY_H
#define ERPCOMPETENCY_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Information that describes aptitudes of a utility employee. Unlike Skills that
			 * an ErpPerson must be certified to perform before undertaking certain type of
			 * assignments (to be able to perfrom a Craft), ErpCompetency has more to do with
			 * typical Human Resource (HR) matters such as schooling, training, etc.
			 */
			class ErpCompetency : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpCompetency();
				virtual ~ErpCompetency();

			};

		}

	}

}
#endif // ERPCOMPETENCY_H
