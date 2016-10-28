///////////////////////////////////////////////////////////
//  WindGeneratingUnit.h
//  Implementation of the Class WindGeneratingUnit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef WINDGENERATINGUNIT_H
#define WINDGENERATINGUNIT_H

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
#endif // WINDGENERATINGUNIT_H
