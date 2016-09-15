///////////////////////////////////////////////////////////
//  RatioTapChangerTable.h
//  Implementation of the Class RatioTapChangerTable
//  Created on:      28-Jan-2016 12:46:24
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_D7B117C2_4213_4c99_8FF1_A0F67F45D927__INCLUDED_)
#define EA_D7B117C2_4213_4c99_8FF1_A0F67F45D927__INCLUDED_

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes a curve for how the voltage magnitude and impedance varies with the
			 * tap step. 
			 */
			class RatioTapChangerTable : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				RatioTapChangerTable();
				virtual ~RatioTapChangerTable();

			};

		}

	}

}
#endif // !defined(EA_D7B117C2_4213_4c99_8FF1_A0F67F45D927__INCLUDED_)
