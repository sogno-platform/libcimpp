///////////////////////////////////////////////////////////
//  HealthScore.h
//  Implementation of the Class HealthScore
//  Original author: Gowri
///////////////////////////////////////////////////////////

#ifndef HEALTHSCORE_H
#define HEALTHSCORE_H

#include "IEC61968/Assets/AggregateScore.h"
#include "IEC61968/Assets/RiskScore.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Score that is indicative of the health of one or more assets.
		 */
		class HealthScore : public IEC61968::Assets::AggregateScore
		{

		public:
			HealthScore();
			virtual ~HealthScore();
			/**
			 * Risk score with which this health score is associated.
			 */
			IEC61968::Assets::RiskScore *AssetRiskScore;

		};

	}

}
#endif // HEALTHSCORE_H
