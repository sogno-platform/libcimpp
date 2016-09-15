///////////////////////////////////////////////////////////
//  PhaseTapChangerTabular.h
//  Implementation of the Class PhaseTapChangerTabular
//  Created on:      28-Jan-2016 12:46:06
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_B2A7F7F2_400F_4874_BA89_B408E5AE716B__INCLUDED_)
#define EA_B2A7F7F2_400F_4874_BA89_B408E5AE716B__INCLUDED_

#include "IEC61970/Base/Wires/PhaseTapChanger.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			class PhaseTapChangerTabular : public IEC61970::Base::Wires::PhaseTapChanger
			{

			public:
				PhaseTapChangerTabular();
				virtual ~PhaseTapChangerTabular();

			};

		}

	}

}
#endif // !defined(EA_B2A7F7F2_400F_4874_BA89_B408E5AE716B__INCLUDED_)
