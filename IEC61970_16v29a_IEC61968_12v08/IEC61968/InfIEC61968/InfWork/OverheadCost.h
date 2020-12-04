///////////////////////////////////////////////////////////
//  OverheadCost.h
//  Implementation of the Class OverheadCost
///////////////////////////////////////////////////////////

#ifndef OVERHEADCOST_H
#define OVERHEADCOST_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Overhead cost applied to work order.
			 */
			class WorkCostDetail;
			class OverheadCost : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				OverheadCost();
				virtual ~OverheadCost();
				/**
				 * Overhead code.
				 */
				IEC61970::Base::Domain::String code;
				/**
				 * The overhead cost to be applied.
				 */
				IEC61970::Base::Domain::Money cost;
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::WorkCostDetail*> WorkCostDetails;

			};

		}

	}

}
#endif // OVERHEADCOST_H
