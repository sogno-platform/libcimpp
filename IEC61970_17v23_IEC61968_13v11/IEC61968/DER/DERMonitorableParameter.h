///////////////////////////////////////////////////////////
//  DERMonitorableParameter.h
//  Implementation of the Class DERMonitorableParameter
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef DERMONITORABLEPARAMETER_H
#define DERMONITORABLEPARAMETER_H

#include "BaseClass.h"
#include "IEC61968/DER/DERParameterKind.h"
#include "IEC61968/Metering/FlowDirectionKind.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61968/DER/DERUnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61968
{
	namespace DER
	{
		class DERMonitorableParameter : public BaseClass
		{

		public:
			DERMonitorableParameter();
			virtual ~DERMonitorableParameter();
			IEC61968::DER::DERParameterKind DERParameter = IEC61968::DER::DERParameterKind::_undef;
			IEC61968::Metering::FlowDirectionKind flowDirection = IEC61968::Metering::FlowDirectionKind::_undef;
			IEC61970::Base::Domain::UnitMultiplier yMultiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
			IEC61968::DER::DERUnitSymbol yUnit = IEC61968::DER::DERUnitSymbol::_undef;
			IEC61970::Base::Domain::Float yUnitInstalledMax;
			IEC61970::Base::Domain::Float yUnitInstalledMin;

		};

	}

}
#endif // DERMONITORABLEPARAMETER_H
