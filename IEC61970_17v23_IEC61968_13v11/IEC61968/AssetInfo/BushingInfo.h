///////////////////////////////////////////////////////////
//  BushingInfo.h
//  Implementation of the Class BushingInfo
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef BUSHINGINFO_H
#define BUSHINGINFO_H

#include "IEC61970/Base/Domain/Capacitance.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61968/AssetInfo/BushingInsulationKind.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Bushing datasheet information.
		 */
		class BushingInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			BushingInfo();
			virtual ~BushingInfo();
			/**
			 * Factory measured capacitance, measured between the power factor tap and the
			 * bushing conductor.
			 */
			IEC61970::Base::Domain::Capacitance c1Capacitance;
			/**
			 * Factory measured insulation power factor, measured between the power factor tap
			 * and the bushing conductor.
			 */
			IEC61970::Base::Domain::PerCent c1PowerFactor;
			/**
			 * Factory measured capacitance measured between the power factor tap and ground.
			 */
			IEC61970::Base::Domain::Capacitance c2Capacitance;
			/**
			 * Factory measured insulation power factor, measured between the power factor tap
			 * and ground.
			 */
			IEC61970::Base::Domain::PerCent c2PowerFactor;
			/**
			 * Kind of insulation.
			 */
			IEC61968::AssetInfo::BushingInsulationKind insulationKind = IEC61968::AssetInfo::BushingInsulationKind::_undef;
			/**
			 * Rated current for bushing as installed.
			 */
			IEC61970::Base::Domain::CurrentFlow ratedCurrent;
			/**
			 * Rated impulse withstand voltage, also known as BIL (Basic Impulse Level).
			 */
			IEC61970::Base::Domain::Voltage ratedImpulseWithstandVoltage;
			/**
			 * Rated line-to-ground voltage. Also referred to as U<sub>y</sub> on bushing
			 * nameplate.
			 */
			IEC61970::Base::Domain::Voltage ratedLineToGroundVoltage;
			/**
			 * Rated voltage. Can be referred to as U<sub>m</sub>, system voltage or class on
			 * bushing nameplate.
			 */
			IEC61970::Base::Domain::Voltage ratedVoltage;

		};

	}

}
#endif // BUSHINGINFO_H
