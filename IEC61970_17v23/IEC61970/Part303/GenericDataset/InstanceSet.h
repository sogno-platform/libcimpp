///////////////////////////////////////////////////////////
//  InstanceSet.h
//  Implementation of the Class InstanceSet
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef INSTANCESET_H
#define INSTANCESET_H

#include "IEC61970/Part303/GenericDataset/DataSet.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * Instance of a version of a model part.   This corresponds to a payload of
			 * instance data.   
			 */
			class InstanceSet : public IEC61970::Part303::GenericDataset::DataSet
			{

			public:
				InstanceSet();
				virtual ~InstanceSet();

			};

		}

	}

}
#endif // INSTANCESET_H
