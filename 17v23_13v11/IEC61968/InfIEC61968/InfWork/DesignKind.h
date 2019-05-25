///////////////////////////////////////////////////////////
//  DesignKind.h
//  Implementation of the Class DesignKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef DESIGNKIND_H
#define DESIGNKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Kind of design.
			 */
			enum class DesignKind
			{
				 _undef = -1, 	estimated,
				asBuilt,
				other
			};

		}

	}

}
#endif // DESIGNKIND_H
