///////////////////////////////////////////////////////////
//  NuclearGeneratingUnit.h
//  Implementation of the Class NuclearGeneratingUnit
//  Created on:      28-Jan-2016 12:45:50
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_13E623FC_4299_46a7_B681_B23864BA5453__INCLUDED_)
#define EA_13E623FC_4299_46a7_B681_B23864BA5453__INCLUDED_

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
#endif // !defined(EA_13E623FC_4299_46a7_B681_B23864BA5453__INCLUDED_)
