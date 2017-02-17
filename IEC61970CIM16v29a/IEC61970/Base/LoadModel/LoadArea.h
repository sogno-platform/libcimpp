///////////////////////////////////////////////////////////
//  LoadArea.h
//  Implementation of the Class LoadArea
///////////////////////////////////////////////////////////

#ifndef LOADAREA_H
#define LOADAREA_H

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
#endif // LOADAREA_H
