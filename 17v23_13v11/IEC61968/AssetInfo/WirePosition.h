///////////////////////////////////////////////////////////
//  WirePosition.h
//  Implementation of the Class WirePosition
///////////////////////////////////////////////////////////

#ifndef WIREPOSITION_H
#define WIREPOSITION_H

#include <list>

#include "IEC61970/Base/Domain/Displacement.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/AssetInfo/WirePhaseInfo.h"

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
			 * Signed horizontal distance from the wire at this position to a common reference
			 * point.
			 */
			IEC61970::Base::Domain::Displacement xCoord;
			/**
			 * Signed vertical distance from the wire at this position: above ground (positive
			 * value) or burial depth below ground (negative value).
			 */
			IEC61970::Base::Domain::Displacement yCoord;
			std::list<IEC61968::AssetInfo::WirePhaseInfo*> WirePhaseInfo;

		};

	}

}
#endif // WIREPOSITION_H
