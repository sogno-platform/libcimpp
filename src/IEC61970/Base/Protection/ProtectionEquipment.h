///////////////////////////////////////////////////////////
//  ProtectionEquipment.h
//  Implementation of the Class ProtectionEquipment
//  Created on:      28-Jan-2016 12:46:13
///////////////////////////////////////////////////////////

#if !defined(EA_0E7F3168_A93D_464f_A3B4_82EEBFDF0AC1__INCLUDED_)
#define EA_0E7F3168_A93D_464f_A3B4_82EEBFDF0AC1__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Wires/ProtectedSwitch.h"
#include "IEC61970/Base/Core/Equipment.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Protection
		{
			/**
			 * An electrical device designed to respond to input conditions in a prescribed
			 * manner and after specified conditions are met to cause contact operation or
			 * similar abrupt change in associated electric control circuits, or simply to
			 * display the detected condition. Protection equipment are associated with
			 * conducting equipment and usually operate circuit breakers.
			 */
			class ProtectionEquipment : public IEC61970::Base::Core::Equipment
			{

			public:
				ProtectionEquipment();
				virtual ~ProtectionEquipment();
				/**
				 * The maximum allowable value.
				 */
				IEC61970::Base::Domain::Float highLimit;
				/**
				 * The minimum allowable value.
				 */
				IEC61970::Base::Domain::Float lowLimit;
				/**
				 * Direction same as positive active power flow value.
				 */
				IEC61970::Base::Domain::Boolean powerDirectionFlag;
				/**
				 * The time delay from detection of abnormal conditions to relay operation.
				 */
				IEC61970::Base::Domain::Seconds relayDelayTime;
				/**
				 * The unit multiplier of the value.
				 */
				IEC61970::Base::Domain::UnitMultiplier unitMultiplier;
				/**
				 * The unit of measure of the value.
				 */
				IEC61970::Base::Domain::UnitSymbol unitSymbol;
				/**
				 * Protected switches operated by this ProtectionEquipment.
				 */
				std::list<IEC61970::Base::Wires::ProtectedSwitch*> ProtectedSwitches;
				/**
				 * Protection equipment may be used to protect specific conducting equipment.
				 */
				std::list<IEC61970::Base::Core::ConductingEquipment*> ConductingEquipments;

			};

		}

	}

}
#endif // !defined(EA_0E7F3168_A93D_464f_A3B4_82EEBFDF0AC1__INCLUDED_)
