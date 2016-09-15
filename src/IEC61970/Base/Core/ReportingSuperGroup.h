///////////////////////////////////////////////////////////
//  ReportingSuperGroup.h
//  Implementation of the Class ReportingSuperGroup
//  Created on:      28-Jan-2016 12:46:34
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_0CDDE238_4D91_417f_86F7_15155185C9BD__INCLUDED_)
#define EA_0CDDE238_4D91_417f_86F7_15155185C9BD__INCLUDED_

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
#endif // !defined(EA_0CDDE238_4D91_417f_86F7_15155185C9BD__INCLUDED_)
