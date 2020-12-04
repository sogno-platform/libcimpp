///////////////////////////////////////////////////////////
//  Connector.h
//  Implementation of the Class Connector
///////////////////////////////////////////////////////////

#ifndef CONNECTOR_H
#define CONNECTOR_H

#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A conductor, or group of conductors, with negligible impedance, that serve to
			 * connect other conducting equipment within a single substation and are modelled
			 * with a single logical terminal.
			 */
			class Connector : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				Connector();
				virtual ~Connector();

			};

		}

	}

}
#endif // CONNECTOR_H
