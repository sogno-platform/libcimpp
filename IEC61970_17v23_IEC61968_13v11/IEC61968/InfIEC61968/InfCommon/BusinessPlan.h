///////////////////////////////////////////////////////////
//  BusinessPlan.h
//  Implementation of the Class BusinessPlan
///////////////////////////////////////////////////////////

#ifndef BUSINESSPLAN_H
#define BUSINESSPLAN_H

#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * A BusinessPlan is an organized sequence of predetermined actions required to
			 * complete a future organizational objective. It is a type of document that
			 * typically references a schedule, physical and/or logical resources (assets
			 * and/or PowerSystemResources), locations, etc.
			 */
			class BusinessPlan : public IEC61968::Common::Document
			{

			public:
				BusinessPlan();
				virtual ~BusinessPlan();

			};

		}

	}

}
#endif // BUSINESSPLAN_H
