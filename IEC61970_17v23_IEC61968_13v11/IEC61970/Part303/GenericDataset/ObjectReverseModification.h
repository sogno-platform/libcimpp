///////////////////////////////////////////////////////////
//  ObjectReverseModification.h
//  Implementation of the Class ObjectReverseModification
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef OBJECTREVERSEMODIFICATION_H
#define OBJECTREVERSEMODIFICATION_H

#include "IEC61970/Part303/GenericDataset/ChangeSetMember.h"
#include "IEC61970/Part303/GenericDataset/ObjectModification.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * Used to specify precondition properties for a preconditioned update.
			 */
			class ObjectReverseModification : public IEC61970::Part303::GenericDataset::ChangeSetMember
			{

			public:
				ObjectReverseModification();
				virtual ~ObjectReverseModification();
				/**
				 * The associated data object representing the update. Normally the associaiton is
				 * specifed, but in the case of a proxy object where the association is removed,
				 * we might not reference any data object as it would only reference a proxy data
				 * object with no associations.
				 */
				IEC61970::Part303::GenericDataset::ObjectModification *ObjectModification;

			};

		}

	}

}
#endif // OBJECTREVERSEMODIFICATION_H
