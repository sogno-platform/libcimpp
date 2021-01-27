///////////////////////////////////////////////////////////
//  StructureMaterialKind.h
//  Implementation of the Class StructureMaterialKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef STRUCTUREMATERIALKIND_H
#define STRUCTUREMATERIALKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of material used for structures.
			 */
			enum class StructureMaterialKind
			{
				 _undef = -1, 	wood,
				steel,
				concrete,
				other
			};

		}

	}

}
#endif // STRUCTUREMATERIALKIND_H
