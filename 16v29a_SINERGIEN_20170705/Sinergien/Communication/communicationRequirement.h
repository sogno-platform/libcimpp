///////////////////////////////////////////////////////////
//  communicationRequirement.h
//  Implementation of the Class communicationRequirement
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef COMMUNICATIONREQUIREMENT_H
#define COMMUNICATIONREQUIREMENT_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "Sinergien/Communication/commTypeQos.h"
#include "Sinergien/Communication/commTypeReliability.h"

namespace Sinergien
{
	namespace Communication
	{
		class communicationRequirement : public BaseClass
		{

		public:
			communicationRequirement();
			virtual ~communicationRequirement();
			IEC61970::Base::Domain::Float capacityRequirement;
			IEC61970::Base::Domain::Float delayRequirement;
			IEC61970::Base::Domain::Boolean isAvailableBPLC;
			IEC61970::Base::Domain::Boolean isAvailableFiber;
			IEC61970::Base::Domain::Boolean isAvailableLTE;
			IEC61970::Base::Domain::Boolean isAvailableWLAN;
			Sinergien::Communication::commTypeQos QosRequirement = Sinergien::Communication::commTypeQos::_undef;
			Sinergien::Communication::commTypeReliability reliabilityRequirement = Sinergien::Communication::commTypeReliability::_undef;
			/**
			 * Default FALSE
			 */
			IEC61970::Base::Domain::Boolean requiresCommunication;

		};

	}

}
#endif // COMMUNICATIONREQUIREMENT_H
