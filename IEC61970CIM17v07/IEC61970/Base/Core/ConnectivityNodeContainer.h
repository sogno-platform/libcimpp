///////////////////////////////////////////////////////////
//  ConnectivityNodeContainer.h
//  Implementation of the Class ConnectivityNodeContainer
///////////////////////////////////////////////////////////

#ifndef CONNECTIVITYNODECONTAINER_H
#define CONNECTIVITYNODECONTAINER_H

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
#endif // CONNECTIVITYNODECONTAINER_H
