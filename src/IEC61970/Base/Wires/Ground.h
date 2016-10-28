///////////////////////////////////////////////////////////
//  Ground.h
//  Implementation of the Class Ground
///////////////////////////////////////////////////////////

#ifndef GROUND_H
#define GROUND_H

#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A point where the system is grounded used for connecting conducting equipment
			 * to ground. The power system model can have any number of grounds.
			 */
			class Ground : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				Ground();
				virtual ~Ground();

			};

		}

	}

}
#endif // GROUND_H
