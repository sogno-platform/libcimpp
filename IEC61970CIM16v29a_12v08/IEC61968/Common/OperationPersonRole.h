///////////////////////////////////////////////////////////
//  OperationPersonRole.h
//  Implementation of the Class OperationPersonRole
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OPERATIONPERSONROLE_H
#define OPERATIONPERSONROLE_H

#include "IEC61968/Common/PersonRole.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Person role in the context of utility operations.
		 */
		class OperationPersonRole : public IEC61968::Common::PersonRole
		{

		public:
			OperationPersonRole();
			virtual ~OperationPersonRole();

		};

	}

}
#endif // OPERATIONPERSONROLE_H
