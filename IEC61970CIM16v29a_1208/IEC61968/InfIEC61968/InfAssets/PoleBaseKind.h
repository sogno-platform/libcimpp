///////////////////////////////////////////////////////////
//  PoleBaseKind.h
//  Implementation of the Class PoleBaseKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef POLEBASEKIND_H
#define POLEBASEKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of base for poles.
			 */
			enum class PoleBaseKind
			{
				asphalt,
				cement,
				dirt,
				unknown,
				other
			};

		}

	}

}
#endif // POLEBASEKIND_H
