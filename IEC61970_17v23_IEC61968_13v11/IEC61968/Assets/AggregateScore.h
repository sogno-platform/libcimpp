///////////////////////////////////////////////////////////
//  AggregateScore.h
//  Implementation of the Class AggregateScore
//  Original author: Gowri
///////////////////////////////////////////////////////////

#ifndef AGGREGATESCORE_H
#define AGGREGATESCORE_H

#include <list>

#include "IEC61968/Assets/AnalyticScore.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * An aggregated indicative scoring by an analytic, which is based on other
		 * analytic scores, that can be used to characterize the health of or the risk
		 * associated with one or more assets.
		 */
		class AggregateScore : public IEC61968::Assets::AnalyticScore
		{

		public:
			AggregateScore();
			virtual ~AggregateScore();
			std::list<IEC61968::Assets::AnalyticScore*> AnalyticScore;

		};

	}

}
#endif // AGGREGATESCORE_H
