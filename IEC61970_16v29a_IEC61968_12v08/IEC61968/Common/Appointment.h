///////////////////////////////////////////////////////////
//  Appointment.h
//  Implementation of the Class Appointment
///////////////////////////////////////////////////////////

#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Work/Work.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Meeting time and location.
		 */
		class Appointment : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Appointment();
			virtual ~Appointment();
			/**
			 * True if requested to call customer when someone is about to arrive at their
			 * premises.
			 */
			IEC61970::Base::Domain::Boolean callAhead;
			/**
			 * Date and time reserved for appointment.
			 */
			IEC61970::Base::Domain::DateTimeInterval meetingInterval;
			/**
			 * All works for this appointment.
			 */
			std::list<IEC61968::Work::Work*> Works;

		};

	}

}
#endif // APPOINTMENT_H
