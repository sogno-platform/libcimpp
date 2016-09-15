///////////////////////////////////////////////////////////
//  ConformLoad.h
//  Implementation of the Class ConformLoad
//  Created on:      28-Jan-2016 12:43:37
///////////////////////////////////////////////////////////

#if !defined(EA_8C1D8513_C473_4901_B67C_E515A982427C__INCLUDED_)
#define EA_8C1D8513_C473_4901_B67C_E515A982427C__INCLUDED_

#include "IEC61970/Base/Wires/EnergyConsumer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * ConformLoad represent loads that follow a daily load change pattern where the
			 * pattern can be used to scale the load with a system load.
			 */
			class ConformLoad : public IEC61970::Base::Wires::EnergyConsumer
			{

			public:
				ConformLoad();
				virtual ~ConformLoad();

			};

		}

	}

}
#endif // !defined(EA_8C1D8513_C473_4901_B67C_E515A982427C__INCLUDED_)
