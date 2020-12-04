///////////////////////////////////////////////////////////
//  ComModule.h
//  Implementation of the Class ComModule
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef COMMODULE_H
#define COMMODULE_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Minutes.h"
#include "IEC61968/Assets/Asset.h"
#include "IEC61968/Metering/ComFunction.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * An asset having communications capabilities that can be paired with a meter or
		 * other end device to provide the device with communication ability, through
		 * associated communication function. An end device that has communications
		 * capabilities through embedded hardware can use that function directly (without
		 * the communication module), or combine embedded communication function with
		 * additional communication functions provided through an external communication
		 * module (e.g. zigbee).
		 */
		class ComModule : public IEC61968::Assets::Asset
		{

		public:
			ComModule();
			virtual ~ComModule();
			/**
			 * Automated meter reading (AMR) system communicating with this com module.
			 */
			IEC61970::Base::Domain::String amrSystem;
			/**
			 * If true, autonomous daylight saving time (DST) function is supported.
			 */
			IEC61970::Base::Domain::Boolean supportsAutonomousDst;
			/**
			 * Time zone offset relative to GMT for the location of this com module.
			 */
			IEC61970::Base::Domain::Minutes timeZoneOffset;
			/**
			 * All functions this communication module performs.
			 */
			std::list<IEC61968::Metering::ComFunction*> ComFunctions;

		};

	}

}
#endif // COMMODULE_H
