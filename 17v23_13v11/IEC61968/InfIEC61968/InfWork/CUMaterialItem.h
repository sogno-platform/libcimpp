///////////////////////////////////////////////////////////
//  CUMaterialItem.h
//  Implementation of the Class CUMaterialItem
///////////////////////////////////////////////////////////

#ifndef CUMATERIALITEM_H
#define CUMATERIALITEM_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/IntegerQuantity.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfWork/TypeMaterial.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			class CompatibleUnit;
		}
	}
}

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Compatible unit of a consumable supply item. For example, nuts, bolts, brackets,
			 * glue, etc.
			 */
			class CUMaterialItem : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				CUMaterialItem();
				virtual ~CUMaterialItem();
				/**
				 * Code for material.
				 */
				IEC61970::Base::Domain::String corporateCode;
				/**
				 * Quantity of the TypeMaterial for this CU, used to determine estimated costs
				 * based on a per unit cost or a cost per unit length specified in the
				 * TypeMaterial.
				 */
				IEC61970::Base::Domain::IntegerQuantity quantity;
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfWork::TypeMaterial *TypeMaterial;
				std::list<IEC61968::InfIEC61968::InfWork::CompatibleUnit*> CompatibleUnits;

			};

		}

	}

}
#endif // CUMATERIALITEM_H
