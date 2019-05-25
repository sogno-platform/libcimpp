///////////////////////////////////////////////////////////
//  OutageCauseKind.h
//  Implementation of the Class OutageCauseKind
//  Original author: Margaret
///////////////////////////////////////////////////////////

#ifndef OUTAGECAUSEKIND_H
#define OUTAGECAUSEKIND_H

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * This enumeration describes the primary cause of the outage - planned, unplanned,
		 * etc.
		 */
		enum class OutageCauseKind
		{
			 _undef = -1, 	lightingStrike,
			lineDown,
			/**
			 * This outage was caused by an animal is was unplanned.  As such it is treated as
			 * a forced outage and is probably classified as "trouble" with a Trouble Ticket
			 * as well as a work/service order.  The primary difference between this and an
			 * unplanned outage is the reason for the outage.  If an animal caused this and
			 * perished as a result, the utility may have other actions that are required to
			 * be taken by the EPA or other groups with whom the utility has an agreement.
			 */
			animal,
			poleDown,
			treeDown
		};

	}

}
#endif // OUTAGECAUSEKIND_H
