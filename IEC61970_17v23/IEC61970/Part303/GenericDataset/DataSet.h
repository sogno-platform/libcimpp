///////////////////////////////////////////////////////////
//  DataSet.h
//  Implementation of the Class DataSet
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef DATASET_H
#define DATASET_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Part303/GenericDataset/Profile.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			/**
			 * A generic container of a version of instance data. The MRID can be used in an
			 * audit trail, not in reusable script intended to work with new versions of data.
			 * 
			 * A dataset could be serialized multiple times and in multiple technologies, yet
			 * retain the same identity.
			 */
			class DataSet : public BaseClass
			{

			public:
				DataSet();
				virtual ~DataSet();
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
				 * The profiles that describe the contents of the data set and the rules governing
				 * the contents of the data set.
				 */
				std::list<IEC61970::Part303::GenericDataset::Profile*> Profile;

			};

		}

	}

}
#endif // DATASET_H
