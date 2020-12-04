///////////////////////////////////////////////////////////
//  Disconnector.h
//  Implementation of the Class Disconnector
///////////////////////////////////////////////////////////

#ifndef DISCONNECTOR_H
#define DISCONNECTOR_H

#include "IEC61970/Base/Wires/Switch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A manually operated or motor operated mechanical switching device used for
			 * changing the connections in a circuit, or for isolating a circuit or equipment
			 * from a source of power. It is required to open or close circuits when
			 * negligible current is broken or made. 
			 */
			class Disconnector : public IEC61970::Base::Wires::Switch
			{

			public:
				Disconnector();
				virtual ~Disconnector();

			};

		}

	}

}
#endif // DISCONNECTOR_H
