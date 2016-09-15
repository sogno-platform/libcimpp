///////////////////////////////////////////////////////////
//  Connector.h
//  Implementation of the Class Connector
//  Created on:      28-Jan-2016 12:43:40
///////////////////////////////////////////////////////////

#if !defined(EA_2F94ED53_B99A_4f52_A913_4AC4913D41C2__INCLUDED_)
#define EA_2F94ED53_B99A_4f52_A913_4AC4913D41C2__INCLUDED_

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
#endif // !defined(EA_2F94ED53_B99A_4f52_A913_4AC4913D41C2__INCLUDED_)
