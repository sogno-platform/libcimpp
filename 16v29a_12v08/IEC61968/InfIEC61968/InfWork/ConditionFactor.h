///////////////////////////////////////////////////////////
//  ConditionFactor.h
//  Implementation of the Class ConditionFactor
///////////////////////////////////////////////////////////

#ifndef CONDITIONFACTOR_H
#define CONDITIONFACTOR_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfWork/ConditionFactorKind.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * This is to specify the various condition factors for a design that may alter
			 * the cost estimate or the allocation.
			 */
			class ConditionFactor : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				ConditionFactor();
				virtual ~ConditionFactor();
				/**
				 * The actual value of the condition factor, such as labor flat fee or percentage.
				 */
				IEC61970::Base::Domain::String cfValue;
				/**
				 * Kind of this condition factor.
				 */
				IEC61968::InfIEC61968::InfWork::ConditionFactorKind kind;
				IEC61968::Common::Status status;

			};

		}

	}

}
#endif // CONDITIONFACTOR_H
