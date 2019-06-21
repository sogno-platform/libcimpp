///////////////////////////////////////////////////////////
//  CurrentLimit.h
//  Implementation of the Class CurrentLimit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef CURRENTLIMIT_H
#define CURRENTLIMIT_H

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/OperationalLimits/OperationalLimit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * Operational limit on current. 
			 */
			class CurrentLimit : public IEC61970::Base::OperationalLimits::OperationalLimit
			{

			public:
				CurrentLimit();
				virtual ~CurrentLimit();
				/**
				 * The normal value for limit on current flow.
				 */
				IEC61970::Base::Domain::CurrentFlow normalValue;
				/**
				 * Limit on current flow.
				 */
				IEC61970::Base::Domain::CurrentFlow value;

			};

		}

	}

}
#endif // CURRENTLIMIT_H
