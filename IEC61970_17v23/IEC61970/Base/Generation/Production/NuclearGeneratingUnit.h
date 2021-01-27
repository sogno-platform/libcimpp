///////////////////////////////////////////////////////////
//  NuclearGeneratingUnit.h
//  Implementation of the Class NuclearGeneratingUnit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef NUCLEARGENERATINGUNIT_H
#define NUCLEARGENERATINGUNIT_H

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
				 * A nuclear generating unit.
				 */
				class NuclearGeneratingUnit : public IEC61970::Base::Generation::Production::GeneratingUnit
				{

				public:
					NuclearGeneratingUnit();
					virtual ~NuclearGeneratingUnit();

				};

			}

		}

	}

}
#endif // NUCLEARGENERATINGUNIT_H
