///////////////////////////////////////////////////////////
//  BreakerApplicationKind.h
//  Implementation of the Class BreakerApplicationKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef BREAKERAPPLICATIONKIND_H
#define BREAKERAPPLICATIONKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Classifications of network roles in which breakers can be deployed. The
		 * classifications are intended to reflect both criticality of breaker in network
		 * operations and typical usage experienced by breaker.
		 * Note: This enumeration provides essential information to asset health analytics.
		 * The existing list is a starting point and is anticipated to be fleshed out
		 * further as requirements are better understood (PAB 2016/01/09).
		 */
		enum class BreakerApplicationKind
		{
			 _undef = -1, 	capacitorOrReactorBankBreaker,
			busBreaker,
			busTieBreaker,
			feederBreaker,
			stepUpTransformerBreakerHydro,
			stepUpTransformerBreakerFossil,
			stepUpTransformerBreakerNuclear,
			stepUpTransformerBreakerPumpedStorage,
			substationTransformerBreaker,
			transmissionFlowGateLineBreaker,
			transmissionLineBreaker,
			transmissionTieLineBreaker,
			spare,
			other
		};

	}

}
#endif // BREAKERAPPLICATIONKIND_H
