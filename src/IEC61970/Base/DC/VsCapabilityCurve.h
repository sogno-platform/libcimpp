///////////////////////////////////////////////////////////
//  VsCapabilityCurve.h
//  Implementation of the Class VsCapabilityCurve
//  Created on:      28-Jan-2016 12:47:41
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_0660EE0C_C153_40e9_AC1F_F146906A2B47__INCLUDED_)
#define EA_0660EE0C_C153_40e9_AC1F_F146906A2B47__INCLUDED_

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
#endif // !defined(EA_0660EE0C_C153_40e9_AC1F_F146906A2B47__INCLUDED_)
