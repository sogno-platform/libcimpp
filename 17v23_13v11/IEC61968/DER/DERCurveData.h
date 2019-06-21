///////////////////////////////////////////////////////////
//  DERCurveData.h
//  Implementation of the Class DERCurveData
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef DERCURVEDATA_H
#define DERCURVEDATA_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/DER/DispatchSchedule.h"
#include "IEC61968/DER/DERMonitorableParameter.h"

namespace IEC61968
{
	namespace DER
	{
		class DERCurveData : public BaseClass
		{

		public:
			DERCurveData();
			virtual ~DERCurveData();
			IEC61970::Base::Domain::Integer intervalNumber;
			IEC61970::Base::Domain::Float maxYValue;
			IEC61970::Base::Domain::Float minYValue;
			IEC61970::Base::Domain::Float nominalYValue;
			IEC61970::Base::Domain::DateTime timeStamp;
			IEC61968::DER::DispatchSchedule *DispatchSchedule;
			IEC61968::DER::DERMonitorableParameter *DERMonitorableParameter;

		};

	}

}
#endif // DERCURVEDATA_H
