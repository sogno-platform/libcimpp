///////////////////////////////////////////////////////////
//  NonConformLoad.h
//  Implementation of the Class NonConformLoad
//  Created on:      28-Jan-2016 12:45:47
///////////////////////////////////////////////////////////

#if !defined(EA_681ED022_12C9_4f4d_ADD3_598C5F908494__INCLUDED_)
#define EA_681ED022_12C9_4f4d_ADD3_598C5F908494__INCLUDED_

#include "IEC61970/Base/Wires/EnergyConsumer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * NonConformLoad represent loads that do not follow a daily load change pattern
			 * and changes are not correlated with the daily load change pattern.
			 */
			class NonConformLoad : public IEC61970::Base::Wires::EnergyConsumer
			{

			public:
				NonConformLoad();
				virtual ~NonConformLoad();

			};

		}

	}

}
#endif // !defined(EA_681ED022_12C9_4f4d_ADD3_598C5F908494__INCLUDED_)
