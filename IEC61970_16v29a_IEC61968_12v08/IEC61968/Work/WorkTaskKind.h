///////////////////////////////////////////////////////////
//  WorkTaskKind.h
//  Implementation of the Class WorkTaskKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKTASKKIND_H
#define WORKTASKKIND_H

namespace IEC61968
{
	namespace Work
	{
		enum class WorkTaskKind
		{
			/**
			 * Work task deals with installation of assets.
			 */
			 _undef = -1, 	install,
			/**
			 * Work task deals with removal of assets.
			 */
			remove,
			/**
			 * Work task deals with exchange of assets.
			 */
			exchange,
			/**
			 * Work task deals with investigation about assets.
			 */
			investigate
		};

	}

}
#endif // WORKTASKKIND_H
