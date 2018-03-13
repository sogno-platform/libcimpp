///////////////////////////////////////////////////////////
//  AmiBillingReadyKind.h
//  Implementation of the Class AmiBillingReadyKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef AMIBILLINGREADYKIND_H
#define AMIBILLINGREADYKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Lifecycle states of the metering installation at a usage point with respect to
		 * readiness for billing via advanced metering infrastructure reads.
		 */
		enum class AmiBillingReadyKind
		{
			/**
			 * Usage point is equipped with an AMI capable meter having communications
			 * capability.
			 */
			 _undef = -1, 	enabled,
			/**
			 * Usage point is equipped with an AMI capable meter that is functioning and
			 * communicating with the AMI network.
			 */
			operable,
			/**
			 * Usage point is equipped with an operating AMI capable meter and accuracy has
			 * been certified for billing purposes.
			 */
			billingApproved,
			/**
			 * Usage point is equipped with a non AMI capable meter.
			 */
			nonAmi,
			/**
			 * Usage point is equipped with an AMI capable meter; however, the AMI
			 * functionality has been disabled or is not being used.
			 */
			amiDisabled,
			/**
			 * Usage point is equipped with an AMI capable meter that is not yet currently
			 * equipped with a communications module.
			 */
			amiCapable,
			/**
			 * Usage point is not currently equipped with a meter.
			 */
			nonMetered
		};

	}

}
#endif // AMIBILLINGREADYKIND_H
