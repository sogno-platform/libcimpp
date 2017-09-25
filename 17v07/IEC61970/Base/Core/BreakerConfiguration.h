///////////////////////////////////////////////////////////
//  BreakerConfiguration.h
//  Implementation of the Class BreakerConfiguration
///////////////////////////////////////////////////////////

#ifndef BREAKERCONFIGURATION_H
#define BREAKERCONFIGURATION_H

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
#endif // BREAKERCONFIGURATION_H
