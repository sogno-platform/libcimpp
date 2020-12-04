///////////////////////////////////////////////////////////
//  Operator.h
//  Implementation of the Class Operator
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OPERATOR_H
#define OPERATOR_H

#include "IEC61968/Common/OperationPersonRole.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Control room operator.
		 */
		class Operator : public IEC61968::Common::OperationPersonRole
		{

		public:
			Operator();
			virtual ~Operator();

		};

	}

}
#endif // OPERATOR_H
