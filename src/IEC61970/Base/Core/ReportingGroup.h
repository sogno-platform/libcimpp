///////////////////////////////////////////////////////////
//  ReportingGroup.h
//  Implementation of the Class ReportingGroup
//  Created on:      28-Jan-2016 12:46:34
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_AC6E5392_D671_43e0_98E0_7FB7B3334DEF__INCLUDED_)
#define EA_AC6E5392_D671_43e0_98E0_7FB7B3334DEF__INCLUDED_

#include <list>

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A reporting group is used for various ad-hoc groupings used for reporting.
			 */
			class ReportingGroup : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ReportingGroup();
				virtual ~ReportingGroup();
				/**
				 * Power system resources which belong to this reporting group.
				 */
				std::list<IEC61970::Base::Core::PowerSystemResource*> PowerSystemResource;

			};

		}

	}

}
#endif // !defined(EA_AC6E5392_D671_43e0_98E0_7FB7B3334DEF__INCLUDED_)
