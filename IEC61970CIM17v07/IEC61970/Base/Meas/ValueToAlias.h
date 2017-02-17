///////////////////////////////////////////////////////////
//  ValueToAlias.h
//  Implementation of the Class ValueToAlias
///////////////////////////////////////////////////////////

#ifndef VALUETOALIAS_H
#define VALUETOALIAS_H

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
#endif // VALUETOALIAS_H
