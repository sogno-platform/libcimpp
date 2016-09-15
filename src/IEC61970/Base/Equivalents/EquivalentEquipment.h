///////////////////////////////////////////////////////////
//  EquivalentEquipment.h
//  Implementation of the Class EquivalentEquipment
//  Created on:      28-Jan-2016 12:44:17
///////////////////////////////////////////////////////////

#if !defined(EA_BAC82FEB_0659_49bf_A666_BAE8D978663E__INCLUDED_)
#define EA_BAC82FEB_0659_49bf_A666_BAE8D978663E__INCLUDED_

#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Equivalents
		{
			/**
			 * The class represents equivalent objects that are the result of a network
			 * reduction. The class is the base for equivalent objects of different types.
			 */
			class EquivalentEquipment : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				EquivalentEquipment();
				virtual ~EquivalentEquipment();

			};

		}

	}

}
#endif // !defined(EA_BAC82FEB_0659_49bf_A666_BAE8D978663E__INCLUDED_)
