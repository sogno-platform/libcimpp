///////////////////////////////////////////////////////////
//  WaveTrap.h
//  Implementation of the Class WaveTrap
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef WAVETRAP_H
#define WAVETRAP_H

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
#endif // WAVETRAP_H
