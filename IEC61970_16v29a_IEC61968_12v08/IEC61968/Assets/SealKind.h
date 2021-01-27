///////////////////////////////////////////////////////////
//  SealKind.h
//  Implementation of the Class SealKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SEALKIND_H
#define SEALKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Kind of seal.
		 */
		enum class SealKind
		{
			/**
			 * Steel seal.
			 */
			 _undef = -1, 	steel,
			/**
			 * Lead seal.
			 */
			lead,
			/**
			 * Lock seal.
			 */
			lock,
			/**
			 * Other kind of seal.
			 */
			other
		};

	}

}
#endif // SEALKIND_H
