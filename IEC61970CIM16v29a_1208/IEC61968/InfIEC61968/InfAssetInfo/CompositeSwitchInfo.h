///////////////////////////////////////////////////////////
//  CompositeSwitchInfo.h
//  Implementation of the Class CompositeSwitchInfo
///////////////////////////////////////////////////////////

#ifndef COMPOSITESWITCHINFO_H
#define COMPOSITESWITCHINFO_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/CompositeSwitchKind.h"
#include "IEC61970/Base/Core/PhaseCode.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Properties of a composite switch.
			 */
			class CompositeSwitchInfo : public IEC61968::Assets::AssetInfo
			{

			public:
				CompositeSwitchInfo();
				virtual ~CompositeSwitchInfo();
				/**
				 * True if multi-phase switch controls all phases concurrently.
				 */
				IEC61970::Base::Domain::Boolean ganged;
				/**
				 * Initial operating mode, with the following values: Automatic, Manual.
				 */
				IEC61970::Base::Domain::String initOpMode;
				/**
				 * Breaking capacity, or short circuit rating, is the maximum rated current which
				 * the device can safely interrupt at the rated voltage.
				 */
				IEC61970::Base::Domain::CurrentFlow interruptingRating;
				/**
				 * Kind of composite switch.
				 */
				IEC61968::InfIEC61968::InfAssetInfo::CompositeSwitchKind kind;
				/**
				 * Phases carried, if applicable.
				 */
				IEC61970::Base::Core::PhaseCode phaseCode;
				/**
				 * Supported number of phases, typically 0, 1 or 3.
				 */
				IEC61970::Base::Domain::Integer phaseCount;
				/**
				 * Rated voltage.
				 */
				IEC61970::Base::Domain::Voltage ratedVoltage;
				/**
				 * True if device is capable of being operated by remote control.
				 */
				IEC61970::Base::Domain::Boolean remote;
				/**
				 * Number of switch states represented by the composite switch.
				 */
				IEC61970::Base::Domain::Integer switchStateCount;

			};

		}

	}

}
#endif // COMPOSITESWITCHINFO_H
