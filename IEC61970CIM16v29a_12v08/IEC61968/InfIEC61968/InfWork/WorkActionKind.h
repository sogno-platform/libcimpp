///////////////////////////////////////////////////////////
//  WorkActionKind.h
//  Implementation of the Class WorkActionKind
///////////////////////////////////////////////////////////

#ifndef WORKACTIONKIND_H
#define WORKACTIONKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Kinds of activities to be performed on a Compatible Unit.
			 */
			enum class WorkActionKind
			{
				/**
				 * Install.
				 */
				install,
				/**
				 * Remove.
				 */
				remove,
				/**
				 * Leave it in place but not use it.
				 */
				abandon,
				/**
				 * Remove from one and install at another loctation.
				 */
				transfer
			};

		}

	}

}
#endif // WORKACTIONKIND_H
