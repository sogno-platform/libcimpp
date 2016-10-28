///////////////////////////////////////////////////////////
//  Fuse.h
//  Implementation of the Class Fuse
///////////////////////////////////////////////////////////

#ifndef FUSE_H
#define FUSE_H

#include "IEC61970/Base/Wires/Switch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * An overcurrent protective device with a circuit opening fusible part that is
			 * heated and severed by the passage of overcurrent through it. A fuse is
			 * considered a switching device because it breaks current.
			 */
			class Fuse : public IEC61970::Base::Wires::Switch
			{

			public:
				Fuse();
				virtual ~Fuse();

			};

		}

	}

}
#endif // FUSE_H
