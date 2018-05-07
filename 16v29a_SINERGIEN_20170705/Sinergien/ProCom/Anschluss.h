///////////////////////////////////////////////////////////
//  Anschluss.h
//  Implementation of the Class Anschluss
//  Original author: rn
///////////////////////////////////////////////////////////

#ifndef ANSCHLUSS_H
#define ANSCHLUSS_H

#include "Sinergien/ProCom/Anschlussart.h"
#include "Sinergien/ProCom/Anschlusstyp.h"
#include "Sinergien/ProCom/BoFiT_IO.h"

namespace Sinergien
{
	namespace ProCom
	{
		class Anschluss : public Sinergien::ProCom::BoFiT_IO
		{

		public:
			Anschluss();
			virtual ~Anschluss();
			Sinergien::ProCom::Anschlussart *m_Anschlussart;
			Sinergien::ProCom::Anschlusstyp *m_Anschlusstyp;

		};

	}

}
#endif // ANSCHLUSS_H
