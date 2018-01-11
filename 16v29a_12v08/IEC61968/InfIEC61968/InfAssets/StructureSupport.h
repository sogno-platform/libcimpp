///////////////////////////////////////////////////////////
//  StructureSupport.h
//  Implementation of the Class StructureSupport
///////////////////////////////////////////////////////////

#ifndef STRUCTURESUPPORT_H
#define STRUCTURESUPPORT_H

#include "IEC61968/InfIEC61968/InfAssets/AnchorKind.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61968/InfIEC61968/InfAssets/StructureSupportKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Support for structure assets.
			 */
			class StructureSupport : public IEC61968::Assets::Asset
			{

			public:
				StructureSupport();
				virtual ~StructureSupport();
				/**
				 * (if anchor) Kind of anchor.
				 */
				IEC61968::InfIEC61968::InfAssets::AnchorKind anchorKind = IEC61968::InfIEC61968::InfAssets::AnchorKind::_undef;
				/**
				 * (if anchor) Number of rods used.
				 */
				IEC61970::Base::Domain::Integer anchorRodCount;
				/**
				 * (if anchor) Length of rod used.
				 */
				IEC61970::Base::Domain::Length anchorRodLength;
				/**
				 * Direction of this support structure.
				 */
				IEC61970::Base::Domain::AngleDegrees direction;
				/**
				 * Kind of structure support.
				 */
				IEC61968::InfIEC61968::InfAssets::StructureSupportKind kind = IEC61968::InfIEC61968::InfAssets::StructureSupportKind::_undef;
				/**
				 * Length of this support structure.
				 */
				IEC61970::Base::Domain::Length length;
				/**
				 * Size of this support structure.
				 */
				IEC61970::Base::Domain::String size;

			};

		}

	}

}
#endif // STRUCTURESUPPORT_H
