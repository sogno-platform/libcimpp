///////////////////////////////////////////////////////////
//  EquivalentNetwork.h
//  Implementation of the Class EquivalentNetwork
//  Created on:      28-Jan-2016 12:44:18
///////////////////////////////////////////////////////////

#if !defined(EA_C36318F3_8A39_4920_96DD_BC94960D7370__INCLUDED_)
#define EA_C36318F3_8A39_4920_96DD_BC94960D7370__INCLUDED_

#include <list>

#include "IEC61970/Base/Equivalents/EquivalentEquipment.h"
#include "IEC61970/Base/Core/ConnectivityNodeContainer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Equivalents
		{
			/**
			 * A class that represents an external meshed network that has been reduced to an
			 * electrically equivalent model. The ConnectivityNodes contained in the
			 * equivalent are intended to reflect internal nodes of the equivalent. The
			 * boundary Connectivity nodes where the equivalent connects outside itself are
			 * NOT contained by the equivalent.
			 */
			class EquivalentNetwork : public IEC61970::Base::Core::ConnectivityNodeContainer
			{

			public:
				EquivalentNetwork();
				virtual ~EquivalentNetwork();
				/**
				 * The associated reduced equivalents.
				 */
				std::list<IEC61970::Base::Equivalents::EquivalentEquipment*> EquivalentEquipments;

			};

		}

	}

}
#endif // !defined(EA_C36318F3_8A39_4920_96DD_BC94960D7370__INCLUDED_)
