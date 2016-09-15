///////////////////////////////////////////////////////////
//  ConductingEquipment.h
//  Implementation of the Class ConductingEquipment
//  Created on:      28-Jan-2016 12:43:37
///////////////////////////////////////////////////////////

#if !defined(EA_FDA9D87F_3FDE_44cf_A5A1_74DEB4078BF1__INCLUDED_)
#define EA_FDA9D87F_3FDE_44cf_A5A1_74DEB4078BF1__INCLUDED_

#include "IEC61970/Base/Core/Equipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The parts of the AC power system that are designed to carry current or that are
			 * conductively connected through terminals.
			 */
			class ConductingEquipment : public IEC61970::Base::Core::Equipment
			{

			public:
				ConductingEquipment();
				virtual ~ConductingEquipment();

			};

		}

	}

}
#endif // !defined(EA_FDA9D87F_3FDE_44cf_A5A1_74DEB4078BF1__INCLUDED_)
