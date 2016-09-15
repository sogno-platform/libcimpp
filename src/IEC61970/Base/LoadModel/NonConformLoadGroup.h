///////////////////////////////////////////////////////////
//  NonConformLoadGroup.h
//  Implementation of the Class NonConformLoadGroup
//  Created on:      28-Jan-2016 12:45:47
///////////////////////////////////////////////////////////

#if !defined(EA_4E9BF984_FD69_49eb_8465_6C2ACA54B50A__INCLUDED_)
#define EA_4E9BF984_FD69_49eb_8465_6C2ACA54B50A__INCLUDED_

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
#endif // !defined(EA_4E9BF984_FD69_49eb_8465_6C2ACA54B50A__INCLUDED_)
