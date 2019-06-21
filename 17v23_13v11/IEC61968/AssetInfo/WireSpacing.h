///////////////////////////////////////////////////////////
//  WireSpacing.h
//  Implementation of the Class WireSpacing
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WIRESPACING_H
#define WIRESPACING_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/AssetInfo/WireUsageKind.h"
#include "IEC61968/AssetInfo/WirePosition.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Assets/Structure.h"
#include "IEC61968/Assets/DuctBank.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Wire spacing data that associates multiple wire positions with the line segment,
		 * and allows to calculate line segment impedances. Number of phases can be
		 * derived from the number of associated wire positions whose phase is not neutral.
		 */
		class WireSpacing : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			WireSpacing();
			virtual ~WireSpacing();
			/**
			 * If true, this spacing data describes a cable.
			 */
			IEC61970::Base::Domain::Boolean isCable;
			/**
			 * Number of wire sub-conductors in the symmetrical bundle (typically between 1
			 * and 4).
			 */
			IEC61970::Base::Domain::Integer phaseWireCount;
			/**
			 * Distance between wire sub-conductors in a symmetrical bundle.
			 */
			IEC61970::Base::Domain::Length phaseWireSpacing;
			/**
			 * Usage of the associated wires.
			 */
			IEC61968::AssetInfo::WireUsageKind usage = IEC61968::AssetInfo::WireUsageKind::_undef;
			/**
			 * All positions of single wires (phase or neutral) making the conductor.
			 */
			std::list<IEC61968::AssetInfo::WirePosition*> WirePositions;
			std::list<IEC61968::Assets::Structure*> Structures;
			IEC61968::Assets::DuctBank *DuctBank;

		};

	}

}
#endif // WIRESPACING_H
