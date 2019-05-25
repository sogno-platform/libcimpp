///////////////////////////////////////////////////////////
//  Author.h
//  Implementation of the Class Author
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef AUTHOR_H
#define AUTHOR_H

#include <list>

#include "IEC61968/Common/Document.h"
#include "IEC61968/Common/ActivityRecord.h"
#include "IEC61968/Common/DocumentPersonRole.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Person who created document or activity record.
		 */
		class Author : public IEC61968::Common::DocumentPersonRole
		{

		public:
			Author();
			virtual ~Author();
			/**
			 * All documents of this this author.
			 */
			std::list<IEC61968::Common::Document*> Documents;
			/**
			 * All activity records with this author.
			 */
			std::list<IEC61968::Common::ActivityRecord*> ActivityRecords;

		};

	}

}
#endif // AUTHOR_H
