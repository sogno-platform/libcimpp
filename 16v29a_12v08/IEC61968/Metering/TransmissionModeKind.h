///////////////////////////////////////////////////////////
//  TransmissionModeKind.h
//  Implementation of the Class TransmissionModeKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TRANSMISSIONMODEKIND_H
#define TRANSMISSIONMODEKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Transmission mode for end device display controls, applicable to premises area
		 * network (PAN) devices. 
		 */
		enum class TransmissionModeKind
		{
			/**
			 * Message transmission mode whereby messages or commands are sent to specific
			 * devices.
			 */
			normal,
			/**
			 * Message transmission mode whereby messages or commands are broadcast to
			 * unspecified devices listening for such communications.
			 */
			anonymous,
			/**
			 * Message transmission mode whereby messages or commands are sent by both
			 * 'normal' and 'anonymous' methods.
			 */
			both
		};

	}

}
#endif // TRANSMISSIONMODEKIND_H
