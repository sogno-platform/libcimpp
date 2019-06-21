///////////////////////////////////////////////////////////
//  OperatingMechanismInfo.h
//  Implementation of the Class OperatingMechanismInfo
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OPERATINGMECHANISMINFO_H
#define OPERATINGMECHANISMINFO_H

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/AssetInfo/OperatingMechanismKind.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Breaker operating mechanism datasheet information.
		 */
		class OperatingMechanismInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			OperatingMechanismInfo();
			virtual ~OperatingMechanismInfo();
			/**
			 * Close current (nominal).
			 */
			IEC61970::Base::Domain::CurrentFlow closeAmps;
			/**
			 * Close voltage in volts DC.
			 */
			IEC61970::Base::Domain::Voltage closeVoltage;
			/**
			 * Kind of breaker operating mechanism.
			 */
			IEC61968::AssetInfo::OperatingMechanismKind mechanismKind = IEC61968::AssetInfo::OperatingMechanismKind::_undef;
			/**
			 * Rated motor run current in amps.
			 */
			IEC61970::Base::Domain::CurrentFlow motorRunCurrent;
			/**
			 * Rated motor start current in amps.
			 */
			IEC61970::Base::Domain::CurrentFlow motorStartCurrent;
			/**
			 * Nominal motor voltage in volts DC.
			 */
			IEC61970::Base::Domain::Voltage motorVoltage;
			/**
			 * Trip current (nominal).
			 */
			IEC61970::Base::Domain::CurrentFlow tripAmps;
			/**
			 * Trip voltage in volts DC.
			 */
			IEC61970::Base::Domain::Voltage tripVoltage;

		};

	}

}
#endif // OPERATINGMECHANISMINFO_H
