///////////////////////////////////////////////////////////
//  SolarGeneratingUnit.h
//  Implementation of the Class SolarGeneratingUnit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef SOLARGENERATINGUNIT_H
#define SOLARGENERATINGUNIT_H

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
#endif // SOLARGENERATINGUNIT_H
