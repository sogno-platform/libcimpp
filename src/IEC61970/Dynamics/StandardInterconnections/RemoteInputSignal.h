///////////////////////////////////////////////////////////
//  RemoteInputSignal.h
//  Implementation of the Class RemoteInputSignal
//  Created on:      28-Jan-2016 12:46:31
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_63F068CB_69FB_4d81_8AB9_0BAED805A7D9__INCLUDED_)
#define EA_63F068CB_69FB_4d81_8AB9_0BAED805A7D9__INCLUDED_

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
#endif // !defined(EA_63F068CB_69FB_4d81_8AB9_0BAED805A7D9__INCLUDED_)
