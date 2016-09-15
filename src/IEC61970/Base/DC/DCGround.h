///////////////////////////////////////////////////////////
//  DCGround.h
//  Implementation of the Class DCGround
//  Created on:      28-Jan-2016 12:43:58
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_3D539508_ADAE_4d61_9466_27B989B56504__INCLUDED_)
#define EA_3D539508_ADAE_4d61_9466_27B989B56504__INCLUDED_

#include "IEC61970/Base/Domain/Inductance.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/DC/DCConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A ground within a DC system.
			 */
			class DCGround : public IEC61970::Base::DC::DCConductingEquipment
			{

			public:
				DCGround();
				virtual ~DCGround();
				/**
				 * Inductance to ground.
				 */
				IEC61970::Base::Domain::Inductance inductance;
				/**
				 * Resistance to ground.
				 */
				IEC61970::Base::Domain::Resistance r;

			};

		}

	}

}
#endif // !defined(EA_3D539508_ADAE_4d61_9466_27B989B56504__INCLUDED_)
