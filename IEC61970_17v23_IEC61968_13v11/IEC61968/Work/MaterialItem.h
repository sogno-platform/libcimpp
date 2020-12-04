///////////////////////////////////////////////////////////
//  MaterialItem.h
//  Implementation of the Class MaterialItem
///////////////////////////////////////////////////////////

#ifndef MATERIALITEM_H
#define MATERIALITEM_H

#include "IEC61970/Base/Domain/IntegerQuantity.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * The physical consumable supply used for work and other purposes. It includes
		 * items such as nuts, bolts, brackets, glue, etc.
		 */
		class MaterialItem : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			MaterialItem();
			virtual ~MaterialItem();
			/**
			 * Quantity of material used.
			 */
			IEC61970::Base::Domain::IntegerQuantity quantity;

		};

	}

}
#endif // MATERIALITEM_H
