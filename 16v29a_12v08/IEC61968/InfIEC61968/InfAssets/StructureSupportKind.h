///////////////////////////////////////////////////////////
//  StructureSupportKind.h
//  Implementation of the Class StructureSupportKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef STRUCTURESUPPORTKIND_H
#define STRUCTURESUPPORTKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of structure support.
			 */
			enum class StructureSupportKind
			{
				 _undef = -1, 	anchor,
				guy
			};

		}

	}

}
#endif // STRUCTURESUPPORTKIND_H
