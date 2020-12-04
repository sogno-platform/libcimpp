///////////////////////////////////////////////////////////
//  DCTopologicalNode.h
//  Implementation of the Class DCTopologicalNode
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef DCTOPOLOGICALNODE_H
#define DCTOPOLOGICALNODE_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Topology
		{
			/**
			 * DC bus.
			 */
			class DCTopologicalNode : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DCTopologicalNode();
				virtual ~DCTopologicalNode();

			};

		}

	}

}
#endif // DCTOPOLOGICALNODE_H
