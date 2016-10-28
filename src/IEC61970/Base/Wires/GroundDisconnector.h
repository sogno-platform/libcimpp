///////////////////////////////////////////////////////////
//  GroundDisconnector.h
//  Implementation of the Class GroundDisconnector
///////////////////////////////////////////////////////////

#ifndef GROUNDDISCONNECTOR_H
#define GROUNDDISCONNECTOR_H

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
#endif // GROUNDDISCONNECTOR_H
