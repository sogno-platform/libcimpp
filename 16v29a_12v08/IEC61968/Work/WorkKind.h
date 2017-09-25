///////////////////////////////////////////////////////////
//  WorkKind.h
//  Implementation of the Class WorkKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKKIND_H
#define WORKKIND_H

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Kind of work.
		 */
		enum class WorkKind
		{
			/**
			 * Construction work.
			 */
			construction,
			/**
			 * Inspection work.
			 */
			inspection,
			/**
			 * Maintenance work.
			 */
			maintenance,
			/**
			 * Repair work.
			 */
			repair,
			/**
			 * Test work.
			 */
			test,
			/**
			 * Service work.
			 */
			service,
			/**
			 * Disconnect work.
			 */
			disconnect,
			/**
			 * (use 'connect' instead) Reconnect work.
			 */
			reconnect,
			/**
			 * Connect work.
			 */
			connect,
			/**
			 * Other kind of work.
			 */
			other
		};

	}

}
#endif // WORKKIND_H
