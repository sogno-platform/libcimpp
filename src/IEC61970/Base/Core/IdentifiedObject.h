///////////////////////////////////////////////////////////
//  IdentifiedObject.h
//  Implementation of the Class IdentifiedObject
///////////////////////////////////////////////////////////

#ifndef IDENTIFIEDOBJECT_H
#define IDENTIFIEDOBJECT_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "BaseClass.h"

// Forward declaration of DiagramObject
namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
			class DiagramObject;
		}
	}
}

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * This is a root class to provide common identification for all classes needing
			 * identification and naming attributes.
			 */
			class IdentifiedObject : public BaseClass
			{

			public:
				IdentifiedObject();
				virtual ~IdentifiedObject();
				/**
				 * The aliasName is free text human readable name of the object alternative to
				 * IdentifiedObject.name. It may be non unique and may not correlate to a naming
				 * hierarchy.
				 * The attribute aliasName is retained because of backwards compatibility between
				 * CIM relases. It is however recommended to replace aliasName with the Name class
				 * as aliasName is planned for retirement at a future time.
				 */
				IEC61970::Base::Domain::String aliasName;
				/**
				 * The description is a free human readable text describing or naming the object.
				 * It may be non unique and may not correlate to a naming hierarchy.
				 */
				IEC61970::Base::Domain::String description;
				/**
				 * Master resource identifier issued by a model authority. The mRID is unique
				 * within an exchange context. Global uniqueness is easily achieved by using a
				 * UUID,  as specified in RFC 4122, for the mRID. The use of UUID is strongly
				 * recommended.
				 * For CIMXML data files in RDF syntax conforming to IEC 61970-552 Edition 1, the
				 * mRID is mapped to rdf:ID or rdf:about attributes that identify CIM object
				 * elements.
				 */
				IEC61970::Base::Domain::String mRID;
				/**
				 * The name is any free human readable and possibly non unique text naming the
				 * object.
				 */
				IEC61970::Base::Domain::String name;
				/**
				 * The diagram objects that are associated with the domain object.
				 */
				std::list<IEC61970::Base::DiagramLayout::DiagramObject*> DiagramObjects;

			};

		}

	}

}
#endif // IDENTIFIEDOBJECT_H
