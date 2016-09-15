///////////////////////////////////////////////////////////
//  FaultCauseType.h
//  Implementation of the Class FaultCauseType
//  Created on:      28-Jan-2016 12:44:49
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_C4739EFF_EA75_43d3_A0A4_26A987A2679C__INCLUDED_)
#define EA_C4739EFF_EA75_43d3_A0A4_26A987A2679C__INCLUDED_

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
#endif // !defined(EA_C4739EFF_EA75_43d3_A0A4_26A987A2679C__INCLUDED_)
