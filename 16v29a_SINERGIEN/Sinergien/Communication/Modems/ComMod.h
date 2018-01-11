///////////////////////////////////////////////////////////
//  ComMod.h
//  Implementation of the Class ComMod
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef COMMOD_H
#define COMMOD_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Modems
		{
			class ComMod : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ComMod();
				virtual ~ComMod();
				IEC61970::Base::Domain::Float cost;

			};

		}

	}

}
#endif // COMMOD_H
