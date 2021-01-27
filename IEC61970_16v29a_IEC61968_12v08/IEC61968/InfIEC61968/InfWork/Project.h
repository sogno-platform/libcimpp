///////////////////////////////////////////////////////////
//  Project.h
//  Implementation of the Class Project
///////////////////////////////////////////////////////////

#ifndef PROJECT_H
#define PROJECT_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A collection of related work. For construction projects and maintenance
			 * projects, multiple phases may be performed.
			 */
			class Project : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				Project();
				virtual ~Project();
				/**
				 * Overall project budget.
				 */
				IEC61970::Base::Domain::Money budget;
				std::list<IEC61968::InfIEC61968::InfWork::Project*> SubProjects;

			};

		}

	}

}
#endif // PROJECT_H
