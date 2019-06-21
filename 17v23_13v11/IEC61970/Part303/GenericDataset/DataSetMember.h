///////////////////////////////////////////////////////////
//  DataSetMember.h
//  Implementation of the Class DataSetMember
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef DATASETMEMBER_H
#define DATASETMEMBER_H

#include "BaseClass.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * A generic description of a version of instance data.
			 */
			class DataSetMember : public BaseClass
			{

			public:
				DataSetMember();
				virtual ~DataSetMember();
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
				 * The CIM object holding the properties of this dataset context.   Sometimes
				 * properties are not required and only the reference to the registered object is
				 * required.
				 */
				IEC61970::Base::Core::IdentifiedObject *PropertiesObject;
				/**
				 * The registered CIM object.
				 */
				IEC61970::Base::Core::IdentifiedObject *TargetObject;

			};

		}

	}

}
#endif // DATASETMEMBER_H
