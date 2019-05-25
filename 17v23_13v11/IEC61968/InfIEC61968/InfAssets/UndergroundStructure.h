///////////////////////////////////////////////////////////
//  UndergroundStructure.h
//  Implementation of the Class UndergroundStructure
///////////////////////////////////////////////////////////

#ifndef UNDERGROUNDSTRUCTURE_H
#define UNDERGROUNDSTRUCTURE_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/InfIEC61968/InfAssets/UndergroundStructureKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Date.h"
#include "IEC61968/Assets/Structure.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Underground structure.
			 */
			class UndergroundStructure : public IEC61968::Assets::Structure
			{

			public:
				UndergroundStructure();
				virtual ~UndergroundStructure();
				/**
				 * True if vault is ventilating.
				 */
				IEC61970::Base::Domain::Boolean hasVentilation;
				/**
				 * True if vault is ventilating.
				 */
				IEC61968::InfIEC61968::InfAssets::UndergroundStructureKind kind = IEC61968::InfIEC61968::InfAssets::UndergroundStructureKind::_undef;
				/**
				 * Primary material of underground structure.
				 */
				IEC61970::Base::Domain::String material;
				/**
				 * Date sealing warranty expires.
				 */
				IEC61970::Base::Domain::Date sealingWarrantyExpiresDate;

			};

		}

	}

}
#endif // UNDERGROUNDSTRUCTURE_H
