///////////////////////////////////////////////////////////
//  EquipmentContainer.h
//  Implementation of the Class EquipmentContainer
///////////////////////////////////////////////////////////

#ifndef EQUIPMENTCONTAINER_H
#define EQUIPMENTCONTAINER_H

#include <list>

#include "IEC61970/Base/Core/Equipment.h"
#include "IEC61970/Base/Core/ConnectivityNodeContainer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A modeling construct to provide a root class for containing equipment. 
			 */
			class EquipmentContainer : public IEC61970::Base::Core::ConnectivityNodeContainer
			{

			public:
				EquipmentContainer();
				virtual ~EquipmentContainer();
				/**
				 * Contained equipment.
				 */
				std::list<IEC61970::Base::Core::Equipment*> Equipments;

			};

		}

	}

}
#endif // EQUIPMENTCONTAINER_H
