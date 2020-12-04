///////////////////////////////////////////////////////////
//  IECStandardEditionKind.h
//  Implementation of the Class IECStandardEditionKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef IECSTANDARDEDITIONKIND_H
#define IECSTANDARDEDITIONKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * List of editions for IEC standards.
		 */
		enum class IECStandardEditionKind
		{
			 _undef = -1, 	_1963,
			_1967,
			_1973,
			_1974,
			_1977,
			_1978,
			_1979,
			_1985,
			_1989,
			_1992,
			_1992_AMD1_2004,
			_1992_COR1_1992,
			_1993,
			_1995,
			_1997,
			_1998,
			_2004,
			_2004_AMD1_2007,
			_2004_AMD1_2007CSV,
			_2005,
			_2007,
			_2008,
			_2010,
			_2011,
			_2012,
			_2013,
			_2013_COR_2013,
			none,
			unknown
		};

	}

}
#endif // IECSTANDARDEDITIONKIND_H
