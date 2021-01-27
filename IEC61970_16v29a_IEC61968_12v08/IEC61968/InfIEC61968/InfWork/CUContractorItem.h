///////////////////////////////////////////////////////////
//  CUContractorItem.h
//  Implementation of the Class CUContractorItem
///////////////////////////////////////////////////////////

#ifndef CUCONTRACTORITEM_H
#define CUCONTRACTORITEM_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/CompatibleUnit.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Compatible unit contractor item.
			 */
			class CUContractorItem : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				CUContractorItem();
				virtual ~CUContractorItem();
				/**
				 * Activity code identifies a specific and distinguishable unit of work.
				 */
				IEC61970::Base::Domain::String activityCode;
				/**
				 * The amount that a given contractor will charge for performing this unit of work.
				 */
				IEC61970::Base::Domain::Money bidAmount;
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::CompatibleUnit*> CompatibleUnits;

			};

		}

	}

}
#endif // CUCONTRACTORITEM_H
