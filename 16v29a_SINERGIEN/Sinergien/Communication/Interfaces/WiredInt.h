///////////////////////////////////////////////////////////
//  WiredInt.h
//  Implementation of the Class WiredInt
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WIREDINT_H
#define WIREDINT_H

#include "Sinergien/Communication/Interfaces/ComInterface.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Interfaces
		{
			class WiredInt : public Sinergien::Communication::Interfaces::ComInterface
			{

			public:
				WiredInt();
				virtual ~WiredInt();

			};

		}

	}

}
#endif // WIREDINT_H
