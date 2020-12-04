///////////////////////////////////////////////////////////
//  SynchrocheckRelay.h
//  Implementation of the Class SynchrocheckRelay
///////////////////////////////////////////////////////////

#ifndef SYNCHROCHECKRELAY_H
#define SYNCHROCHECKRELAY_H

#include "IEC61970/Base/Domain/AngleRadians.h"
#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Protection/ProtectionEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Protection
		{
			/**
			 * A device that operates when two AC circuits are within the desired limits of
			 * frequency, phase angle, and voltage, to permit or to cause the paralleling of
			 * these two circuits. Used to prevent the paralleling of non-synchronous
			 * topological islands.
			 */
			class SynchrocheckRelay : public IEC61970::Base::Protection::ProtectionEquipment
			{

			public:
				SynchrocheckRelay();
				virtual ~SynchrocheckRelay();
				/**
				 * The maximum allowable voltage vector phase angle difference across the open
				 * device.
				 */
				IEC61970::Base::Domain::AngleRadians maxAngleDiff;
				/**
				 * The maximum allowable frequency difference across the open device.
				 */
				IEC61970::Base::Domain::Frequency maxFreqDiff;
				/**
				 * The maximum allowable difference voltage across the open device.
				 */
				IEC61970::Base::Domain::Voltage maxVoltDiff;

			};

		}

	}

}
#endif // SYNCHROCHECKRELAY_H
