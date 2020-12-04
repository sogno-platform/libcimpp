///////////////////////////////////////////////////////////
//  DocumentPersonRole.h
//  Implementation of the Class DocumentPersonRole
///////////////////////////////////////////////////////////

#ifndef DOCUMENTPERSONROLE_H
#define DOCUMENTPERSONROLE_H

#include "IEC61968/Common/PersonRole.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Person role with respect to documents.
		 */
		class DocumentPersonRole : public IEC61968::Common::PersonRole
		{

		public:
			DocumentPersonRole();
			virtual ~DocumentPersonRole();

		};

	}

}
#endif // DOCUMENTPERSONROLE_H
