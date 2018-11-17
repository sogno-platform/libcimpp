///////////////////////////////////////////////////////////
//  Model.h
//  Implementation of the Class Model
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef MODEL_H
#define MODEL_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Part552Header/URI.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61970
{
	namespace Part552Header
	{
		namespace ModelDescription
		{
			class Model : public BaseClass
			{

			public:
				Model();
				virtual ~Model();
				IEC61970::Base::Domain::DateTime created;
				IEC61970::Base::Domain::String description;
				IEC61970::Part552Header::URI modelingAuthoritySet;
				IEC61970::Part552Header::URI profile;
				IEC61970::Base::Domain::DateTime scenarioTime;
				IEC61970::Base::Domain::Integer version;
				std::list<IEC61970::Part552Header::ModelDescription::Model*> Supersedes;
				std::list<IEC61970::Part552Header::ModelDescription::Model*> DependentOn;

			};

		}

	}

}
#endif // MODEL_H
