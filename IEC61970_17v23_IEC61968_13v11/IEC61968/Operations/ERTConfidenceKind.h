///////////////////////////////////////////////////////////
//  ERTConfidenceKind.h
//  Implementation of the Class ERTConfidenceKind
//  Original author: Margaret
///////////////////////////////////////////////////////////

#ifndef ERTCONFIDENCEKIND_H
#define ERTCONFIDENCEKIND_H

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * The estimated time of restoration can have a confidence factor applied such as
		 * high or low confidence that the ERT will be accomplished.  This confidence
		 * factor may be updated as needed during the outage period - just as the actual
		 * ERT can be updated.
		 */
		enum class ERTConfidenceKind
		{
			/**
			 * there is a high confidence that the ERT will be accomplished
			 */
			 _undef = -1, 	high,
			/**
			 * there is a low confidence that the ERT will be accomplished.
			 */
			low
		};

	}

}
#endif // ERTCONFIDENCEKIND_H
