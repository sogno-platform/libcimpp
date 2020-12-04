///////////////////////////////////////////////////////////
//  DesignLocation.h
//  Implementation of the Class DesignLocation
///////////////////////////////////////////////////////////

#ifndef DESIGNLOCATION_H
#define DESIGNLOCATION_H

#include <list>

#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/MiscCostItem.h"
#include "IEC61968/InfIEC61968/InfWork/DesignLocationCU.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/ConditionFactor.h"
#include "IEC61968/Work/WorkLocation.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			class Design;
		}
	}
}

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A logical part of the design (e.g., pole and all equipment on a pole). This
			 * includes points and spans.
			 */
			class DesignLocation : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				DesignLocation();
				virtual ~DesignLocation();
				/**
				 * The legth of the span from the previous pole to this pole.
				 */
				IEC61970::Base::Domain::Length spanLength;
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::MiscCostItem*> MiscCostItems;
				std::list<IEC61968::InfIEC61968::InfWork::DesignLocationCU*> DesignLocationCUs;
				std::list<IEC61968::InfIEC61968::InfWork::Design*> Designs;
				std::list<IEC61968::InfIEC61968::InfWork::ConditionFactor*> ConditionFactors;
				std::list<IEC61968::Work::WorkLocation*> WorkLocations;

			};

		}

	}

}
#endif // DESIGNLOCATION_H
