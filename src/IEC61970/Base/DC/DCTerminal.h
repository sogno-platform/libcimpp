///////////////////////////////////////////////////////////
//  DCTerminal.h
//  Implementation of the Class DCTerminal
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef DCTERMINAL_H
#define DCTERMINAL_H

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
#endif // DCTERMINAL_H
