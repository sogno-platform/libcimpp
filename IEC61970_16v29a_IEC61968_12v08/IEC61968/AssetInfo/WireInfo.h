///////////////////////////////////////////////////////////
//  WireInfo.h
//  Implementation of the Class WireInfo
///////////////////////////////////////////////////////////

#ifndef WIREINFO_H
#define WIREINFO_H

#include <list>

#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/AssetInfo/WireInsulationKind.h"
#include "IEC61968/AssetInfo/WireMaterialKind.h"
#include "IEC61970/Base/Domain/ResistancePerLength.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Wires/PerLengthLineParameter.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Wire data that can be specified per line segment phase, or for the line segment
		 * as a whole in case its phases all have the same wire characteristics.
		 */
		class WireInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			WireInfo();
			virtual ~WireInfo();
			/**
			 * (if there is a different core material) Radius of the central core.
			 */
			IEC61970::Base::Domain::Length coreRadius;
			/**
			 * (if used) Number of strands in the steel core.
			 */
			IEC61970::Base::Domain::Integer coreStrandCount;
			/**
			 * Geometric mean radius. If we replace the conductor by a thin walled tube of
			 * radius GMR, then its reactance is identical to the reactance of the actual
			 * conductor.
			 */
			IEC61970::Base::Domain::Length gmr;
			/**
			 * True if conductor is insulated.
			 */
			IEC61970::Base::Domain::Boolean insulated;
			/**
			 * (if insulated conductor) Material used for insulation.
			 */
			IEC61968::AssetInfo::WireInsulationKind insulationMaterial = IEC61968::AssetInfo::WireInsulationKind::_undef;
			/**
			 * (if insulated conductor) Thickness of the insulation.
			 */
			IEC61970::Base::Domain::Length insulationThickness;
			/**
			 * Conductor material.
			 */
			IEC61968::AssetInfo::WireMaterialKind material = IEC61968::AssetInfo::WireMaterialKind::_undef;
			/**
			 * AC resistance per unit length of the conductor at 25 °C.
			 */
			IEC61970::Base::Domain::ResistancePerLength rAC25;
			/**
			 * AC resistance per unit length of the conductor at 50 °C.
			 */
			IEC61970::Base::Domain::ResistancePerLength rAC50;
			/**
			 * AC resistance per unit length of the conductor at 75 °C.
			 */
			IEC61970::Base::Domain::ResistancePerLength rAC75;
			/**
			 * Outside radius of the wire.
			 */
			IEC61970::Base::Domain::Length radius;
			/**
			 * Current carrying capacity of the wire under stated thermal conditions.
			 */
			IEC61970::Base::Domain::CurrentFlow ratedCurrent;
			/**
			 * DC resistance per unit length of the conductor at 20 °C.
			 */
			IEC61970::Base::Domain::ResistancePerLength rDC20;
			/**
			 * Describes the wire gauge or cross section (e.g., 4/0, #2, 336.5).
			 */
			IEC61970::Base::Domain::String sizeDescription;
			/**
			 * Number of strands in the conductor.
			 */
			IEC61970::Base::Domain::Integer strandCount;
			/**
			 * All per-length parameters calculated from this wire datasheet.
			 */
			std::list<IEC61970::Base::Wires::PerLengthLineParameter*> PerLengthParameters;

		};

	}

}
#endif // WIREINFO_H
