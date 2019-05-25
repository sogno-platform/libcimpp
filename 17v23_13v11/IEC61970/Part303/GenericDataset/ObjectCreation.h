///////////////////////////////////////////////////////////
//  ObjectCreation.h
//  Implementation of the Class ObjectCreation
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef OBJECTCREATION_H
#define OBJECTCREATION_H

#include "IEC61970/Part303/GenericDataset/ChangeSetMember.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * An object is to be created in the context.
			 */
			class ObjectCreation : public IEC61970::Part303::GenericDataset::ChangeSetMember
			{

			public:
				ObjectCreation();
				virtual ~ObjectCreation();

			};

		}

	}

}
#endif // OBJECTCREATION_H
