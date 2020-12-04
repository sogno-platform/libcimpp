///////////////////////////////////////////////////////////
//  DERFunction.h
//  Implementation of the Class DERFunction
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef DERFUNCTION_H
#define DERFUNCTION_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Metering/EndDeviceGroup.h"

namespace IEC61968
{
	namespace DER
	{
		class DERFunction : public BaseClass
		{

		public:
			DERFunction();
			virtual ~DERFunction();
			IEC61970::Base::Domain::Boolean connectDisconnect;
			IEC61970::Base::Domain::Boolean frequencyWattCurveFunction;
			IEC61970::Base::Domain::Boolean maxRealPowerLimiting;
			IEC61970::Base::Domain::Boolean rampRateControl;
			IEC61970::Base::Domain::Boolean reactivePowerDispatch;
			IEC61970::Base::Domain::Boolean realPowerDispatch;
			IEC61970::Base::Domain::Boolean voltageRegulation;
			IEC61970::Base::Domain::Boolean voltVarCurveFunction;
			IEC61970::Base::Domain::Boolean voltWattCurveFunction;
			std::list<IEC61968::Metering::EndDeviceGroup*> EndDeviceGroup;

		};

	}

}
#endif // DERFUNCTION_H
