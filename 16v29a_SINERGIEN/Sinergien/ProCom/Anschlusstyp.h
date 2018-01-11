///////////////////////////////////////////////////////////
//  Anschlusstyp.h
//  Implementation of the Class Anschlusstyp
//  Original author: rn
///////////////////////////////////////////////////////////

#ifndef ANSCHLUSSTYP_H
#define ANSCHLUSSTYP_H

#include "Sinergien/ProCom/Einheitentyp.h"
#include "Sinergien/ProCom/BoFiT_IO.h"

namespace Sinergien
{
	namespace ProCom
	{
		class Anschlusstyp : public Sinergien::ProCom::BoFiT_IO
		{

		public:
			Anschlusstyp();
			virtual ~Anschlusstyp();
			Sinergien::ProCom::Einheitentyp *m_Einheitentyp;

		};

	}

}
#endif // ANSCHLUSSTYP_H
