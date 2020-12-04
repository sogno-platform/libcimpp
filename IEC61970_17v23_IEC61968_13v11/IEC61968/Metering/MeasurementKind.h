///////////////////////////////////////////////////////////
//  MeasurementKind.h
//  Implementation of the Class MeasurementKind
//  Original author: Marty
///////////////////////////////////////////////////////////

#ifndef MEASUREMENTKIND_H
#define MEASUREMENTKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of read / measured value.
		 */
		enum class MeasurementKind
		{
			/**
			 * Not Applicable
			 */
			none = 0,
			 _undef = -1, 	apparentPowerFactor = 2,
			/**
			 * funds
			 */
			currency = 3,
			current = 4,
			currentAngle = 5,
			currentImbalance = 6,
			date = 7,
			demand = 8,
			distance = 9,
			distortionVoltAmp = 10,
			energization = 11,
			energy = 12,
			energizationLoadSide = 13,
			fan = 14,
			frequency = 15,
			/**
			 * Dup with “currency”
			 */
			fund = 16,
			ieee1366ASAI = 17,
			ieee1366ASIDI = 18,
			ieee1366ASIFI = 19,
			ieee1366CAIDI = 20,
			ieee1366CAIFI = 21,
			ieee1366CEMIn = 22,
			ieee1366CEMSMIn = 23,
			ieee1366CTAIDI = 24,
			ieee1366MAIFI = 25,
			ieee1366MAIFIe = 26,
			ieee1366SAIDI = 27,
			ieee1366SAIFI = 28,
			lineLoss = 31,
			loss = 32,
			negativeSequence = 33,
			phasorPowerFactor = 34,
			phasorReactivePower = 35,
			positiveSequence = 36,
			power = 37,
			powerFactor = 38,
			quantityPower = 40,
			/**
			 * or Voltage Dip
			 */
			sag = 41,
			swell = 42,
			switchPosition = 43,
			tapPosition = 44,
			tariffRate = 45,
			temperature = 46,
			totalHarmonicDistortion = 47,
			transformerLoss = 48,
			unipedeVoltageDip10to15 = 49,
			unipedeVoltageDip15to30 = 50,
			unipedeVoltageDip30to60 = 51,
			unipedeVoltageDip60to90 = 52,
			unipedeVoltageDip90to100 = 53,
			voltage = 54,
			voltageAngle = 55,
			voltageExcursion = 56,
			voltageImbalance = 57,
			/**
			 * Clarified  from Ed. 1. to indicate fluid volume
			 */
			volume = 58,
			zeroFlowDuration = 59,
			zeroSequence = 60,
			distortionPowerFactor = 64,
			/**
			 * Usually expressed as a “count”
			 */
			frequencyExcursion = 81,
			applicationContext = 90,
			apTitle = 91,
			assetNumber = 92,
			bandwidth = 93,
			batteryVoltage = 94,
			broadcastAddress = 95,
			deviceAddressType1 = 96,
			deviceAddressType2 = 97,
			deviceAddressType3 = 98,
			deviceAddressType4 = 99,
			deviceClass = 100,
			electronicSerialNumber = 101,
			endDeviceID = 102,
			groupAddressType1 = 103,
			groupAddressType2 = 104,
			groupAddressType3 = 105,
			groupAddressType4 = 106,
			ipAddress = 107,
			macAddress = 108,
			mfgAssignedConfigurationID = 109,
			mfgAssignedPhysicalSerialNumber = 110,
			mfgAssignedProductNumber = 111,
			mfgAssignedUniqueCommunicationAddress = 112,
			multiCastAddress = 113,
			oneWayAddress = 114,
			signalStrength = 115,
			twoWayAddress = 116,
			/**
			 * Moved here from Attribute #9 UOM
			 */
			signaltoNoiseRatio = 117,
			alarm = 118,
			batteryCarryover = 119,
			dataOverflowAlarm = 120,
			demandLimit = 121,
			/**
			 * Usually expressed as a count as part of a billing cycle
			 */
			demandReset = 122,
			diagnostic = 123,
			emergencyLimit = 124,
			encoderTamper = 125,
			ieee1366MomentaryInterruption = 126,
			ieee1366MomentaryInterruptionEvent = 127,
			ieee1366SustainedInterruption = 128,
			interruptionBehaviour = 129,
			inversionTamper = 130,
			loadInterrupt = 131,
			loadShed = 132,
			maintenance = 133,
			physicalTamper = 134,
			powerLossTamper = 135,
			powerOutage = 136,
			powerQuality = 137,
			powerRestoration = 138,
			programmed = 139,
			pushbutton = 140,
			relayActivation = 141,
			/**
			 * Usually expressed as a count
			 */
			relayCycle = 142,
			removalTamper = 143,
			reprogrammingTamper = 144,
			reverseRotationTamper = 145,
			switchArmed = 146,
			switchDisabled = 147,
			tamper = 148,
			watchdogTimeout = 149,
			/**
			 * Customer’s bill for the previous billing period (Currency)
			 */
			billLastPeriod = 150,
			/**
			 * Customer’s bill, as known thus far within the present billing period (Currency)
			 */
			billToDate = 151,
			/**
			 * Customer’s bill for the (Currency)
			 */
			billCarryover = 152,
			/**
			 * Monthly fee for connection to commodity.
			 */
			connectionFee = 153,
			/**
			 * Sound
			 */
			audibleVolume = 154,
			volumetricFlow = 155
		};

	}

}
#endif // MEASUREMENTKIND_H
