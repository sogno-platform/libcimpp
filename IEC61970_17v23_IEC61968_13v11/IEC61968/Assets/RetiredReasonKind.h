///////////////////////////////////////////////////////////
//  RetiredReasonKind.h
//  Implementation of the Class RetiredReasonKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef RETIREDREASONKIND_H
#define RETIREDREASONKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Reason asset retired.
		 */
		enum class RetiredReasonKind
		{
			 _undef = -1, 	environmental,
			excessiveMaintenance,
			facilitiesUpgrade,
			failed,
			obsolescence,
			other,
			sold
		};

	}

}
#endif // RETIREDREASONKIND_H
