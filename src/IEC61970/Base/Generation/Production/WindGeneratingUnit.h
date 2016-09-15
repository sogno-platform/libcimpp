///////////////////////////////////////////////////////////
//  WindGeneratingUnit.h
//  Implementation of the Class WindGeneratingUnit
//  Created on:      28-Jan-2016 12:47:50
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_8554FDAA_B6C5_4ead_B0AB_9843B774B50E__INCLUDED_)
#define EA_8554FDAA_B6C5_4ead_B0AB_9843B774B50E__INCLUDED_

#include "IEC61970/Base/Generation/Production/WindGenUnitKind.h"
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
				 * A wind driven generating unit, connected to the grid by means of a rotating
				 * machine.  May be used to represent a single turbine or an aggregation.    
				 */
				class WindGeneratingUnit : public IEC61970::Base::Generation::Production::GeneratingUnit
				{

				public:
					WindGeneratingUnit();
					virtual ~WindGeneratingUnit();
					/**
					 * The kind of wind generating unit
					 */
					IEC61970::Base::Generation::Production::WindGenUnitKind windGenUnitType;

				};

			}

		}

	}

}
#endif // !defined(EA_8554FDAA_B6C5_4ead_B0AB_9843B774B50E__INCLUDED_)
