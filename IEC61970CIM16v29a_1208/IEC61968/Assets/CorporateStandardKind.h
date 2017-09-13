///////////////////////////////////////////////////////////
//  CorporateStandardKind.h
//  Implementation of the Class CorporateStandardKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CORPORATESTANDARDKIND_H
#define CORPORATESTANDARDKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Kind of corporate standard.
		 */
		enum class CorporateStandardKind
		{
			/**
			 * Asset model is used as corporate standard.
			 */
			standard,
			/**
			 * Asset model is used experimentally.
			 */
			experimental,
			/**
			 * Asset model usage is under evaluation.
			 */
			underEvaluation,
			/**
			 * Other kind of corporate standard for the asset model.
			 */
			other
		};

	}

}
#endif // CORPORATESTANDARDKIND_H
