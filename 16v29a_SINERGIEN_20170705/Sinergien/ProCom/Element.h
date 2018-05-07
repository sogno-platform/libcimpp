///////////////////////////////////////////////////////////
//  Element.h
//  Implementation of the Class Element
//  Original author: rn
///////////////////////////////////////////////////////////

#ifndef ELEMENT_H
#define ELEMENT_H

#include "Sinergien/ProCom/BoFiT_IO.h"
#include "Sinergien/ProCom/Anschluss.h"
#include "Sinergien/ProCom/Palettenregister.h"

namespace Sinergien
{
	namespace ProCom
	{
		class Element : public Sinergien::ProCom::BoFiT_IO
		{

		public:
			Element();
			virtual ~Element();
			Sinergien::ProCom::Anschluss *m_Anschluss;
			Sinergien::ProCom::Palettenregister *m_Palettenregister;

		};

	}

}
#endif // ELEMENT_H
