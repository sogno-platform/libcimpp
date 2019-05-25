///////////////////////////////////////////////////////////
//  OutageStatusKind.h
//  Implementation of the Class OutageStatusKind
//  Original author: Margaret
///////////////////////////////////////////////////////////

#ifndef OUTAGESTATUSKIND_H
#define OUTAGESTATUSKIND_H

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * This defines if the outage have been predicted or confirmed
		 */
		enum class OutageStatusKind
		{
			/**
			 * the outage has been verified
			 */
			 _undef = -1, 	confirmed,
			/**
			 * the outage may not be real since it has not been verified - it is only thought
			 * to be an outage.
			 */
			predicted,
			/**
			 * Some of the usage points affected by the outage have been restored but other
			 * usage points are still out of power.
			 */
			partiallyRestored,
			/**
			 * All usage points associated with the outage have been restored
			 */
			restored,
			/**
			 * The outage has been fully restored, the crews have been released and the outage
			 * is shown as closed
			 */
			closed
		};

	}

}
#endif // OUTAGESTATUSKIND_H
