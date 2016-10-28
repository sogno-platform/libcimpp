///////////////////////////////////////////////////////////
//  BusbarSection.h
//  Implementation of the Class BusbarSection
///////////////////////////////////////////////////////////

#ifndef BUSBARSECTION_H
#define BUSBARSECTION_H

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Wires/VoltageControlZone.h"
#include "IEC61970/Base/Wires/Connector.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A conductor, or group of conductors, with negligible impedance, that serve to
			 * connect other conducting equipment within a single substation.
			 * Voltage measurements are typically obtained from VoltageTransformers that are
			 * connected to busbar sections. A bus bar section may have many physical
			 * terminals but for analysis is modelled with exactly one logical terminal.
			 */
			class BusbarSection : public IEC61970::Base::Wires::Connector
			{

			public:
				BusbarSection();
				virtual ~BusbarSection();
				/**
				 * Maximum allowable peak short-circuit current of busbar (Ipmax in the IEC 60909-
				 * 0).
				 * Mechanical limit of the busbar in the substation itself. Used for short circuit
				 * data exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::CurrentFlow ipMax;
				/**
				 * A VoltageControlZone is controlled by a designated BusbarSection.
				 */
				IEC61970::Base::Wires::VoltageControlZone *VoltageControlZone;

			};

		}

	}

}
#endif // BUSBARSECTION_H
