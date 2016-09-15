///////////////////////////////////////////////////////////
//  WaveTrap.h
//  Implementation of the Class WaveTrap
//  Created on:      28-Jan-2016 12:47:43
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_39C8DCDC_482C_4178_ABEF_67B5FC3FA5C0__INCLUDED_)
#define EA_39C8DCDC_482C_4178_ABEF_67B5FC3FA5C0__INCLUDED_

#include "IEC61970/Base/AuxiliaryEquipment/AuxiliaryEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * Line traps are devices that impede high frequency power line carrier signals
			 * yet present a negligible impedance at the main power frequency.
			 */
			class WaveTrap : public IEC61970::Base::AuxiliaryEquipment::AuxiliaryEquipment
			{

			public:
				WaveTrap();
				virtual ~WaveTrap();

			};

		}

	}

}
#endif // !defined(EA_39C8DCDC_482C_4178_ABEF_67B5FC3FA5C0__INCLUDED_)
