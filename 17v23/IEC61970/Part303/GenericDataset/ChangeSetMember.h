///////////////////////////////////////////////////////////
//  ChangeSetMember.h
//  Implementation of the Class ChangeSetMember
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef CHANGESETMEMBER_H
#define CHANGESETMEMBER_H

#include "IEC61970/Part303/GenericDataset/ChangeSet.h"
#include "IEC61970/Part303/GenericDataset/DataSetMember.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * A CRUD-style data object.
			 */
			class ChangeSetMember : public IEC61970::Part303::GenericDataset::DataSetMember
			{

			public:
				ChangeSetMember();
				virtual ~ChangeSetMember();
				/**
				 * Dataset containing the data objects.
				 */
				IEC61970::Part303::GenericDataset::ChangeSet *Changeset;

			};

		}

	}

}
#endif // CHANGESETMEMBER_H
