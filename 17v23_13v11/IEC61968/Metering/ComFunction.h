///////////////////////////////////////////////////////////
//  ComFunction.h
//  Implementation of the Class ComFunction
///////////////////////////////////////////////////////////

#ifndef COMFUNCTION_H
#define COMFUNCTION_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Metering/ComDirectionKind.h"
#include "IEC61968/Metering/ComTechnologyKind.h"
#include "IEC61968/Metering/EndDeviceFunction.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Communication function of communication equipment or a device such as a meter. 
		 */
		class ComFunction : public IEC61968::Metering::EndDeviceFunction
		{

		public:
			ComFunction();
			virtual ~ComFunction();
			/**
			 * Communication ID number (e.g. serial number, IP address, telephone number, etc.
			 * ) of the AMR module which serves this meter.
			 */
			IEC61970::Base::Domain::String amrAddress;
			/**
			 * Communication ID number (e.g. port number, serial number, data collector ID,
			 * etc.) of the parent device associated to this AMR module.
			 */
			IEC61970::Base::Domain::String amrRouter;
			/**
			 * Kind of communication direction.
			 */
			IEC61968::Metering::ComDirectionKind direction = IEC61968::Metering::ComDirectionKind::_undef;
			/**
			 * Kind of communication technology.
			 */
			IEC61968::Metering::ComTechnologyKind technology = IEC61968::Metering::ComTechnologyKind::_undef;

		};

	}

}
#endif // COMFUNCTION_H
