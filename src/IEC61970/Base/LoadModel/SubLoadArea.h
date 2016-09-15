///////////////////////////////////////////////////////////
//  SubLoadArea.h
//  Implementation of the Class SubLoadArea
//  Created on:      28-Jan-2016 12:46:53
///////////////////////////////////////////////////////////

#if !defined(EA_BF7F11C8_065E_41c5_92B8_F3B36AAC1A85__INCLUDED_)
#define EA_BF7F11C8_065E_41c5_92B8_F3B36AAC1A85__INCLUDED_

#include <list>

#include "IEC61970/Base/LoadModel/LoadGroup.h"
#include "IEC61970/Base/LoadModel/EnergyArea.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * The class is the second level in a hierarchical structure for grouping of loads
			 * for the purpose of load flow load scaling.
			 */
			class SubLoadArea : public IEC61970::Base::LoadModel::EnergyArea
			{

			public:
				SubLoadArea();
				virtual ~SubLoadArea();
				/**
				 * The Loadgroups in the SubLoadArea.
				 */
				std::list<IEC61970::Base::LoadModel::LoadGroup*> LoadGroups;

			};

		}

	}

}
#endif // !defined(EA_BF7F11C8_065E_41c5_92B8_F3B36AAC1A85__INCLUDED_)
