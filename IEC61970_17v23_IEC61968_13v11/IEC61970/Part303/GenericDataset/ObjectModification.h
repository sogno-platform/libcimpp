///////////////////////////////////////////////////////////
//  ObjectModification.h
//  Implementation of the Class ObjectModification
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef OBJECTMODIFICATION_H
#define OBJECTMODIFICATION_H

#include "IEC61970/Part303/GenericDataset/ChangeSetMember.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * The object already exists and is to be modified.
			 */
			class ObjectModification : public IEC61970::Part303::GenericDataset::ChangeSetMember
			{

			public:
				ObjectModification();
				virtual ~ObjectModification();

			};

		}

	}

}
#endif // OBJECTMODIFICATION_H
