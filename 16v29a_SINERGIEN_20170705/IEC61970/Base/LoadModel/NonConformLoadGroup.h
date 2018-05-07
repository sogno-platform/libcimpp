///////////////////////////////////////////////////////////
//  NonConformLoadGroup.h
//  Implementation of the Class NonConformLoadGroup
///////////////////////////////////////////////////////////

#ifndef NONCONFORMLOADGROUP_H
#define NONCONFORMLOADGROUP_H

#include <list>

#include "IEC61970/Base/LoadModel/NonConformLoad.h"
#include "IEC61970/Base/LoadModel/LoadGroup.h"
#include "IEC61970/Base/LoadModel/NonConformLoadSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * Loads that do not follow a daily and seasonal load variation pattern.
			 */
			class NonConformLoadGroup : public IEC61970::Base::LoadModel::LoadGroup
			{

			public:
				NonConformLoadGroup();
				virtual ~NonConformLoadGroup();
				/**
				 * Conform loads assigned to this ConformLoadGroup.
				 */
				std::list<IEC61970::Base::LoadModel::NonConformLoad*> EnergyConsumers;
				/**
				 * The NonConformLoadSchedules in the NonConformLoadGroup.
				 */
				std::list<IEC61970::Base::LoadModel::NonConformLoadSchedule*> NonConformLoadSchedules;

			};

		}

	}

}
#endif // NONCONFORMLOADGROUP_H
