///////////////////////////////////////////////////////////
//  Skill.h
//  Implementation of the Class Skill
///////////////////////////////////////////////////////////

#ifndef SKILL_H
#define SKILL_H

#include <list>

#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/InfIEC61968/InfCommon/SkillLevelKind.h"
#include "IEC61968/InfIEC61968/InfWork/QualificationRequirement.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/InfIEC61968/InfCommon/Craft.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Proficiency level of a craft, which is required to operate or maintain a
			 * particular type of asset and/or perform certain types of work. 
			 */
			class Skill : public IEC61968::Common::Document
			{

			public:
				Skill();
				virtual ~Skill();
				/**
				 * Interval between the certification and its expiry.
				 */
				IEC61970::Base::Domain::DateTimeInterval certificationPeriod;
				/**
				 * Date and time the skill became effective.
				 */
				IEC61970::Base::Domain::DateTime effectiveDateTime;
				/**
				 * Level of skill for a Craft.
				 */
				IEC61968::InfIEC61968::InfCommon::SkillLevelKind level;
				std::list<IEC61968::InfIEC61968::InfWork::QualificationRequirement*> QualificationRequirements;
				std::list<IEC61968::InfIEC61968::InfCommon::Craft*> Crafts;

			};

		}

	}

}
#endif // SKILL_H
