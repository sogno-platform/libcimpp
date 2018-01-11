///////////////////////////////////////////////////////////
//  SwitchActionKind.h
//  Implementation of the Class SwitchActionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHACTIONKIND_H
#define SWITCHACTIONKIND_H

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Kind of action on switch.
		 */
		enum class SwitchActionKind
		{
			/**
			 * Open the switch.
			 */
			 _undef = -1, 	open,
			/**
			 * Close the switch.
			 */
			close,
			/**
			 * Disable (automatic) switch reclosing.
			 */
			disableReclosing,
			/**
			 * Enable (automatic) switch reclosing.
			 */
			enableReclosing
		};

	}

}
#endif // SWITCHACTIONKIND_H
