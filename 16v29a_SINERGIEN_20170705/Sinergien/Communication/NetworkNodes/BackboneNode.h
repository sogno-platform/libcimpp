///////////////////////////////////////////////////////////
//  BackboneNode.h
//  Implementation of the Class BackboneNode
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef BACKBONENODE_H
#define BACKBONENODE_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "Sinergien/Communication/Modems/ComMod.h"
#include "Sinergien/Communication/Interfaces/WLANInt.h"
#include "Sinergien/Communication/Interfaces/LTEInt.h"
#include "Sinergien/Communication/Interfaces/FiberInt.h"
#include "Sinergien/Communication/Interfaces/ComInterface.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace NetworkNodes
		{
			class BackboneNode : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BackboneNode();
				virtual ~BackboneNode();
				IEC61970::Base::Domain::Boolean isAvailableBPLC;
				IEC61970::Base::Domain::Boolean isAvailableFiber;
				IEC61970::Base::Domain::Boolean isAvailableLTE;
				IEC61970::Base::Domain::Boolean isAvailableWLAN;
				std::list<Sinergien::Communication::Modems::ComMod*> m_ComMod;
				std::list<Sinergien::Communication::Interfaces::WLANInt*> m_WLANInt;
				std::list<Sinergien::Communication::Interfaces::LTEInt*> m_LTEInt;
				std::list<Sinergien::Communication::Interfaces::FiberInt*> m_FiberInt;
				std::list<Sinergien::Communication::Interfaces::ComInterface*> m_ComInterface;

			};

		}

	}

}
#endif // BACKBONENODE_H
