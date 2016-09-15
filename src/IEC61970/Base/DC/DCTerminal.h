///////////////////////////////////////////////////////////
//  DCTerminal.h
//  Implementation of the Class DCTerminal
//  Created on:      28-Jan-2016 12:44:01
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_801B6FF1_6F7F_431d_B522_CCF7FAC43488__INCLUDED_)
#define EA_801B6FF1_6F7F_431d_B522_CCF7FAC43488__INCLUDED_

#include "IEC61970/Base/DC/DCBaseTerminal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * An electrical connection point to generic DC conducting equipment.
			 */
			class DCTerminal : public IEC61970::Base::DC::DCBaseTerminal
			{

			public:
				DCTerminal();
				virtual ~DCTerminal();

			};

		}

	}

}
#endif // !defined(EA_801B6FF1_6F7F_431d_B522_CCF7FAC43488__INCLUDED_)
