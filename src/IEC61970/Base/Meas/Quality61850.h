///////////////////////////////////////////////////////////
//  Quality61850.h
//  Implementation of the Class Quality61850
//  Created on:      28-Jan-2016 12:46:23
///////////////////////////////////////////////////////////

#if !defined(EA_584FA494_746B_4faa_B2B6_51B888E2980A__INCLUDED_)
#define EA_584FA494_746B_4faa_B2B6_51B888E2980A__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/SCADA/Source.h"
#include "IEC61970/Base/Meas/Validity.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Quality flags in this class are as defined in IEC 61850, except for
			 * estimatorReplaced, which has been included in this class for convenience.
			 */
			class Quality61850 : public BaseClass
			{

			public:
				Quality61850();
				virtual ~Quality61850();
				/**
				 * Measurement value may be incorrect due to a reference being out of calibration.
				 */
				IEC61970::Base::Domain::Boolean badReference;
				/**
				 * Value has been replaced by State Estimator. estimatorReplaced is not an
				 * IEC61850 quality bit but has been put in this class for convenience.
				 */
				IEC61970::Base::Domain::Boolean estimatorReplaced;
				/**
				 * This identifier indicates that a supervision function has detected an internal
				 * or external failure, e.g. communication failure.
				 */
				IEC61970::Base::Domain::Boolean failure;
				/**
				 * Measurement value is old and possibly invalid, as it has not been successfully
				 * updated during a specified time interval.
				 */
				IEC61970::Base::Domain::Boolean oldData;
				/**
				 * Measurement value is blocked and hence unavailable for transmission.
				 */
				IEC61970::Base::Domain::Boolean operatorBlocked;
				/**
				 * To prevent some overload of the communication it is sensible to detect and
				 * suppress oscillating (fast changing) binary inputs. If a signal changes in a
				 * defined time (tosc) twice in the same direction (from 0 to 1 or from 1 to 0)
				 * then oscillation is detected and the detail quality identifier "oscillatory" is
				 * set. If it is detected a configured numbers of transient changes could be
				 * passed by. In this time the validity status "questionable" is set. If after
				 * this defined numbers of changes the signal is still in the oscillating state
				 * the value shall be set either to the opposite state of the previous stable
				 * value or to a defined default value. In this case the validity status
				 * "questionable" is reset and "invalid" is set as long as the signal is
				 * oscillating. If it is configured such that no transient changes should be
				 * passed by then the validity status "invalid" is set immediately in addition to
				 * the detail quality identifier "oscillatory" (used for status information only).
				 */
				IEC61970::Base::Domain::Boolean oscillatory;
				/**
				 * Measurement value is beyond a predefined range of value.
				 */
				IEC61970::Base::Domain::Boolean outOfRange;
				/**
				 * Measurement value is beyond the capability of being  represented properly. For
				 * example, a counter value overflows from maximum count back to a value of zero.
				 */
				IEC61970::Base::Domain::Boolean overFlow;
				/**
				 * Source gives information related to the origin of a value. The value may be
				 * acquired from the process, defaulted or substituted.
				 */
				IEC61970::Base::SCADA::Source source;
				/**
				 * A correlation function has detected that the value is not consitent with other
				 * values. Typically set by a network State Estimator.
				 */
				IEC61970::Base::Domain::Boolean suspect;
				/**
				 * Measurement value is transmitted for test purposes.
				 */
				IEC61970::Base::Domain::Boolean test;
				/**
				 * Validity of the measurement value.
				 */
				IEC61970::Base::Meas::Validity validity;

			};

		}

	}

}
#endif // !defined(EA_584FA494_746B_4faa_B2B6_51B888E2980A__INCLUDED_)
