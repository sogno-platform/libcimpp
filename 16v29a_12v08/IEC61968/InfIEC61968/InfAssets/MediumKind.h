///////////////////////////////////////////////////////////
//  MediumKind.h
//  Implementation of the Class MediumKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef MEDIUMKIND_H
#define MEDIUMKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of medium.
			 */
			enum class MediumKind
			{
				gas,
				liquid,
				solid
			};

		}

	}

}
#endif // MEDIUMKIND_H
