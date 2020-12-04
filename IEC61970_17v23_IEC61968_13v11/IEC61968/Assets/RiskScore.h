///////////////////////////////////////////////////////////
//  RiskScore.h
//  Implementation of the Class RiskScore
//  Original author: Gowri
///////////////////////////////////////////////////////////

#ifndef RISKSCORE_H
#define RISKSCORE_H

#include "IEC61968/Assets/RiskScoreKind.h"
#include "IEC61968/Assets/AggregateScore.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Score that is indicative of the risk associated with one or more assets.
		 */
		class RiskScore : public IEC61968::Assets::AggregateScore
		{

		public:
			RiskScore();
			virtual ~RiskScore();
			/**
			 * The risk kind, such as CustomerRisk, FinancialRisk, SafetyRisk, etc.
			 */
			IEC61968::Assets::RiskScoreKind kind = IEC61968::Assets::RiskScoreKind::_undef;

		};

	}

}
#endif // RISKSCORE_H
