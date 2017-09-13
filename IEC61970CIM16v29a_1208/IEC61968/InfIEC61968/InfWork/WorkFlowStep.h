///////////////////////////////////////////////////////////
//  WorkFlowStep.h
//  Implementation of the Class WorkFlowStep
///////////////////////////////////////////////////////////

#ifndef WORKFLOWSTEP_H
#define WORKFLOWSTEP_H

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/OldWorkTask.h"
#include "IEC61968/Work/Work.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A pre-defined set of work steps for a given type of work.
			 */
			class WorkFlowStep : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				WorkFlowStep();
				virtual ~WorkFlowStep();
				/**
				 * Used to define dependencies of each work flow step, which is for the instance
				 * of WorkTask associated with a given instance of WorkFlow.
				 */
				IEC61970::Base::Domain::Integer sequenceNumber;
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfWork::OldWorkTask*> WorkTasks;
				IEC61968::Work::Work *Work;

			};

		}

	}

}
#endif // WORKFLOWSTEP_H
