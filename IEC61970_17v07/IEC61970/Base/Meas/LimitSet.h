///////////////////////////////////////////////////////////
//  LimitSet.h
//  Implementation of the Class LimitSet
///////////////////////////////////////////////////////////

#ifndef LIMITSET_H
#define LIMITSET_H

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
#endif // LIMITSET_H
