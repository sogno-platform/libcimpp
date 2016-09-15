///////////////////////////////////////////////////////////
//  LoadAggregate.h
//  Implementation of the Class LoadAggregate
//  Created on:      28-Jan-2016 12:45:34
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_5418504E_7B73_46c1_8261_9DCA388BF93B__INCLUDED_)
#define EA_5418504E_7B73_46c1_8261_9DCA388BF93B__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/LoadDynamics/LoadDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace LoadDynamics
			{
				/**
				 * Standard aggregate load model comprised of static and/or dynamic components.  A
				 * static load model represents the sensitivity of the real and reactive power
				 * consumed by the load to the amplitude and frequency of the bus voltage. A
				 * dynamic load model can used to represent the aggregate response of the motor
				 * components of the load.
				 */
				class LoadAggregate : public IEC61970::Dynamics::StandardModels::LoadDynamics::LoadDynamics
				{

				public:
					LoadAggregate();
					virtual ~LoadAggregate();

				};

			}

		}

	}

}
#endif // !defined(EA_5418504E_7B73_46c1_8261_9DCA388BF93B__INCLUDED_)
