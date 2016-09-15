///////////////////////////////////////////////////////////
//  PSRType.h
//  Implementation of the Class PSRType
//  Created on:      28-Jan-2016 12:46:14
///////////////////////////////////////////////////////////

#if !defined(EA_4791D4FC_BA74_47f9_9C2A_FF0FCC15670D__INCLUDED_)
#define EA_4791D4FC_BA74_47f9_9C2A_FF0FCC15670D__INCLUDED_

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Classifying instances of the same class, e.g. overhead and underground
			 * ACLineSegments. This classification mechanism is intended to provide
			 * flexibility outside the scope of this standard, i.e. provide customisation that
			 * is non standard.
			 */
			class PSRType : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				PSRType();
				virtual ~PSRType();

			};

		}

	}

}
#endif // !defined(EA_4791D4FC_BA74_47f9_9C2A_FF0FCC15670D__INCLUDED_)
