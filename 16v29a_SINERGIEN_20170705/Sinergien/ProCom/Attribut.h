///////////////////////////////////////////////////////////
//  Attribut.h
//  Implementation of the Class Attribut
//  Original author: rn
///////////////////////////////////////////////////////////

#ifndef ATTRIBUT_H
#define ATTRIBUT_H

#include "Sinergien/ProCom/Element.h"
#include "Sinergien/ProCom/BoFiT_IO.h"

namespace Sinergien
{
	namespace ProCom
	{
		class Attribut : public Sinergien::ProCom::BoFiT_IO
		{

		public:
			Attribut();
			virtual ~Attribut();
			Sinergien::ProCom::Element *m_Element;

		};

	}

}
#endif // ATTRIBUT_H
