///////////////////////////////////////////////////////////
//  BreakerConfiguration.h
//  Implementation of the Class BreakerConfiguration
//  Created on:      28-Jan-2016 12:43:30
///////////////////////////////////////////////////////////

#if !defined(EA_C108B5E4_56E1_4267_855A_D889F04CA817__INCLUDED_)
#define EA_C108B5E4_56E1_4267_855A_D889F04CA817__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Switching arrangement for bay. 
			 */
			enum class BreakerConfiguration
			{
				/**
				 * Single breaker.
				 */
				singleBreaker,
				/**
				 * Breaker and a half.
				 */
				breakerAndAHalf,
				/**
				 * Double breaker.
				 */
				doubleBreaker,
				/**
				 * No breaker.
				 */
				noBreaker
			};

		}

	}

}
#endif // !defined(EA_C108B5E4_56E1_4267_855A_D889F04CA817__INCLUDED_)
