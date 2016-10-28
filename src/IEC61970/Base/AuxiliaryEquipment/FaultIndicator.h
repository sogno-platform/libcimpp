///////////////////////////////////////////////////////////
//  FaultIndicator.h
//  Implementation of the Class FaultIndicator
///////////////////////////////////////////////////////////

#ifndef FAULTINDICATOR_H
#define FAULTINDICATOR_H

#include "IEC61970/Base/AuxiliaryEquipment/AuxiliaryEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * A FaultIndicator is typically only an indicator (which may or may not be
			 * remotely monitored), and not a piece of equipment that actually initiates a
			 * protection event. It is used for FLISR (Fault Location, Isolation and
			 * Restoration) purposes, assisting with the dispatch of crews to "most likely"
			 * part of the network (i.e. assists with determining circuit section where the
			 * fault most likely happened).
			 */
			class FaultIndicator : public IEC61970::Base::AuxiliaryEquipment::AuxiliaryEquipment
			{

			public:
				FaultIndicator();
				virtual ~FaultIndicator();

			};

		}

	}

}
#endif // FAULTINDICATOR_H
