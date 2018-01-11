///////////////////////////////////////////////////////////
//  ConformLoad.h
//  Implementation of the Class ConformLoad
///////////////////////////////////////////////////////////

#ifndef CONFORMLOAD_H
#define CONFORMLOAD_H

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
#endif // CONFORMLOAD_H
