///////////////////////////////////////////////////////////
//  LTEInt.h
//  Implementation of the Class LTEInt
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef LTEINT_H
#define LTEINT_H

#include "Sinergien/Communication/Interfaces/WirelessInt.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Interfaces
		{
			class LTEInt : public Sinergien::Communication::Interfaces::WirelessInt
			{

			public:
				LTEInt();
				virtual ~LTEInt();

			};

		}

	}

}
#endif // LTEINT_H
