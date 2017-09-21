///////////////////////////////////////////////////////////
//  CULaborItem.h
//  Implementation of the Class CULaborItem
///////////////////////////////////////////////////////////

#ifndef CULABORITEM_H
#define CULABORITEM_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Hours.h"
#include "IEC61970/Base/Domain/CostRate.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/QualificationRequirement.h"
#include "IEC61968/InfIEC61968/InfWork/CompatibleUnit.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/CULaborCode.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Compatible unit labor item.
			 */
			class CULaborItem : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				CULaborItem();
				virtual ~CULaborItem();
				/**
				 * Activity code identifies a specific and distinguishable unit of work.
				 */
				IEC61970::Base::Domain::String activityCode;
				/**
				 * Estimated time to perform work.
				 */
				IEC61970::Base::Domain::Hours laborDuration;
				/**
				 * The labor rate applied for work.
				 */
				IEC61970::Base::Domain::CostRate laborRate;
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::QualificationRequirement*> QualificationRequirements;
				std::list<IEC61968::InfIEC61968::InfWork::CompatibleUnit*> CompatibleUnits;
				IEC61968::InfIEC61968::InfWork::CULaborCode *CULaborCode;

			};

		}

	}

}
#endif // CULABORITEM_H
