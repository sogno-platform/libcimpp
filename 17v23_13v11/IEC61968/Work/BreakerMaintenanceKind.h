///////////////////////////////////////////////////////////
//  BreakerMaintenanceKind.h
//  Implementation of the Class BreakerMaintenanceKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef BREAKERMAINTENANCEKIND_H
#define BREAKERMAINTENANCEKIND_H

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Possible types of breaker maintenance work.
		 */
		enum class BreakerMaintenanceKind
		{
			/**
			 * External out-of-service inspection and maintenance.
			 */
			 _undef = -1, 	externalOutOfService,
			/**
			 * Internal (interrupter) inspection and maintenance (breaker out of service).
			 */
			internalOutOfService,
			/**
			 * Overhaul of breaker interrupter unit. 
			 */
			interrupterOverhaul
		};

	}

}
#endif // BREAKERMAINTENANCEKIND_H
