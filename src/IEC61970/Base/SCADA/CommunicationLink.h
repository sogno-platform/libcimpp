///////////////////////////////////////////////////////////
//  CommunicationLink.h
//  Implementation of the Class CommunicationLink
//  Created on:      28-Jan-2016 12:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_2B5D502B_C806_462c_B739_0CADF690CB81__INCLUDED_)
#define EA_2B5D502B_C806_462c_B739_0CADF690CB81__INCLUDED_

#include <list>

#include "IEC61970/Base/SCADA/RemoteUnit.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace SCADA
		{
			/**
			 * The connection to remote units is through one or more communication links.
			 * Reduntant links may exist. The CommunicationLink class inherit
			 * PowerSystemResource. The intention is to allow CommunicationLinks to have
			 * Measurements. These Measurements can be used to model link status as
			 * operational, out of service, unit failure etc.
			 */
			class CommunicationLink : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				CommunicationLink();
				virtual ~CommunicationLink();
				/**
				 * RTUs may be attached to communication links.
				 */
				std::list<IEC61970::Base::SCADA::RemoteUnit*> RemoteUnits;

			};

		}

	}

}
#endif // !defined(EA_2B5D502B_C806_462c_B739_0CADF690CB81__INCLUDED_)
