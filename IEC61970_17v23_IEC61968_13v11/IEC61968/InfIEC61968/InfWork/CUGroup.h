///////////////////////////////////////////////////////////
//  CUGroup.h
//  Implementation of the Class CUGroup
///////////////////////////////////////////////////////////

#ifndef CUGROUP_H
#define CUGROUP_H

#include <list>

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A Compatible Unit Group identifies a set of compatible units which may be
			 * jointly utilized for estimating and designating jobs.
			 */
			class CUGroup : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				CUGroup();
				virtual ~CUGroup();
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::CUGroup*> ChildCUGroups;

			};

		}

	}

}
#endif // CUGROUP_H
