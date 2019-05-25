///////////////////////////////////////////////////////////
//  CableInfo.h
//  Implementation of the Class CableInfo
///////////////////////////////////////////////////////////

#ifndef CABLEINFO_H
#define CABLEINFO_H

#include "IEC61968/AssetInfo/CableConstructionKind.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61968/AssetInfo/CableOuterJacketKind.h"
#include "IEC61968/AssetInfo/CableShieldMaterialKind.h"
#include "IEC61968/AssetInfo/WireInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Cable data.
		 */
		class CableInfo : public IEC61968::AssetInfo::WireInfo
		{

		public:
			CableInfo();
			virtual ~CableInfo();
			/**
			 * Kind of construction of this cable.
			 */
			IEC61968::AssetInfo::CableConstructionKind constructionKind = IEC61968::AssetInfo::CableConstructionKind::_undef;
			/**
			 * Diameter over the core, including any semi-con screen; should be the insulating
			 * layer's inside diameter.
			 */
			IEC61970::Base::Domain::Length diameterOverCore;
			/**
			 * Diameter over the insulating layer, excluding outer screen.
			 */
			IEC61970::Base::Domain::Length diameterOverInsulation;
			/**
			 * Diameter over the outermost jacketing layer.
			 */
			IEC61970::Base::Domain::Length diameterOverJacket;
			/**
			 * Diameter over the outer screen; should be the shield's inside diameter.
			 */
			IEC61970::Base::Domain::Length diameterOverScreen;
			/**
			 * True if wire strands are extruded in a way to fill the voids in the cable.
			 */
			IEC61970::Base::Domain::Boolean isStrandFill;
			/**
			 * Maximum nominal design operating temperature.
			 */
			IEC61970::Base::Domain::Temperature nominalTemperature;
			/**
			 * Kind of outer jacket of this cable.
			 */
			IEC61968::AssetInfo::CableOuterJacketKind outerJacketKind = IEC61968::AssetInfo::CableOuterJacketKind::_undef;
			/**
			 * True if sheath / shield is used as a neutral (i.e., bonded).
			 */
			IEC61970::Base::Domain::Boolean sheathAsNeutral;
			/**
			 * Material of the shield.
			 */
			IEC61968::AssetInfo::CableShieldMaterialKind shieldMaterial = IEC61968::AssetInfo::CableShieldMaterialKind::_undef;

		};

	}

}
#endif // CABLEINFO_H
