///////////////////////////////////////////////////////////
//  DesignLocationCU.h
//  Implementation of the Class DesignLocationCU
///////////////////////////////////////////////////////////

#ifndef DESIGNLOCATIONCU_H
#define DESIGNLOCATIONCU_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfWork/WorkActionKind.h"
#include "IEC61970/Base/Domain/IntegerQuantity.h"
#include "IEC61970/Base/Domain/Date.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/InfIEC61968/InfWork/OldWorkTask.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/ConditionFactor.h"
#include "IEC61968/InfIEC61968/InfWork/CUGroup.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Compatible unit at a given design location.
			 */
			class Design;
			class DesignLocationCU : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				DesignLocationCU();
				virtual ~DesignLocationCU();
				/**
				 * A code that helps direct accounting (capital, expense, or accounting treatment).
				 */
				IEC61970::Base::Domain::String cuAccount;
				/**
				 * A code that instructs the crew what action to perform.
				 */
				IEC61968::InfIEC61968::InfWork::WorkActionKind cuAction = IEC61968::InfIEC61968::InfWork::WorkActionKind::_undef;
				/**
				 * The quantity of the CU being assigned to this location.
				 */
				IEC61970::Base::Domain::IntegerQuantity cuQuantity;
				/**
				 * As the same CU can be used for different purposes and accounting purposes,
				 * usage must be specified. Examples include: distribution, transmission,
				 * substation.
				 */
				IEC61970::Base::Domain::String cuUsage;
				/**
				 * Year when a CU that represents an asset is removed.
				 */
				IEC61970::Base::Domain::Date removalDate;
				IEC61968::Common::Status status;
				/**
				 * True if associated electrical equipment is intended to be energized while work
				 * is being performed.
				 */
				IEC61970::Base::Domain::Boolean toBeEnergised;
				std::list<IEC61968::InfIEC61968::InfWork::OldWorkTask*> WorkTasks;
				std::list<IEC61968::InfIEC61968::InfWork::Design*> Designs;
				std::list<IEC61968::InfIEC61968::InfWork::ConditionFactor*> ConditionFactors;
				std::list<IEC61968::InfIEC61968::InfWork::CUGroup*> CUGroups;

			};

		}

	}

}
#endif // DESIGNLOCATIONCU_H
