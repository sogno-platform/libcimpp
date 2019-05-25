///////////////////////////////////////////////////////////
//  InstanceSetMember.h
//  Implementation of the Class InstanceSetMember
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef INSTANCESETMEMBER_H
#define INSTANCESETMEMBER_H

#include "IEC61970/Part303/GenericDataset/InstanceSet.h"
#include "IEC61970/Part303/GenericDataset/DataSetMember.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * A description of a version of instance data.
			 */
			class InstanceSetMember : public IEC61970::Part303::GenericDataset::DataSetMember
			{

			public:
				InstanceSetMember();
				virtual ~InstanceSetMember();
				/**
				 * Dataset containing the data objects.
				 */
				IEC61970::Part303::GenericDataset::InstanceSet *InstanceSet;

			};

		}

	}

}
#endif // INSTANCESETMEMBER_H
