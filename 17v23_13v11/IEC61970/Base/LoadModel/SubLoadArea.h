///////////////////////////////////////////////////////////
//  SubLoadArea.h
//  Implementation of the Class SubLoadArea
///////////////////////////////////////////////////////////

#ifndef SUBLOADAREA_H
#define SUBLOADAREA_H

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
#endif // SUBLOADAREA_H
