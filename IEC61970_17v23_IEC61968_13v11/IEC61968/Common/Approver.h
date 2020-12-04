///////////////////////////////////////////////////////////
//  Approver.h
//  Implementation of the Class Approver
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef APPROVER_H
#define APPROVER_H

#include <list>

#include "IEC61968/Common/Document.h"
#include "IEC61968/Common/DocumentPersonRole.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Person who accepted/signed or rejected the document.
		 */
		class Approver : public IEC61968::Common::DocumentPersonRole
		{

		public:
			Approver();
			virtual ~Approver();
			/**
			 * All documents for this approver.
			 */
			std::list<IEC61968::Common::Document*> Documents;

		};

	}

}
#endif // APPROVER_H
