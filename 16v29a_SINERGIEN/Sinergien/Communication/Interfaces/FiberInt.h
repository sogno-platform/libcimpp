///////////////////////////////////////////////////////////
//  FiberInt.h
//  Implementation of the Class FiberInt
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef FIBERINT_H
#define FIBERINT_H

#include "Sinergien/Communication/Interfaces/WiredInt.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Interfaces
		{
			class FiberInt : public Sinergien::Communication::Interfaces::WiredInt
			{

			public:
				FiberInt();
				virtual ~FiberInt();

			};

		}

	}

}
#endif // FIBERINT_H
