///////////////////////////////////////////////////////////
//  Fuse.h
//  Implementation of the Class Fuse
//  Created on:      28-Jan-2016 12:44:55
///////////////////////////////////////////////////////////

#if !defined(EA_431F898F_C63E_44d7_AAB1_2197511D95B8__INCLUDED_)
#define EA_431F898F_C63E_44d7_AAB1_2197511D95B8__INCLUDED_

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
#endif // !defined(EA_431F898F_C63E_44d7_AAB1_2197511D95B8__INCLUDED_)
