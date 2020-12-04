///////////////////////////////////////////////////////////
//  Assignment.h
//  Implementation of the Class Assignment
///////////////////////////////////////////////////////////

#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * An assignment is given to an ErpPerson, Crew, Organisation, Equipment Item,
			 * Tool, etc. and may be used to perform Work, WorkTasks, Procedures, etc.
			 * TimeSchedules may be set up directly for Assignments or indirectly via the
			 * associated WorkTask. Note that these associations are all inherited through the
			 * recursive relationship on Document.
			 */
			class Assignment : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				Assignment();
				virtual ~Assignment();
				/**
				 * Period between the assignment becoming effective and its expiration.
				 */
				IEC61970::Base::Domain::DateTimeInterval effectivePeriod;

			};

		}

	}

}
#endif // ASSIGNMENT_H
