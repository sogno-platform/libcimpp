///////////////////////////////////////////////////////////
//  GroundDisconnector.h
//  Implementation of the Class GroundDisconnector
//  Created on:      28-Jan-2016 12:45:16
///////////////////////////////////////////////////////////

#if !defined(EA_1DB4A883_2759_49a9_9099_E4267183535D__INCLUDED_)
#define EA_1DB4A883_2759_49a9_9099_E4267183535D__INCLUDED_

#include "IEC61970/Base/Wires/Switch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A manually operated or motor operated mechanical switching device used for
			 * isolating a circuit or equipment from ground.
			 */
			class GroundDisconnector : public IEC61970::Base::Wires::Switch
			{

			public:
				GroundDisconnector();
				virtual ~GroundDisconnector();

			};

		}

	}

}
#endif // !defined(EA_1DB4A883_2759_49a9_9099_E4267183535D__INCLUDED_)
