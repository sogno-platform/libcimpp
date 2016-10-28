///////////////////////////////////////////////////////////
//  ConnectivityNode.h
//  Implementation of the Class ConnectivityNode
///////////////////////////////////////////////////////////

#ifndef CONNECTIVITYNODE_H
#define CONNECTIVITYNODE_H

#include "IEC61970/Base/Core/ConnectivityNodeContainer.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Connectivity nodes are points where terminals of AC conducting equipment are
			 * connected together with zero impedance.
			 */
			class ConnectivityNode : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ConnectivityNode();
				virtual ~ConnectivityNode();
				/**
				 * Container of this connectivity node.
				 */
				IEC61970::Base::Core::ConnectivityNodeContainer *ConnectivityNodeContainer;

			};

		}

	}

}
#endif // CONNECTIVITYNODE_H
