///////////////////////////////////////////////////////////
//  RatioTapChanger.h
//  Implementation of the Class RatioTapChanger
//  Created on:      28-Jan-2016 12:46:24
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_278AC25D_138B_42e8_AF7B_2E0EB581F683__INCLUDED_)
#define EA_278AC25D_138B_42e8_AF7B_2E0EB581F683__INCLUDED_

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
				 * Tap step increment, in per cent of nominal voltage, per step position.
				 */
				IEC61970::Base::Domain::PerCent stepVoltageIncrement;
				/**
				 * Specifies the regulation control mode (voltage or reactive) of the
				 * RatioTapChanger.
				 */
				IEC61970::Base::Wires::TransformerControlMode tculControlMode;
				/**
				 * The tap ratio table for this ratio  tap changer.
				 */
				IEC61970::Base::Wires::RatioTapChangerTable *RatioTapChangerTable;

			};

		}

	}

}
#endif // !defined(EA_278AC25D_138B_42e8_AF7B_2E0EB581F683__INCLUDED_)
