///////////////////////////////////////////////////////////
//  SealConditionKind.h
//  Implementation of the Class SealConditionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SEALCONDITIONKIND_H
#define SEALCONDITIONKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Kind of seal condition.
		 */
		enum class SealConditionKind
		{
			/**
			 * Seal is locked.
			 */
			 _undef = -1, 	locked,
			/**
			 * Seal is open.
			 */
			open,
			/**
			 * Seal is broken.
			 */
			broken,
			/**
			 * Seal is missing.
			 */
			missing,
			/**
			 * Other kind of seal condition.
			 */
			other
		};

	}

}
#endif // SEALCONDITIONKIND_H
