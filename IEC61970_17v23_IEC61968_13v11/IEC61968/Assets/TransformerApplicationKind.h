///////////////////////////////////////////////////////////
//  TransformerApplicationKind.h
//  Implementation of the Class TransformerApplicationKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERAPPLICATIONKIND_H
#define TRANSFORMERAPPLICATIONKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Classifications of network roles in which transformers can be deployed. The
		 * classifications are intended to reflect both criticality of transformer in
		 * network operations and typical usage experienced by transformer.
		 * Note: This enumeration provides essential information to asset health analytics.
		 * The existing list is a starting point and is anticipated to be fleshed out
		 * further as requirements are better understood (PAB 2016/01/09).
		 */
		enum class TransformerApplicationKind
		{
			 _undef = -1, 	transmissionBusToBus,
			transmissionBusToDistribution,
			generatorStepUp,
			distribution
		};

	}

}
#endif // TRANSFORMERAPPLICATIONKIND_H
