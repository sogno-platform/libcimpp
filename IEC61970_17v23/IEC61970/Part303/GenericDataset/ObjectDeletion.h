///////////////////////////////////////////////////////////
//  ObjectDeletion.h
//  Implementation of the Class ObjectDeletion
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef OBJECTDELETION_H
#define OBJECTDELETION_H

#include "IEC61970/Part303/GenericDataset/ChangeSetMember.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * An object is to be deleted in the context.
			 */
			class ObjectDeletion : public IEC61970::Part303::GenericDataset::ChangeSetMember
			{

			public:
				ObjectDeletion();
				virtual ~ObjectDeletion();

			};

		}

	}

}
#endif // OBJECTDELETION_H
