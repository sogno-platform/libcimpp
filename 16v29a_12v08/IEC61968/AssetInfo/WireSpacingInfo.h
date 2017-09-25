///////////////////////////////////////////////////////////
//  WireSpacingInfo.h
//  Implementation of the Class WireSpacingInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WIRESPACINGINFO_H
#define WIRESPACINGINFO_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/AssetInfo/WireUsageKind.h"
#include "IEC61968/InfIEC61968/InfAssets/Structure.h"
#include "IEC61968/InfIEC61968/InfAssets/DuctBank.h"
#include "IEC61970/Base/Wires/PerLengthLineParameter.h"
#include "IEC61968/Assets/AssetInfo.h"
#include "IEC61968/AssetInfo/WirePosition.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Wire spacing data that associates multiple wire positions with the line segment,
		 * and allows to calculate line segment impedances. Number of phases can be
		 * derived from the number of associated wire positions whose phase is not neutral.
		 */
		class WireSpacingInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			WireSpacingInfo();
			virtual ~WireSpacingInfo();
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
			IEC61968::AssetInfo::WireUsageKind usage;
			std::list<IEC61968::InfIEC61968::InfAssets::Structure*> Structures;
			IEC61968::InfIEC61968::InfAssets::DuctBank *DuctBank;
			/**
			 * All per-length parameters calculated from this wire spacing datasheet.
			 */
			std::list<IEC61970::Base::Wires::PerLengthLineParameter*> PerLengthParameters;
			/**
			 * All positions of single wires (phase or neutral) making the conductor.
			 */
			std::list<IEC61968::AssetInfo::WirePosition*> WirePositions;

		};

	}

}
#endif // WIRESPACINGINFO_H
