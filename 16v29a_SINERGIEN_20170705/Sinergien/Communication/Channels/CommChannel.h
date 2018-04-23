///////////////////////////////////////////////////////////
//  CommChannel.h
//  Implementation of the Class CommChannel
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef COMMCHANNEL_H
#define COMMCHANNEL_H

#include <list>

#include "IEC61970/Base/Domain/Float.h"
#include "Sinergien/Communication/Interfaces/ComInterface.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace Sinergien
{
	namespace Communication
	{
		namespace Channels
		{
			class CommChannel : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				CommChannel();
				virtual ~CommChannel();
				IEC61970::Base::Domain::Float ber;
				IEC61970::Base::Domain::Float dataRate;
				IEC61970::Base::Domain::Float delay;
				IEC61970::Base::Domain::Float length;
				std::list<Sinergien::Communication::Interfaces::ComInterface*> m_ComInterface;

			};

		}

	}

}
#endif // COMMCHANNEL_H
