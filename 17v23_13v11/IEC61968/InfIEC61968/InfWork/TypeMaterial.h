///////////////////////////////////////////////////////////
//  TypeMaterial.h
//  Implementation of the Class TypeMaterial
///////////////////////////////////////////////////////////

#ifndef TYPEMATERIAL_H
#define TYPEMATERIAL_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpReqLineItem.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"
#include "IEC61968/Work/MaterialItem.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Documentation for a generic material item that may be used for design, work and
			 * other purposes. Any number of MaterialItems manufactured by various vendors may
			 * be used to perform this TypeMaterial.
			 * Note that class analagous to "AssetModel" is not used for material items. This
			 * is because in some cases, for example, a utility sets up a Master material
			 * record for a 3 inch long half inch diameter steel bolt and they do not
			 * necessarily care what specific supplier is providing the material item. As
			 * different vendors are used to supply the part, the Stock Code of the material
			 * item can stay the same. In other cases, each time the vendor changes, a new
			 * stock code is set up so they can track material used by vendor. Therefore a
			 * Material Item "Model" is not typically needed.
			 */
			class TypeMaterial : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				TypeMaterial();
				virtual ~TypeMaterial();
				/**
				 * The type of cost to which this Material Item belongs.
				 */
				IEC61970::Base::Domain::String costType;
				/**
				 * The estimated unit cost of this type of material, either for a unit cost or
				 * cost per unit length. Cost is for material or asset only and does not include
				 * labor to install/construct or configure it.
				 */
				IEC61970::Base::Domain::Money estUnitCost;
				/**
				 * The value, unit of measure, and multiplier for the quantity.
				 */
				IEC61970::Base::Domain::String quantity;
				/**
				 * True if item is a stock item (default).
				 */
				IEC61970::Base::Domain::Boolean stockItem;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*> ErpReqLineItems;
				std::list<IEC61968::Work::MaterialItem*> MaterialItems;

			};

		}

	}

}
#endif // TYPEMATERIAL_H
