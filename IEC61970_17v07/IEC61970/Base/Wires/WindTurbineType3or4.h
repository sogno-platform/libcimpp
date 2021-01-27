///////////////////////////////////////////////////////////
//  WindTurbineType3or4.h
//  Implementation of the Class WindTurbineType3or4
///////////////////////////////////////////////////////////

#ifndef WINDTURBINETYPE3OR4_H
#define WINDTURBINETYPE3OR4_H

#include "IEC61970/Base/Wires/NonRotatingEnergy.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Either a single generator or an aggregation of generators of Type 3 and 4 wind
			 * turbines.
			 */
			class WindTurbineType3or4 : public IEC61970::Base::Wires::NonRotatingEnergy
			{

			public:
				WindTurbineType3or4();
				virtual ~WindTurbineType3or4();

			};

		}

	}

}
#endif // WINDTURBINETYPE3OR4_H
