///////////////////////////////////////////////////////////
//  BusinessCase.h
//  Implementation of the Class BusinessCase
///////////////////////////////////////////////////////////

#ifndef BUSINESSCASE_H
#define BUSINESSCASE_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfWork/Project.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"
#include "IEC61968/Work/Work.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Business justification for capital expenditures, usually addressing operations
			 * and maintenance costs as well.
			 */
			class BusinessCase : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				BusinessCase();
				virtual ~BusinessCase();
				/**
				 * A codified representation of the business case (i.e., codes for highway
				 * relocation, replace substation transformers, etc.).
				 */
				IEC61970::Base::Domain::String corporateCode;
				std::list<IEC61968::InfIEC61968::InfWork::Project*> Projects;
				std::list<IEC61968::Work::Work*> Works;

			};

		}

	}

}
#endif // BUSINESSCASE_H
