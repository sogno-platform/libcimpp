///////////////////////////////////////////////////////////
//  EquipmentContainer.h
//  Implementation of the Class EquipmentContainer
//  Created on:      28-Jan-2016 12:44:16
///////////////////////////////////////////////////////////

#if !defined(EA_58622B5E_0D17_4017_961E_F395046858E6__INCLUDED_)
#define EA_58622B5E_0D17_4017_961E_F395046858E6__INCLUDED_

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
#endif // !defined(EA_58622B5E_0D17_4017_961E_F395046858E6__INCLUDED_)
