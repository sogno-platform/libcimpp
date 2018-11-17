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
				/**
				 * The additonal contained equipment.  The equipment belong to the equipment
				 * container. The equipment is contained in another equipment container, but also
				 * grouped with this equipment container.  Examples include when a switch
				 * contained in a substation is also desired to be grouped with a line contianer
				 * or when a switch is included in a secondary substation and also grouped in a
				 * feeder.
				 */
				std::list<IEC61970::Base::Core::Equipment*> AdditionalGroupedEquipment;

			};

		}

	}

}
#endif // EQUIPMENTCONTAINER_H
