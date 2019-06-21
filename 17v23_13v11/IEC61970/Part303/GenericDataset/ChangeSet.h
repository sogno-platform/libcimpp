///////////////////////////////////////////////////////////
//  ChangeSet.h
//  Implementation of the Class ChangeSet
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef CHANGESET_H
#define CHANGESET_H

#include "IEC61970/Part303/GenericDataset/DataSet.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * Describes a set of changes that can be applied in different situations.   A
			 * given registered target object  MRID may only be referenced once by the
			 * contained change set members.
			 */
			class ChangeSet : public IEC61970::Part303::GenericDataset::DataSet
			{

			public:
				ChangeSet();
				virtual ~ChangeSet();

			};

		}

	}

}
#endif // CHANGESET_H
