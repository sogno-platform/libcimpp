///////////////////////////////////////////////////////////
//  QualificationRequirement.h
//  Implementation of the Class QualificationRequirement
///////////////////////////////////////////////////////////

#ifndef QUALIFICATIONREQUIREMENT_H
#define QUALIFICATIONREQUIREMENT_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfAssets/Specification.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Certain skills are required and must be certified in order for a person
			 * (typically a member of a crew) to be qualified to work on types of equipment.
			 */
			class QualificationRequirement : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				QualificationRequirement();
				virtual ~QualificationRequirement();
				/**
				 * Qualification identifier.
				 */
				IEC61970::Base::Domain::String qualificationID;
				std::list<IEC61968::InfIEC61968::InfAssets::Specification*> Specifications;

			};

		}

	}

}
#endif // QUALIFICATIONREQUIREMENT_H
