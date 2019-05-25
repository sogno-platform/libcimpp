///////////////////////////////////////////////////////////
//  DispatchSchedule.h
//  Implementation of the Class DispatchSchedule
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef DISPATCHSCHEDULE_H
#define DISPATCHSCHEDULE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Core/CurveStyle.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/DER/TimeIntervalKind.h"
#include "IEC61968/DER/DERMonitorableParameter.h"

namespace IEC61968
{
	namespace DER
	{
		class DispatchSchedule : public BaseClass
		{

		public:
			DispatchSchedule();
			virtual ~DispatchSchedule();
			IEC61970::Base::Domain::PerCent confidence;
			/**
			 * Used to specify whether the values over an interval are constant
			 * (constantYValue) or linearly interpolated (straightLineYValues)
			 */
			IEC61970::Base::Core::CurveStyle curveStyleKind = IEC61970::Base::Core::CurveStyle::_undef;
			/**
			 * Used to specify the number of intervals when requesting a forecast or a
			 * dispatch.
			 */
			IEC61970::Base::Domain::Integer numberOfIntervals;
			/**
			 * The start time of the first interval in the dispatch schedule
			 */
			IEC61970::Base::Domain::DateTime startTime;
			/**
			 * The length of time for each interval in the dispatch schedule.
			 */
			IEC61970::Base::Domain::Integer timeIntervalDuration;
			/**
			 * The unit of measure for the time axis of the dispatch schedule.
			 */
			IEC61968::DER::TimeIntervalKind timeIntervalUnit = IEC61968::DER::TimeIntervalKind::_undef;
			IEC61968::DER::DERMonitorableParameter *DERMonitorableParameter;

		};

	}

}
#endif // DISPATCHSCHEDULE_H
