///////////////////////////////////////////////////////////
//  ConnectivityNodeContainer.h
//  Implementation of the Class ConnectivityNodeContainer
//  Created on:      28-Jan-2016 12:43:39
///////////////////////////////////////////////////////////

#if !defined(EA_68440101_FC84_4023_BB25_45A0FD93B9D1__INCLUDED_)
#define EA_68440101_FC84_4023_BB25_45A0FD93B9D1__INCLUDED_

#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A base class for all objects that may contain connectivity nodes or topological
			 * nodes.
			 */
			class ConnectivityNodeContainer : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				ConnectivityNodeContainer();
				virtual ~ConnectivityNodeContainer();

			};

		}

	}

}
#endif // !defined(EA_68440101_FC84_4023_BB25_45A0FD93B9D1__INCLUDED_)
