///////////////////////////////////////////////////////////
//  FaultIndicator.h
//  Implementation of the Class FaultIndicator
//  Created on:      28-Jan-2016 12:44:50
///////////////////////////////////////////////////////////

#if !defined(EA_A365652E_CD2F_4c79_9B5E_0AA47C6921F3__INCLUDED_)
#define EA_A365652E_CD2F_4c79_9B5E_0AA47C6921F3__INCLUDED_

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
#endif // !defined(EA_A365652E_CD2F_4c79_9B5E_0AA47C6921F3__INCLUDED_)
