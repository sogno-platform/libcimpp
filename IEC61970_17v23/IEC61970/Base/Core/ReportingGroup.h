///////////////////////////////////////////////////////////
//  ReportingGroup.h
//  Implementation of the Class ReportingGroup
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef REPORTINGGROUP_H
#define REPORTINGGROUP_H

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
#endif // REPORTINGGROUP_H
