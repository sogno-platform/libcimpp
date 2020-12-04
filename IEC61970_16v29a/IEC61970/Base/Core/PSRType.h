///////////////////////////////////////////////////////////
//  PSRType.h
//  Implementation of the Class PSRType
///////////////////////////////////////////////////////////

#ifndef PSRTYPE_H
#define PSRTYPE_H

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
#endif // PSRTYPE_H
