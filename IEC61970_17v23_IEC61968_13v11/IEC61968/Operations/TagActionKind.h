///////////////////////////////////////////////////////////
//  TagActionKind.h
//  Implementation of the Class TagActionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TAGACTIONKIND_H
#define TAGACTIONKIND_H

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Kind of action on tag.
		 */
		enum class TagActionKind
		{
			/**
			 * Place the tag.
			 */
			 _undef = -1, 	place,
			/**
			 * Remove the tag.
			 */
			remove,
			/**
			 * Verify the tag.
			 */
			verify
		};

	}

}
#endif // TAGACTIONKIND_H
