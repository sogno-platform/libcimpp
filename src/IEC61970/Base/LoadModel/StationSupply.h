///////////////////////////////////////////////////////////
//  StationSupply.h
//  Implementation of the Class StationSupply
//  Created on:      28-Jan-2016 12:46:47
///////////////////////////////////////////////////////////

#if !defined(EA_F242F719_E38A_4413_8522_6511EB6330CA__INCLUDED_)
#define EA_F242F719_E38A_4413_8522_6511EB6330CA__INCLUDED_

#include "IEC61970/Base/Wires/EnergyConsumer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * Station supply with load derived from the station output.
			 */
			class StationSupply : public IEC61970::Base::Wires::EnergyConsumer
			{

			public:
				StationSupply();
				virtual ~StationSupply();

			};

		}

	}

}
#endif // !defined(EA_F242F719_E38A_4413_8522_6511EB6330CA__INCLUDED_)
