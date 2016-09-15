///////////////////////////////////////////////////////////
//  PerLengthLineParameter.h
//  Implementation of the Class PerLengthLineParameter
//  Created on:      28-Jan-2016 12:45:57
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_BA89ECFF_F515_41bf_B937_8B0F3A1277D7__INCLUDED_)
#define EA_BA89ECFF_F515_41bf_B937_8B0F3A1277D7__INCLUDED_

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Common type for per-length electrical catalogues describing line parameters.
			 */
			class PerLengthLineParameter : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				PerLengthLineParameter();
				virtual ~PerLengthLineParameter();

			};

		}

	}

}
#endif // !defined(EA_BA89ECFF_F515_41bf_B937_8B0F3A1277D7__INCLUDED_)
