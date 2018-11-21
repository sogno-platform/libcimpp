///////////////////////////////////////////////////////////
//  VsCapabilityCurve.h
//  Implementation of the Class VsCapabilityCurve
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef VSCAPABILITYCURVE_H
#define VSCAPABILITYCURVE_H

#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * The P-Q capability curve for a voltage source converter, with P on x-axis and
			 * Qmin and Qmax on y1-axis and y2-axis.
			 */
			class VsCapabilityCurve : public IEC61970::Base::Core::Curve
			{

			public:
				VsCapabilityCurve();
				virtual ~VsCapabilityCurve();

			};

		}

	}

}
#endif // VSCAPABILITYCURVE_H
