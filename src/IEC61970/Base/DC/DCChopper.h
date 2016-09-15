///////////////////////////////////////////////////////////
//  DCChopper.h
//  Implementation of the Class DCChopper
//  Created on:      28-Jan-2016 12:43:56
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_FDCFFEE1_1A7A_44f5_997B_EA73B7540C59__INCLUDED_)
#define EA_FDCFFEE1_1A7A_44f5_997B_EA73B7540C59__INCLUDED_

#include "IEC61970/Base/DC/DCConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * Low resistance equipment used in the internal DC circuit to balance voltages.
			 * It has typically positive and negative pole terminals and a ground.
			 */
			class DCChopper : public IEC61970::Base::DC::DCConductingEquipment
			{

			public:
				DCChopper();
				virtual ~DCChopper();

			};

		}

	}

}
#endif // !defined(EA_FDCFFEE1_1A7A_44f5_997B_EA73B7540C59__INCLUDED_)
