///////////////////////////////////////////////////////////
//  ValueToAlias.h
//  Implementation of the Class ValueToAlias
//  Created on:      28-Jan-2016 12:47:32
///////////////////////////////////////////////////////////

#if !defined(EA_8741F45F_3BE9_4cd0_8F87_E1FD1B80BEAE__INCLUDED_)
#define EA_8741F45F_3BE9_4cd0_8F87_E1FD1B80BEAE__INCLUDED_

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Describes the translation of one particular value into a name, e.g. 1 as "Open".
			 */
			class ValueToAlias : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ValueToAlias();
				virtual ~ValueToAlias();
				/**
				 * The value that is mapped.
				 */
				IEC61970::Base::Domain::Integer value;

			};

		}

	}

}
#endif // !defined(EA_8741F45F_3BE9_4cd0_8F87_E1FD1B80BEAE__INCLUDED_)
