///////////////////////////////////////////////////////////
//  LimitSet.h
//  Implementation of the Class LimitSet
//  Created on:      28-Jan-2016 12:45:33
///////////////////////////////////////////////////////////

#if !defined(EA_FB6AC19B_6B39_4344_BF64_6E40698767CF__INCLUDED_)
#define EA_FB6AC19B_6B39_4344_BF64_6E40698767CF__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Specifies a set of Limits that are associated with a Measurement. A Measurement
			 * may have several LimitSets corresponding to seasonal or other changing
			 * conditions. The condition is captured in the name and description attributes.
			 * The same LimitSet may be used for several Measurements. In particular
			 * percentage limits are used this way.
			 */
			class LimitSet : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				LimitSet();
				virtual ~LimitSet();
				/**
				 * Tells if the limit values are in percentage of normalValue or the specified
				 * Unit for Measurements and Controls.
				 */
				IEC61970::Base::Domain::Boolean isPercentageLimits;

			};

		}

	}

}
#endif // !defined(EA_FB6AC19B_6B39_4344_BF64_6E40698767CF__INCLUDED_)
