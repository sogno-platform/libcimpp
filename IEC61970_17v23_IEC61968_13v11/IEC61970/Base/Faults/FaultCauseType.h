///////////////////////////////////////////////////////////
//  FaultCauseType.h
//  Implementation of the Class FaultCauseType
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef FAULTCAUSETYPE_H
#define FAULTCAUSETYPE_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Faults
		{
			/**
			 * Type of cause of the fault.
			 */
			class FaultCauseType : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				FaultCauseType();
				virtual ~FaultCauseType();

			};

		}

	}

}
#endif // FAULTCAUSETYPE_H
