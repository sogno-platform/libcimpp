///////////////////////////////////////////////////////////
//  AnalyticKind.h
//  Implementation of the Class AnalyticKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ANALYTICKIND_H
#define ANALYTICKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Possible kinds of analytics.
		 */
		enum class AnalyticKind
		{
			 _undef = -1, 	riskAnalytic,
			faultAnalytic,
			agingAnalytic,
			healthAnalytic,
			replacementAnalytic,
			other
		};

	}

}
#endif // ANALYTICKIND_H
