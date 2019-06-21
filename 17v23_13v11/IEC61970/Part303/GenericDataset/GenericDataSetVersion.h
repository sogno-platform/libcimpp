///////////////////////////////////////////////////////////
//  GenericDataSetVersion.h
//  Implementation of the Class GenericDataSetVersion
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef GENERICDATASETVERSION_H
#define GENERICDATASETVERSION_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Date.h"

namespace IEC61970
{
	namespace Part303
	{
		namespace GenericDataset
		{
			class GenericDataSetVersion : public BaseClass
			{

			public:
				GenericDataSetVersion();
				virtual ~GenericDataSetVersion();
				/**
				 * The universal CIM version name describing a consistent set of packages. 
				 */
				IEC61970::Base::Domain::String majorVersion;
				/**
				 * Describe minor updates and error corrections.
				 */
				IEC61970::Base::Domain::String minorVersion;
				/**
				 * The date when the complete CIM canonical model is published and made available
				 * for use,
				 * After the publication the major version and name space are updated.
				 */
				IEC61970::Base::Domain::Date published;

			};

		}

	}

}
#endif // GENERICDATASETVERSION_H
