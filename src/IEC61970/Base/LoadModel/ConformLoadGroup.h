///////////////////////////////////////////////////////////
//  ConformLoadGroup.h
//  Implementation of the Class ConformLoadGroup
///////////////////////////////////////////////////////////

#ifndef CONFORMLOADGROUP_H
#define CONFORMLOADGROUP_H

#include <list>

#include "IEC61970/Base/LoadModel/LoadGroup.h"
#include "IEC61970/Base/LoadModel/ConformLoad.h"
#include "IEC61970/Base/LoadModel/ConformLoadSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * A group of loads conforming to an allocation pattern. 
			 */
			class ConformLoadGroup : public IEC61970::Base::LoadModel::LoadGroup
			{

			public:
				ConformLoadGroup();
				virtual ~ConformLoadGroup();
				/**
				 * Conform loads assigned to this ConformLoadGroup.
				 */
				std::list<IEC61970::Base::LoadModel::ConformLoad*> EnergyConsumers;
				/**
				 * The ConformLoadSchedules in the ConformLoadGroup.
				 */
				std::list<IEC61970::Base::LoadModel::ConformLoadSchedule*> ConformLoadSchedules;

			};

		}

	}

}
#endif // CONFORMLOADGROUP_H
