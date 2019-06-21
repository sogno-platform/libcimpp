///////////////////////////////////////////////////////////
//  ISOAPAddressing.h
//  Implementation of the Class ISOAPAddressing
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef ISOAPADDRESSING_H
#define ISOAPADDRESSING_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			class ISOAPAddressing : public BaseClass
			{

			public:
				ISOAPAddressing();
				virtual ~ISOAPAddressing();
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				IEC61970::Base::Domain::UnitSymbol unit = IEC61970::Base::Domain::UnitSymbol::_undef;
				IEC61970::Base::Domain::String value;

			};

		}

	}

}
#endif // ISOAPADDRESSING_H
