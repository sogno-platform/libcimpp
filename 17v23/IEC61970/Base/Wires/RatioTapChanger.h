///////////////////////////////////////////////////////////
//  RatioTapChanger.h
//  Implementation of the Class RatioTapChanger
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef RATIOTAPCHANGER_H
#define RATIOTAPCHANGER_H

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Wires/TransformerControlMode.h"
#include "IEC61970/Base/Wires/RatioTapChangerTable.h"
#include "IEC61970/Base/Wires/TapChanger.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A tap changer that changes the voltage ratio impacting the voltage magnitude
			 * but not the phase angle across the transformer.
			 */
			class RatioTapChanger : public IEC61970::Base::Wires::TapChanger
			{

			public:
				RatioTapChanger();
				virtual ~RatioTapChanger();
				/**
				 * Tap step increment, in per cent of neutral voltage, per step position.
				 */
				IEC61970::Base::Domain::PerCent stepVoltageIncrement;
				/**
				 * Specifies the regulation control mode (voltage or reactive) of the
				 * RatioTapChanger.
				 */
				IEC61970::Base::Wires::TransformerControlMode tculControlMode = IEC61970::Base::Wires::TransformerControlMode::_undef;
				/**
				 * The tap ratio table for this ratio  tap changer.
				 */
				IEC61970::Base::Wires::RatioTapChangerTable *RatioTapChangerTable;

			};

		}

	}

}
#endif // RATIOTAPCHANGER_H
