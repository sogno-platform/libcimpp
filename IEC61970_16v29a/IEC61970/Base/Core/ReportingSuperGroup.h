///////////////////////////////////////////////////////////
//  ReportingSuperGroup.h
//  Implementation of the Class ReportingSuperGroup
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef REPORTINGSUPERGROUP_H
#define REPORTINGSUPERGROUP_H

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
			 * A reporting super group, groups reporting groups for a higher level report.
			 */
			class ReportingSuperGroup : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
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


				ReportingSuperGroup();
				virtual ~ReportingSuperGroup();
				/**
				 * Reporting groups that are grouped under this super group.
				 */
//#warning Member "ReportingGroup" is renamed to "ReportingGroups", this does not comply the CIM standard!
				std::list<IEC61970::Base::Core::ReportingSuperGroup::ReportingGroup*> ReportingGroups;

			};

		}

	}

}
#endif // REPORTINGSUPERGROUP_H
