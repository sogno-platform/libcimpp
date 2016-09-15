///////////////////////////////////////////////////////////
//  ConnectivityNode.h
//  Implementation of the Class ConnectivityNode
//  Created on:      28-Jan-2016 12:43:39
///////////////////////////////////////////////////////////

#if !defined(EA_C710F4B5_2CE0_4c15_BD21_7C8F795969EA__INCLUDED_)
#define EA_C710F4B5_2CE0_4c15_BD21_7C8F795969EA__INCLUDED_

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
#endif // !defined(EA_C710F4B5_2CE0_4c15_BD21_7C8F795969EA__INCLUDED_)
