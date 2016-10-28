///////////////////////////////////////////////////////////
//  Limit.h
//  Implementation of the Class Limit
///////////////////////////////////////////////////////////

#ifndef LIMIT_H
#define LIMIT_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Specifies one limit value for a Measurement. A Measurement typically has
			 * several limits that are kept together by the LimitSet class. The actual meaning
			 * and use of a Limit instance (i.e., if it is an alarm or warning limit or if it
			 * is a high or low limit) is not captured in the Limit class. However the name of
			 * a Limit instance may indicate both meaning and use.
			 */
			class Limit : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Limit();
				virtual ~Limit();

			};

		}

	}

}
#endif // LIMIT_H
