///////////////////////////////////////////////////////////
//  IEEEStandardEditionKind.h
//  Implementation of the Class IEEEStandardEditionKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef IEEESTANDARDEDITIONKIND_H
#define IEEESTANDARDEDITIONKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * List of editions for IEEE standards.
		 */
		enum class IEEEStandardEditionKind
		{
			_1978,
			_1995,
			none,
			unknown,
			 _undef = -1, 	_undef_placeholder2 = -2
		};

	}

}
#endif // IEEESTANDARDEDITIONKIND_H
