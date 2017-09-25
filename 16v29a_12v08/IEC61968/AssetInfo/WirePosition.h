///////////////////////////////////////////////////////////
//  WirePosition.h
//  Implementation of the Class WirePosition
///////////////////////////////////////////////////////////

#ifndef WIREPOSITION_H
#define WIREPOSITION_H

#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61970/Base/Domain/Displacement.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Identification, spacing and configuration of the wires of a conductor with
		 * respect to a structure.
		 */
		class WirePosition : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			WirePosition();
			virtual ~WirePosition();
			/**
			 * Single phase or neutral designation for the wire with this position.
			 */
			IEC61970::Base::Wires::SinglePhaseKind phase;
			/**
			 * Signed horizontal distance from the wire at this position to a common reference
			 * point.
			 */
			IEC61970::Base::Domain::Displacement xCoord;
			/**
			 * Signed vertical distance from the wire at this position: above ground (positive
			 * value) or burial depth below ground (negative value).
			 */
			IEC61970::Base::Domain::Displacement yCoord;

		};

	}

}
#endif // WIREPOSITION_H
