///////////////////////////////////////////////////////////
//  RemoteConnectDisconnectInfo.h
//  Implementation of the Class RemoteConnectDisconnectInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef REMOTECONNECTDISCONNECTINFO_H
#define REMOTECONNECTDISCONNECTINFO_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/RealEnergy.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/ActivePower.h"

namespace IEC61968
{
	namespace LoadControl
	{
		/**
		 * Details of remote connect and disconnect function.
		 */
		class RemoteConnectDisconnectInfo : public BaseClass
		{

		public:
			RemoteConnectDisconnectInfo();
			virtual ~RemoteConnectDisconnectInfo();
			/**
			 * Setting of the timeout elapsed time.
			 */
			IEC61970::Base::Domain::Seconds armedTimeout;
			/**
			 * Voltage limit on customer side of RCD switch above which the connect should not
			 * be made.
			 */
			IEC61970::Base::Domain::Voltage customerVoltageLimit;
			/**
			 * Limit of energy before disconnect.
			 */
			IEC61970::Base::Domain::RealEnergy energyLimit;
			/**
			 * Start date and time to accumulate energy for energy usage limiting.
			 */
			IEC61970::Base::Domain::DateTime energyUsageStartDateTime;
			/**
			 * Warning energy limit, used to trigger event code that energy usage is nearing
			 * limit.
			 */
			IEC61970::Base::Domain::RealEnergy energyUsageWarning;
			/**
			 * True if the RCD switch has to be armed before a connect action can be initiated.
			 */
			IEC61970::Base::Domain::Boolean isArmConnect;
			/**
			 * True if the RCD switch has to be armed before a disconnect action can be
			 * initiated.
			 */
			IEC61970::Base::Domain::Boolean isArmDisconnect;
			/**
			 * True if the energy usage is limited and the customer will be disconnected if
			 * they go over the limit.
			 */
			IEC61970::Base::Domain::Boolean isEnergyLimiting;
			/**
			 * True if load limit has to be checked to issue an immediate disconnect (after a
			 * connect) if load is over the limit.
			 */
			IEC61970::Base::Domain::Boolean needsPowerLimitCheck;
			/**
			 * True if voltage limit has to be checked to prevent connect if voltage is over
			 * the limit.
			 */
			IEC61970::Base::Domain::Boolean needsVoltageLimitCheck;
			/**
			 * Load limit above which the connect should either not take place or should cause
			 * an immediate disconnect.
			 */
			IEC61970::Base::Domain::ActivePower powerLimit;
			/**
			 * True if pushbutton has to be used for connect.
			 */
			IEC61970::Base::Domain::Boolean usePushbutton;

		};

	}

}
#endif // REMOTECONNECTDISCONNECTINFO_H
