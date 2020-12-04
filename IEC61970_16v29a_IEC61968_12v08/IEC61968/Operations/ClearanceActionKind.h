///////////////////////////////////////////////////////////
//  ClearanceActionKind.h
//  Implementation of the Class ClearanceActionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CLEARANCEACTIONKIND_H
#define CLEARANCEACTIONKIND_H

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Type of clearance action.
		 */
		enum class ClearanceActionKind
		{
			/**
			 * Issue clearance.
			 */
			 _undef = -1, 	issue,
			/**
			 * Update clearance.
			 */
			update,
			/**
			 * Release clearance.
			 */
			release
		};

	}

}
#endif // CLEARANCEACTIONKIND_H
