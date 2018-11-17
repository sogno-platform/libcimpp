///////////////////////////////////////////////////////////
//  StationSupply.h
//  Implementation of the Class StationSupply
///////////////////////////////////////////////////////////

#ifndef STATIONSUPPLY_H
#define STATIONSUPPLY_H

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
#endif // STATIONSUPPLY_H
