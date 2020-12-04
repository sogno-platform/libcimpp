///////////////////////////////////////////////////////////
//  PhaseTapChangerTabular.h
//  Implementation of the Class PhaseTapChangerTabular
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef PHASETAPCHANGERTABULAR_H
#define PHASETAPCHANGERTABULAR_H

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
#endif // PHASETAPCHANGERTABULAR_H
