///////////////////////////////////////////////////////////
//  ConformLoadGroup.h
//  Implementation of the Class ConformLoadGroup
//  Created on:      28-Jan-2016 12:43:38
///////////////////////////////////////////////////////////

#if !defined(EA_13FE5525_C276_4852_ACDA_22E6D15CA214__INCLUDED_)
#define EA_13FE5525_C276_4852_ACDA_22E6D15CA214__INCLUDED_

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
#endif // !defined(EA_13FE5525_C276_4852_ACDA_22E6D15CA214__INCLUDED_)
