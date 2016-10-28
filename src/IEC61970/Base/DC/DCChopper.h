///////////////////////////////////////////////////////////
//  DCChopper.h
//  Implementation of the Class DCChopper
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef DCCHOPPER_H
#define DCCHOPPER_H

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
#endif // DCCHOPPER_H
