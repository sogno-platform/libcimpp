///////////////////////////////////////////////////////////
//  Junction.h
//  Implementation of the Class Junction
///////////////////////////////////////////////////////////

#ifndef JUNCTION_H
#define JUNCTION_H

#include "IEC61970/Base/Wires/Connector.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A point where one or more conducting equipments are connected with zero
			 * resistance.
			 */
			class Junction : public IEC61970::Base::Wires::Connector
			{

			public:
				Junction();
				virtual ~Junction();

			};

		}

	}

}
#endif // JUNCTION_H
