///////////////////////////////////////////////////////////
//  LoadGroup.h
//  Implementation of the Class LoadGroup
//  Created on:      28-Jan-2016 12:45:37
///////////////////////////////////////////////////////////

#if !defined(EA_F88B4929_CB7A_4009_8592_C24223205ADA__INCLUDED_)
#define EA_F88B4929_CB7A_4009_8592_C24223205ADA__INCLUDED_

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
#endif // !defined(EA_F88B4929_CB7A_4009_8592_C24223205ADA__INCLUDED_)
