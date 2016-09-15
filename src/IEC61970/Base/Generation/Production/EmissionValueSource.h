///////////////////////////////////////////////////////////
//  EmissionValueSource.h
//  Implementation of the Class EmissionValueSource
//  Created on:      28-Jan-2016 12:44:13
///////////////////////////////////////////////////////////

#if !defined(EA_CD88FC35_DC22_4879_A4B2_6287A47D0FA6__INCLUDED_)
#define EA_CD88FC35_DC22_4879_A4B2_6287A47D0FA6__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * The source of the emission value.
				 */
				enum class EmissionValueSource
				{
					/**
					 * Measured.
					 */
					measured,
					/**
					 * Calculated.
					 */
					calculated
				};

			}

		}

	}

}
#endif // !defined(EA_CD88FC35_DC22_4879_A4B2_6287A47D0FA6__INCLUDED_)
