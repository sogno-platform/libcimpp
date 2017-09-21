///////////////////////////////////////////////////////////
//  DCGround.h
//  Implementation of the Class DCGround
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCGROUND_H
#define DCGROUND_H

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
#endif // DCGROUND_H
