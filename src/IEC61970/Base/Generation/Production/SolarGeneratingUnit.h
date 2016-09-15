///////////////////////////////////////////////////////////
//  SolarGeneratingUnit.h
//  Implementation of the Class SolarGeneratingUnit
//  Created on:      28-Jan-2016 12:46:42
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_3BCAD42C_78E7_4ecd_906E_C6F490038E97__INCLUDED_)
#define EA_3BCAD42C_78E7_4ecd_906E_C6F490038E97__INCLUDED_

#include "IEC61970/Base/Generation/Production/GeneratingUnit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A solar thermal generating unit, connected to the grid by means of a rotating
				 * machine.  This class does not represent photovoltaic (PV) generation.
				 */
				class SolarGeneratingUnit : public IEC61970::Base::Generation::Production::GeneratingUnit
				{

				public:
					SolarGeneratingUnit();
					virtual ~SolarGeneratingUnit();

				};

			}

		}

	}

}
#endif // !defined(EA_3BCAD42C_78E7_4ecd_906E_C6F490038E97__INCLUDED_)
