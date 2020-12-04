///////////////////////////////////////////////////////////
//  TransformerFailureReasonKind.h
//  Implementation of the Class TransformerFailureReasonKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERFAILUREREASONKIND_H
#define TRANSFORMERFAILUREREASONKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Reason for transformer failure.
		 * Note: This enumeration provides essential information to asset health analytics.
		 * The existing list is a starting point and is anticipated to be fleshed out
		 * further as requirements are better understood (PAB 2016/01/09).
		 */
		enum class TransformerFailureReasonKind
		{
			 _undef = -1, 	bushingFailure,
			lossOfOil,
			oilRelatedFailure,
			poorOilQuality
		};

	}

}
#endif // TRANSFORMERFAILUREREASONKIND_H
