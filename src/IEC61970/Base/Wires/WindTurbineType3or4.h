///////////////////////////////////////////////////////////
//  WindTurbineType3or4.h
//  Implementation of the Class WindTurbineType3or4
//  Created on:      28-Jan-2016 12:47:59
///////////////////////////////////////////////////////////

#if !defined(EA_EFA74F40_A80B_44cf_A747_9688F0C44C59__INCLUDED_)
#define EA_EFA74F40_A80B_44cf_A747_9688F0C44C59__INCLUDED_

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
#endif // !defined(EA_EFA74F40_A80B_44cf_A747_9688F0C44C59__INCLUDED_)
