///////////////////////////////////////////////////////////
//  ConnectDisconnectFunction.h
//  Implementation of the Class ConnectDisconnectFunction
///////////////////////////////////////////////////////////

#ifndef CONNECTDISCONNECTFUNCTION_H
#define CONNECTDISCONNECTFUNCTION_H

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/LoadControl/RemoteConnectDisconnectInfo.h"
#include "IEC61970/Base/Wires/Switch.h"
#include "IEC61968/Metering/EndDeviceFunction.h"

namespace IEC61968
{
	namespace LoadControl
	{
		/**
		 * A function that will disconnect and reconnect the customer's load under defined
		 * conditions.
		 */
		class ConnectDisconnectFunction : public IEC61968::Metering::EndDeviceFunction
		{

		public:
			ConnectDisconnectFunction();
			virtual ~ConnectDisconnectFunction();
			/**
			 * Running cumulative count of connect or disconnect events, for the lifetime of
			 * this function or until the value is cleared.
			 */
			IEC61970::Base::Domain::Integer eventCount;
			/**
			 * True if this function is in the connected state.
			 */
			IEC61970::Base::Domain::Boolean isConnected;
			/**
			 * If set true, the switch may disconnect the service at the end of a specified
			 * time delay after the disconnect signal has been given. If set false, the switch
			 * may disconnect the service immediately after the disconnect signal has been
			 * given. This is typically the case for over current circuit-breakers which are
			 * classified as either instantaneous or slow acting.
			 */
			IEC61970::Base::Domain::Boolean isDelayedDiscon;
			/**
			 * If set true and if disconnection can be operated locally, the operation happens
			 * automatically. Otherwise it happens manually.
			 */
			IEC61970::Base::Domain::Boolean isLocalAutoDisconOp;
			/**
			 * If set true and if reconnection can be operated locally, then the operation
			 * happens automatically. Otherwise, it happens manually.
			 */
			IEC61970::Base::Domain::Boolean isLocalAutoReconOp;
			/**
			 * If set true and if disconnection can be operated remotely, then the operation
			 * happens automatically. If set false and if disconnection can be operated
			 * remotely, then the operation happens manually.
			 */
			IEC61970::Base::Domain::Boolean isRemoteAutoDisconOp;
			/**
			 * If set true and if reconnection can be operated remotely, then the operation
			 * happens automatically. If set false and if reconnection can be operated
			 * remotely, then the operation happens manually.
			 */
			IEC61970::Base::Domain::Boolean isRemoteAutoReconOp;
			/**
			 * Information on remote connect disconnect switch.
			 */
			IEC61968::LoadControl::RemoteConnectDisconnectInfo rcdInfo;
			std::list<IEC61970::Base::Wires::Switch*> Switches;

		};

	}

}
#endif // CONNECTDISCONNECTFUNCTION_H
