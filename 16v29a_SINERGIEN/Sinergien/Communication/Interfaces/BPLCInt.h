///////////////////////////////////////////////////////////
//  BPLCInt.h
//  Implementation of the Class BPLCInt
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef BPLCINT_H
#define BPLCINT_H

#include "Sinergien/Communication/Interfaces/WiredInt.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Interfaces
		{
			class BPLCInt : public Sinergien::Communication::Interfaces::WiredInt
			{

			public:
				BPLCInt();
				virtual ~BPLCInt();

			};

		}

	}

}
#endif // BPLCINT_H
