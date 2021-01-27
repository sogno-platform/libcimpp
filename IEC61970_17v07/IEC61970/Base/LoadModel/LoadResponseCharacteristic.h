///////////////////////////////////////////////////////////
//  LoadResponseCharacteristic.h
//  Implementation of the Class LoadResponseCharacteristic
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef LOADRESPONSECHARACTERISTIC_H
#define LOADRESPONSECHARACTERISTIC_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * Models the characteristic response of the load demand due to changes in system
			 * conditions such as voltage and frequency. This is not related to demand
			 * response.
			 * 
			 * If LoadResponseCharacteristic.exponentModel is True, the voltage exponents are
			 * specified and used as to calculate:
			 * 
			 * Active power component = Pnominal * (Voltage/cim:BaseVoltage.nominalVoltage) **
			 * cim:LoadResponseCharacteristic.pVoltageExponent
			 * 
			 * Reactive power component = Qnominal * (Voltage/cim:BaseVoltage.
			 * nominalVoltage)** cim:LoadResponseCharacteristic.qVoltageExponent
			 * 
			 * Where  * means "multiply" and ** is "raised to power of".
			 */
			class LoadResponseCharacteristic : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				LoadResponseCharacteristic();
				virtual ~LoadResponseCharacteristic();
				/**
				 * Indicates the exponential voltage dependency model is to be used.   If false,
				 * the coefficient model is to be used.
				 * The exponential voltage dependency model consist of the attributes
				 * - pVoltageExponent
				 * - qVoltageExponent.
				 * The coefficient model consist of the attributes
				 * - pConstantImpedance
				 * - pConstantCurrent
				 * - pConstantPower
				 * - qConstantImpedance
				 * - qConstantCurrent
				 * - qConstantPower.
				 * The sum of pConstantImpedance, pConstantCurrent and pConstantPower shall equal
				 * 1.
				 * The sum of qConstantImpedance, qConstantCurrent and qConstantPower shall equal
				 * 1.
				 */
				IEC61970::Base::Domain::Boolean exponentModel;
				/**
				 * Portion of active power load modeled as constant current.
				 */
				IEC61970::Base::Domain::Float pConstantCurrent;
				/**
				 * Portion of active power load modeled as constant impedance.
				 */
				IEC61970::Base::Domain::Float pConstantImpedance;
				/**
				 * Portion of active power load modeled as constant power.
				 */
				IEC61970::Base::Domain::Float pConstantPower;
				/**
				 * Exponent of per unit frequency effecting active power.
				 */
				IEC61970::Base::Domain::Float pFrequencyExponent;
				/**
				 * Exponent of per unit voltage effecting real power.
				 */
				IEC61970::Base::Domain::Float pVoltageExponent;
				/**
				 * Portion of reactive power load modeled as constant current.
				 */
				IEC61970::Base::Domain::Float qConstantCurrent;
				/**
				 * Portion of reactive power load modeled as constant impedance.
				 */
				IEC61970::Base::Domain::Float qConstantImpedance;
				/**
				 * Portion of reactive power load modeled as constant power.
				 */
				IEC61970::Base::Domain::Float qConstantPower;
				/**
				 * Exponent of per unit frequency effecting reactive power.
				 */
				IEC61970::Base::Domain::Float qFrequencyExponent;
				/**
				 * Exponent of per unit voltage effecting reactive power.
				 */
				IEC61970::Base::Domain::Float qVoltageExponent;

			};

		}

	}

}
#endif // LOADRESPONSECHARACTERISTIC_H
