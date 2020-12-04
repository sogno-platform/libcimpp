///////////////////////////////////////////////////////////
//  LoadGroup.h
//  Implementation of the Class LoadGroup
///////////////////////////////////////////////////////////

#ifndef LOADGROUP_H
#define LOADGROUP_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * The class is the third level in a hierarchical structure for grouping of loads
			 * for the purpose of load flow load scaling.
			 */
			class LoadGroup : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				LoadGroup();
				virtual ~LoadGroup();

			};

		}

	}

}
#endif // LOADGROUP_H
