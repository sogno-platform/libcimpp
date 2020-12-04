///////////////////////////////////////////////////////////
//  CompatibleUnit.h
//  Implementation of the Class CompatibleUnit
///////////////////////////////////////////////////////////

#ifndef COMPATIBLEUNIT_H
#define COMPATIBLEUNIT_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"
#include "IEC61968/InfIEC61968/InfWork/CUGroup.h"
#include "IEC61968/InfIEC61968/InfWork/CUAsset.h"
#include "IEC61968/Assets/Procedure.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A pre-planned job model containing labor, material, and accounting requirements
			 * for standardized job planning.
			 */
			class DesignLocationCU;
			class CompatibleUnit : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				CompatibleUnit();
				virtual ~CompatibleUnit();
				/**
				 * Estimated total cost for perfoming CU.
				 */
				IEC61970::Base::Domain::Money estCost;
				/**
				 * The quantity, unit of measure, and multiplier at the CU level that applies to
				 * the materials.
				 */
				IEC61970::Base::Domain::String quantity;
				std::list<IEC61968::InfIEC61968::InfWork::DesignLocationCU*> DesignLocationCUs;
				IEC61968::InfIEC61968::InfWork::CUGroup *CUGroup;
				std::list<IEC61968::InfIEC61968::InfWork::CUAsset*> CUAssets;
				std::list<IEC61968::Assets::Procedure*> Procedures;

			};

		}

	}

}
#endif // COMPATIBLEUNIT_H
