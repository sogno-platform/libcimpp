///////////////////////////////////////////////////////////
//  Structure.h
//  Implementation of the Class Structure
///////////////////////////////////////////////////////////

#ifndef STRUCTURE_H
#define STRUCTURE_H

#include <list>

#include "IEC61970/Base/Domain/Date.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/InfIEC61968/InfAssets/StructureMaterialKind.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Assets/AssetContainer.h"
#include "IEC61968/Assets/StructureSupport.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Construction holding assets such as conductors, transformers, switchgear, etc.
		 * Where applicable, number of conductors can be derived from the number of
		 * associated wire spacing instances.
		 */
		class Structure : public IEC61968::Assets::AssetContainer
		{

		public:
			Structure();
			virtual ~Structure();
			/**
			 * Date fumigant was last applied.
			 */
			IEC61970::Base::Domain::Date fumigantAppliedDate;
			/**
			 * Name of fumigant.
			 */
			IEC61970::Base::Domain::String fumigantName;
			/**
			 * Visible height of structure above ground level for overhead construction (e.g.,
			 * Pole or Tower) or below ground level for an underground vault, manhole, etc.
			 * Refer to associated DimensionPropertiesInfo for other types of dimensions.
			 */
			IEC61970::Base::Domain::Length height;
			/**
			 * Material this structure is made of.
			 */
			IEC61968::InfIEC61968::InfAssets::StructureMaterialKind materialKind = IEC61968::InfIEC61968::InfAssets::StructureMaterialKind::_undef;
			/**
			 * Maximum rated voltage of the equipment that can be mounted on/contained within
			 * the structure.
			 */
			IEC61970::Base::Domain::Voltage ratedVoltage;
			/**
			 * True if weeds are to be removed around asset.
			 */
			IEC61970::Base::Domain::Boolean removeWeed;
			/**
			 * Date weed were last removed.
			 */
			IEC61970::Base::Domain::Date weedRemovedDate;
			std::list<IEC61968::Assets::StructureSupport*> StructureSupports;

		};

	}

}
#endif // STRUCTURE_H
