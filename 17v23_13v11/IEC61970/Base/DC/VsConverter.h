///////////////////////////////////////////////////////////
//  VsConverter.h
//  Implementation of the Class VsConverter
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef VSCONVERTER_H
#define VSCONVERTER_H

#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/DC/VsPpccControlKind.h"
#include "IEC61970/Base/DC/VsQpccControlKind.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/DC/ACDCConverter.h"
#include "IEC61970/Base/DC/VsCapabilityCurve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * DC side of the voltage source converter (VSC).
			 */
			class VsConverter : public IEC61970::Base::DC::ACDCConverter
			{

			public:
				VsConverter();
				virtual ~VsConverter();
				/**
				 * Angle between uf and uc. Converter state variable used in power flow.
				 */
				IEC61970::Base::Domain::AngleDegrees delta;
				/**
				 * Droop constant; pu value is obtained as D [kV/MW] x Sb / Ubdc.
				 */
				IEC61970::Base::Domain::PU droop;
				/**
				 * Compensation constant. Used to compensate for voltage drop when controlling
				 * voltage at a distant bus.
				 */
				IEC61970::Base::Domain::Resistance droopCompensation;
				/**
				 * The max quotient between the AC converter voltage (Uc) and DC voltage (Ud). A
				 * factor typically less than 1. VSC configuration data used in power flow.
				 */
				IEC61970::Base::Domain::Float maxModulationIndex;
				/**
				 * The maximum current through a valve. This current limit is the basis for
				 * calculating the capability diagram. VSC  configuration data.
				 */
				IEC61970::Base::Domain::CurrentFlow maxValveCurrent;
				/**
				 * Kind of control of real power and/or DC voltage.
				 */
				IEC61970::Base::DC::VsPpccControlKind pPccControl = IEC61970::Base::DC::VsPpccControlKind::_undef;
				IEC61970::Base::DC::VsQpccControlKind qPccControl = IEC61970::Base::DC::VsQpccControlKind::_undef;
				/**
				 * Reactive power sharing factor among parallel converters on Uac control.
				 */
				IEC61970::Base::Domain::PerCent qShare;
				/**
				 * Reactive power injection target in AC grid, at point of common coupling.
				 */
				IEC61970::Base::Domain::ReactivePower targetQpcc;
				/**
				 * Voltage target in AC grid, at point of common coupling.
				 */
				IEC61970::Base::Domain::Voltage targetUpcc;
				/**
				 * Line-to-line voltage on the valve side of the converter transformer. Converter
				 * state variable, result from power flow.
				 */
				IEC61970::Base::Domain::Voltage uv;
				/**
				 * Capability curve of this converter.
				 */
				IEC61970::Base::DC::VsCapabilityCurve *CapabilityCurve;

			};

		}

	}

}
#endif // VSCONVERTER_H
