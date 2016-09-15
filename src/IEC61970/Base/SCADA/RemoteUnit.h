///////////////////////////////////////////////////////////
//  RemoteUnit.h
//  Implementation of the Class RemoteUnit
//  Created on:      28-Jan-2016 12:46:33
///////////////////////////////////////////////////////////

#if !defined(EA_C20022B5_52B2_4e40_AFD1_B58E1693753E__INCLUDED_)
#define EA_C20022B5_52B2_4e40_AFD1_B58E1693753E__INCLUDED_

#include <list>

#include "IEC61970/Base/SCADA/RemoteUnitType.h"
#include "IEC61970/Base/SCADA/RemotePoint.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace SCADA
		{
			/**
			 * A remote unit can be a RTU, IED, substation control system, control center etc.
			 * The communication with the remote unit can be through various standard
			 * protocols (e.g. IEC 61870, IEC 61850) or non standard protocols (e.g. DNP,
			 * RP570 etc.). A remote unit contain remote data points that might be telemetered,
			 * collected or calculated. The RemoteUnit class inherit PowerSystemResource. The
			 * intention is to allow RemotUnits to have Measurements. These Measurements can
			 * be used to model unit status as operational, out of service, unit failure etc.
			 */
			class RemoteUnit : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				RemoteUnit();
				virtual ~RemoteUnit();
				/**
				 * Type of remote unit.
				 */
				IEC61970::Base::SCADA::RemoteUnitType remoteUnitType;
				/**
				 * Remote points this Remote unit contains.
				 */
				std::list<IEC61970::Base::SCADA::RemotePoint*> RemotePoints;

			};

		}

	}

}
#endif // !defined(EA_C20022B5_52B2_4e40_AFD1_B58E1693753E__INCLUDED_)
