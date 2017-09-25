///////////////////////////////////////////////////////////
//  LoadBreakSwitch.h
//  Implementation of the Class LoadBreakSwitch
///////////////////////////////////////////////////////////

#ifndef LOADBREAKSWITCH_H
#define LOADBREAKSWITCH_H

#include "IEC61970/Base/Wires/ProtectedSwitch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A mechanical switching device capable of making, carrying, and breaking
			 * currents under normal operating conditions.
			 */
			class LoadBreakSwitch : public IEC61970::Base::Wires::ProtectedSwitch
			{

			public:
				LoadBreakSwitch();
				virtual ~LoadBreakSwitch();

			};

		}

	}

}
#endif // LOADBREAKSWITCH_H
