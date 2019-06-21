///////////////////////////////////////////////////////////
//  ISOStandardEditionKind.h
//  Implementation of the Class ISOStandardEditionKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ISOSTANDARDEDITIONKIND_H
#define ISOSTANDARDEDITIONKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * List of editions for ISO standards.
		 */
		enum class ISOStandardEditionKind
		{
			_1973,
			_1974,
			 _undef = -1, 	_1976,
			_1983,
			_1985,
			_1988,
			_1992,
			_1993,
			_1994,
			_1994_Cor1_1997,
			_1998,
			_2000,
			_2002,
			_2005,
			_2008,
			none,
			unknown
		};

	}

}
#endif // ISOSTANDARDEDITIONKIND_H
