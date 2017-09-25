///////////////////////////////////////////////////////////
//  PSREventKind.h
//  Implementation of the Class PSREventKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PSREVENTKIND_H
#define PSREVENTKIND_H

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Kind of power system resource event.
		 */
		enum class PSREventKind
		{
			/**
			 * Power system resource state change to in service.
			 */
			inService,
			/**
			 * Power system resource state change to out of service.
			 */
			outOfService,
			/**
			 * Power system resource state change to pending add.
			 */
			pendingAdd,
			/**
			 * Power system resource state change to pending remove.
			 */
			pendingRemove,
			/**
			 * Power system resource state change to pending replace.
			 */
			pendingReplace,
			/**
			 * Other power system resource state change.
			 */
			other,
			/**
			 * Unknown power system resource state change.
			 */
			unknown
		};

	}

}
#endif // PSREVENTKIND_H
