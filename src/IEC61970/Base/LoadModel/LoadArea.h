///////////////////////////////////////////////////////////
//  LoadArea.h
//  Implementation of the Class LoadArea
//  Created on:      28-Jan-2016 12:45:35
///////////////////////////////////////////////////////////

#if !defined(EA_480FBF71_A178_4388_8C97_2541BB470B3E__INCLUDED_)
#define EA_480FBF71_A178_4388_8C97_2541BB470B3E__INCLUDED_

#include <list>

#include "IEC61970/Base/LoadModel/SubLoadArea.h"
#include "IEC61970/Base/LoadModel/EnergyArea.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * The class is the root or first level in a hierarchical structure for grouping
			 * of loads for the purpose of load flow load scaling.
			 */
			class LoadArea : public IEC61970::Base::LoadModel::EnergyArea
			{

			public:
				LoadArea();
				virtual ~LoadArea();
				/**
				 * The SubLoadAreas in the LoadArea.
				 */
				std::list<IEC61970::Base::LoadModel::SubLoadArea*> SubLoadAreas;

			};

		}

	}

}
#endif // !defined(EA_480FBF71_A178_4388_8C97_2541BB470B3E__INCLUDED_)
