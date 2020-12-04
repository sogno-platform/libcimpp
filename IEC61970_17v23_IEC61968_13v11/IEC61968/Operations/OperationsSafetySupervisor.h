///////////////////////////////////////////////////////////
//  OperationsSafetySupervisor.h
//  Implementation of the Class OperationsSafetySupervisor
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OPERATIONSSAFETYSUPERVISOR_H
#define OPERATIONSSAFETYSUPERVISOR_H

#include <list>

#include "IEC61968/Operations/SafetyDocument.h"
#include "IEC61968/Common/Operator.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Operator with responsibility that the work in high voltage installation is
		 * executed in a safe manner and according to safety regulation.
		 */
		class OperationsSafetySupervisor : public IEC61968::Common::Operator
		{

		public:
			OperationsSafetySupervisor();
			virtual ~OperationsSafetySupervisor();
			/**
			 * All safety documents released to this supervisor.
			 */
			std::list<IEC61968::Operations::SafetyDocument*> ReleasedSafetyDocuments;
			/**
			 * All safety documents issued by this supervisor.
			 */
			std::list<IEC61968::Operations::SafetyDocument*> IssuedSafetyDocuments;

		};

	}

}
#endif // OPERATIONSSAFETYSUPERVISOR_H
