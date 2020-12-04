///////////////////////////////////////////////////////////
//  EquivalentNetwork.h
//  Implementation of the Class EquivalentNetwork
///////////////////////////////////////////////////////////

#ifndef EQUIVALENTNETWORK_H
#define EQUIVALENTNETWORK_H

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
#endif // EQUIVALENTNETWORK_H
