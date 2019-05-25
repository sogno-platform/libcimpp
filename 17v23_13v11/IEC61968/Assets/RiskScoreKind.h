///////////////////////////////////////////////////////////
//  RiskScoreKind.h
//  Implementation of the Class RiskScoreKind
//  Original author: Gowri
///////////////////////////////////////////////////////////

#ifndef RISKSCOREKIND_H
#define RISKSCOREKIND_H

namespace IEC61968
{
	namespace Assets
	{
		enum class RiskScoreKind
		{
			 _undef = -1, 	customerRisk,
			financialRisk,
			safetyRisk
		};

	}

}
#endif // RISKSCOREKIND_H
