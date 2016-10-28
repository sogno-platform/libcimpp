///////////////////////////////////////////////////////////
//  RemoteInputSignal.h
//  Implementation of the Class RemoteInputSignal
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef REMOTEINPUTSIGNAL_H
#define REMOTEINPUTSIGNAL_H

#include "IEC61970/Dynamics/StandardInterconnections/RemoteSignalKind.h"
#include "IEC61970/Base/Core/Terminal.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardInterconnections
		{
			/**
			 * Supports connection to a terminal associated with a remote bus from which an
			 * input signal of a specific type is coming.
			 */
			class RemoteInputSignal : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				RemoteInputSignal();
				virtual ~RemoteInputSignal();
				/**
				 * Type of input signal.
				 */
				IEC61970::Dynamics::StandardInterconnections::RemoteSignalKind remoteSignalType;
				/**
				 * Remote terminal with which this input signal is associated.
				 */
				IEC61970::Base::Core::Terminal *Terminal;

			};

		}

	}

}
#endif // REMOTEINPUTSIGNAL_H
