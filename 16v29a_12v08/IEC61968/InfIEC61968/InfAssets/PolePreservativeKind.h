///////////////////////////////////////////////////////////
//  PolePreservativeKind.h
//  Implementation of the Class PolePreservativeKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef POLEPRESERVATIVEKIND_H
#define POLEPRESERVATIVEKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Preservative kind for poles.
			 */
			enum class PolePreservativeKind
			{
				 _undef = -1, 	creosote,
				cellon,
				naphthena,
				penta,
				chemonite,
				unknown,
				other
			};

		}

	}

}
#endif // POLEPRESERVATIVEKIND_H
