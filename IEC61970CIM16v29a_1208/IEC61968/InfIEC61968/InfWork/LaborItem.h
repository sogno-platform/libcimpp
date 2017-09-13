///////////////////////////////////////////////////////////
//  LaborItem.h
//  Implementation of the Class LaborItem
///////////////////////////////////////////////////////////

#ifndef LABORITEM_H
#define LABORITEM_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/Hours.h"
#include "IEC61970/Base/Domain/CostRate.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkCostDetail.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Labor used for work order.
			 */
			class LaborItem : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				LaborItem();
				virtual ~LaborItem();
				/**
				 * Activity code identifies a specific and distinguishable unit of work.
				 */
				IEC61970::Base::Domain::String activityCode;
				/**
				 * Total cost for labor. Note that this may not be able to be derived from labor
				 * rate and time charged.
				 */
				IEC61970::Base::Domain::Money cost;
				/**
				 * Time required to perform work.
				 */
				IEC61970::Base::Domain::Hours laborDuration;
				/**
				 * The labor rate applied for work.
				 */
				IEC61970::Base::Domain::CostRate laborRate;
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfWork::WorkCostDetail *WorkCostDetail;

			};

		}

	}

}
#endif // LABORITEM_H
