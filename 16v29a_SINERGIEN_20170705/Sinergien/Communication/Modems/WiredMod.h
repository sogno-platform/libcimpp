///////////////////////////////////////////////////////////
//  WiredMod.h
//  Implementation of the Class WiredMod
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef WIREDMOD_H
#define WIREDMOD_H

#include "Sinergien/Communication/Modems/ComMod.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Modems
		{
			class WiredMod : public Sinergien::Communication::Modems::ComMod
			{

			public:
				WiredMod();
				virtual ~WiredMod();

			};

		}

	}

}
#endif // WIREDMOD_H
