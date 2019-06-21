///////////////////////////////////////////////////////////
//  PhaseTapChanger.h
//  Implementation of the Class PhaseTapChanger
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef PHASETAPCHANGER_H
#define PHASETAPCHANGER_H

#include "IEC61970/Base/Wires/TapChanger.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A transformer phase shifting tap model that controls the phase angle difference
			 * across the power transformer and potentially the active power flow through the
			 * power transformer.  This phase tap model may also impact the voltage magnitude.
			 */
			class PhaseTapChanger : public IEC61970::Base::Wires::TapChanger
			{

			public:
				PhaseTapChanger();
				virtual ~PhaseTapChanger();

			};

		}

	}

}
#endif // PHASETAPCHANGER_H
