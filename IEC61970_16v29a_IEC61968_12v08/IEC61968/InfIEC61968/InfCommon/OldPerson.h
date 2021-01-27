///////////////////////////////////////////////////////////
//  OldPerson.h
//  Implementation of the Class OldPerson
///////////////////////////////////////////////////////////

#ifndef OLDPERSON_H
#define OLDPERSON_H

#include <list>

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Meas/MeasurementValue.h"
#include "IEC61968/InfIEC61968/InfCommon/PersonPropertyRole.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpCompetency.h"
#include "IEC61968/InfIEC61968/InfWork/LaborItem.h"
#include "IEC61968/InfIEC61968/InfCommon/PersonOrganisationRole.h"
#include "IEC61968/InfIEC61968/InfCommon/PersonDocumentRole.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPersonnel.h"
#include "IEC61968/Common/Person.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * General purpose information for name and other information to contact people.
			 */
			class Skill;
			class OldPerson : public IEC61968::Common::Person
			{

			public:
				OldPerson();
				virtual ~OldPerson();
				IEC61968::Common::Status status;
				/**
				 * Utility-specific classification for this person, according to the utility's
				 * corporate standards and practices. Examples include employee, contractor, agent,
				 * not affiliated, etc.
				 * Note that this field is not used to indicate whether this person is a customer
				 * of the utility. Often an employee or contractor is also a customer. Customer
				 * information is gained with relationship to Organisation and CustomerData. In
				 * similar fashion, this field does not indicate the various roles this person may
				 * fill as part of utility operations.
				 */
				IEC61970::Base::Domain::String type;
				std::list<IEC61970::Base::Meas::MeasurementValue*> MeasurementValues;
				std::list<IEC61968::InfIEC61968::InfCommon::PersonPropertyRole*> LandPropertyRoles;
				IEC61968::InfIEC61968::InfERPSupport::ErpCompetency *ErpCompetency;
				std::list<IEC61968::InfIEC61968::InfWork::LaborItem*> LaborItems;
				std::list<IEC61968::InfIEC61968::InfCommon::Skill*> Skills;
				std::list<IEC61968::InfIEC61968::InfCommon::PersonOrganisationRole*> OrganisationRoles;
				std::list<IEC61968::InfIEC61968::InfCommon::PersonDocumentRole*> DocumentRoles;
				IEC61968::InfIEC61968::InfERPSupport::ErpPersonnel *ErpPersonnel;

			};

		}

	}

}
#endif // OLDPERSON_H
