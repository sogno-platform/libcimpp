///////////////////////////////////////////////////////////
//  DemandResponseProgram.h
//  Implementation of the Class DemandResponseProgram
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef DEMANDRESPONSEPROGRAM_H
#define DEMANDRESPONSEPROGRAM_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Metering/UsagePointGroup.h"
#include "IEC61968/Metering/EndDeviceGroup.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Customers/CustomerAgreement.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Demand response program.
		 */
		class DemandResponseProgram : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			DemandResponseProgram();
			virtual ~DemandResponseProgram();
			/**
			 * Type of demand response program; examples are CPP (critical-peak pricing), RTP
			 * (real-time pricing), DLC (direct load control), DBP (demand bidding program),
			 * BIP (base interruptible program). Note that possible types change a lot and it
			 * would be impossible to enumerate them all.
			 */
			IEC61970::Base::Domain::String type;
			/**
			 * Interval within which the program is valid.
			 */
			IEC61970::Base::Domain::DateTimeInterval validityInterval;
			/**
			 * All usage point groups enrolled in this demand response program.
			 */
			std::list<IEC61968::Metering::UsagePointGroup*> UsagePointGroups;
			/**
			 * All groups of end devices enrolled in this demand response program.
			 */
			std::list<IEC61968::Metering::EndDeviceGroup*> EndDeviceGroups;
			/**
			 * All customer agreements through which the customer is enrolled in this demand
			 * response program.
			 */
			std::list<IEC61968::Customers::CustomerAgreement*> CustomerAgreements;

		};

	}

}
#endif // DEMANDRESPONSEPROGRAM_H
