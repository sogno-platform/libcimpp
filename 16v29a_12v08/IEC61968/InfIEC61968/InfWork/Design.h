///////////////////////////////////////////////////////////
//  Design.h
//  Implementation of the Class Design
///////////////////////////////////////////////////////////

#ifndef DESIGN_H
#define DESIGN_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/InfIEC61968/InfWork/DesignKind.h"
#include "IEC61968/InfIEC61968/InfWork/OldWorkTask.h"
#include "IEC61968/InfIEC61968/InfWork/WorkCostDetail.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpBOM.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"
#include "IEC61968/InfIEC61968/InfWork/ConditionFactor.h"
#include "IEC61968/Work/Work.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A design for consideration by customers, potential customers, or internal work.
			 * 
			 * Note that the Version of design is the revision attribute that is inherited
			 * from Document.
			 */
			class Design : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				Design();
				virtual ~Design();
				/**
				 * Estimated cost (not price) of design.
				 */
				IEC61970::Base::Domain::Money costEstimate;
				/**
				 * Kind of this design.
				 */
				IEC61968::InfIEC61968::InfWork::DesignKind kind;
				/**
				 * Price to customer for implementing design.
				 */
				IEC61970::Base::Domain::Money price;
				std::list<IEC61968::InfIEC61968::InfWork::OldWorkTask*> WorkTasks;
				std::list<IEC61968::InfIEC61968::InfWork::WorkCostDetail*> WorkCostDetails;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpBOM*> ErpBOMs;
				std::list<IEC61968::InfIEC61968::InfWork::ConditionFactor*> ConditionFactors;
				IEC61968::Work::Work *Work;

			};

		}

	}

}
#endif // DESIGN_H
