///////////////////////////////////////////////////////////
//  ReportingSuperGroup.h
//  Implementation of the Class ReportingSuperGroup
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef REPORTINGSUPERGROUP_H
#define REPORTINGSUPERGROUP_H

#include <list>

#include "IEC61970/Base/Core/ReportingGroup.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A reporting super group, groups reporting groups for a higher level report.
			 */
			class ReportingSuperGroup : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ReportingSuperGroup();
				virtual ~ReportingSuperGroup();
				/**
				 * Reporting groups that are grouped under this super group.
				 */
				std::list<IEC61970::Base::Core::ReportingGroup*> ReportingGroup;

			};

		}

	}

}
#endif // REPORTINGSUPERGROUP_H
