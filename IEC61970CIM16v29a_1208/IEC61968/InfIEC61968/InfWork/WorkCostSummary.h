///////////////////////////////////////////////////////////
//  WorkCostSummary.h
//  Implementation of the Class WorkCostSummary
///////////////////////////////////////////////////////////

#ifndef WORKCOSTSUMMARY_H
#define WORKCOSTSUMMARY_H

#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A roll up by cost type for the entire cost of a work order. For example, total
			 * labor.
			 */
			class WorkCostSummary : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				WorkCostSummary();
				virtual ~WorkCostSummary();

			};

		}

	}

}
#endif // WORKCOSTSUMMARY_H
