///////////////////////////////////////////////////////////
//  Palettenregister.h
//  Implementation of the Class Palettenregister
//  Original author: rn
///////////////////////////////////////////////////////////

#ifndef PALETTENREGISTER_H
#define PALETTENREGISTER_H

#include "Sinergien/ProCom/BoFiT_IO.h"

namespace Sinergien
{
	namespace ProCom
	{
		class Palettenregister : public Sinergien::ProCom::BoFiT_IO
		{

		public:
			Palettenregister();
			virtual ~Palettenregister();

		};

	}

}
#endif // PALETTENREGISTER_H
