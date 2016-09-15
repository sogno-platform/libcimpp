///////////////////////////////////////////////////////////
//  Duration.h
//  Implementation of the Class Duration
//  Created on:      28-Jan-2016 12:44:11
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_28E146CE_376B_4e8c_8A41_A3128560CB7E__INCLUDED_)
#define EA_28E146CE_376B_4e8c_8A41_A3128560CB7E__INCLUDED_

#include "IEC61970/Base/Domain/String.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Duration as "PnYnMnDTnHnMnS" which conforms to ISO 8601, where nY expresses a
			 * number of years, nM a number of months, nD a number of days. The letter T
			 * separates the date expression from the time expression and, after it, nH
			 * identifies a number of hours, nM a number of minutes and nS a number of seconds.
			 * The number of seconds could be expressed as a decimal number, but all other
			 * numbers are integers.
			 */
			class Duration
			{

			public:
				Duration();
				virtual ~Duration();
				IEC61970::Base::Domain::String value;

			};

		}

	}

}
#endif // !defined(EA_28E146CE_376B_4e8c_8A41_A3128560CB7E__INCLUDED_)
