///////////////////////////////////////////////////////////
//  DERUnitSymbol.h
//  Implementation of the Class DERUnitSymbol
///////////////////////////////////////////////////////////

#ifndef DERUNITSYMBOL_H
#define DERUNITSYMBOL_H

namespace IEC61968
{
	namespace DER
	{
		/**
		 * The units defined for usage in the CIM.
		 */
		enum class DERUnitSymbol
		{
			/**
			 * Time in seconds.
			 */
			 _undef = -1, 	s = 4,
			/**
			 * Current in Ampere.
			 */
			A = 5,
			/**
			 * Plane angle in degrees.
			 */
			deg = 9,
			/**
			 * Relative temperature in degrees Celsius.
			 * In the SI unit system the symbol is ºC. Electric charge is measured in coulomb
			 * that has the unit symbol C. To distinguish degree Celsius form coulomb the
			 * symbol used in the UML is degC. Reason for not using ºC is the special
			 * character º is difficult to manage in software.
			 */
			degC = 23,
			/**
			 * Electric potential in Volt (W/A).
			 */
			V = 29,
			/**
			 * Electric resistance in ohm (V/A).
			 */
			ohm = 30,
			/**
			 * Frequency in Hertz (1/s).
			 */
			Hz = 33,
			/**
			 * Real power in Watt (J/s). Electrical power may have real and reactive
			 * components. The real portion of electrical power (I²R or VIcos(phi)), is
			 * expressed in Watts. (See also apparent power and reactive power.)
			 */
			W = 38,
			/**
			 * Apparent power in Volt Ampere (See also real power and reactive power.)
			 */
			VA = 61,
			/**
			 * Reactive power in Volt Ampere reactive. The “reactive” or “imaginary” component
			 * of electrical power (VIsin(phi)). (See also real power and apparent power).
			 * Note: Different meter designs use different methods to arrive at their results.
			 * Some meters may compute reactive power as an arithmetic value, while others
			 * compute the value vectorially. The data consumer should determine the method in
			 * use and the suitability of the measurement for the intended purpose.
			 */
			VAr = 63,
			/**
			 * Volt second (Ws/A).
			 */
			Vs = 66,
			/**
			 * Ampere seconds (A·s).
			 */
			As = 68,
			/**
			 * Apparent energy in Volt Ampere hours.
			 */
			VAh = 71,
			/**
			 * Real energy in Watt hours.
			 */
			Wh = 72,
			/**
			 * Reactive energy in Volt Ampere reactive hours.
			 */
			VArh = 73,
			/**
			 * Ramp rate in Watt per second.
			 */
			WPers = 81,
			/**
			 * Time, hour = 60 min = 3600 s.
			 */
			h = 84,
			/**
			 * Time, minute  = 60 s.
			 */
			min = 85,
			/**
			 * Quantity power, Q.
			 */
			Q = 100,
			/**
			 * Quantity energy, Qh.
			 */
			Qh = 101,
			/**
			 * resistivity, Ohm metre, (rho).
			 */
			ohmm = 102,
			/**
			 * Ampere-hours, Ampere-hours.
			 */
			Ah = 106,
			/**
			 * Energy, British Thermal Unit.
			 */
			Btu = 132,
			/**
			 * Power factor, PF, the ratio of the active power to the apparent power. Note:
			 * The sign convention used for power factor will differ between IEC meters and
			 * EEI (ANSI) meters. It is assumed that the data consumers understand the type of
			 * meter being used and agree on the sign convention in use at any given utility.
			 */
			VPerVA = 153,
			/**
			 * Energy, Therm.
			 */
			therm = 169,
			/**
			 * Volt-hour, Volt hours.
			 */
			Vh = 280,
			/**
			 * Active power per current flow, watt per Ampere.
			 */
			WPerA,
			/**
			 * Reciprocal of frequency (1/Hz).
			 */
			onePerHz,
			/**
			 * Power factor, PF, the ratio of the active power to the apparent power. Note:
			 * The sign convention used for power factor will differ between IEC meters and
			 * EEI (ANSI) meters. It is assumed that the data consumers understand the type of
			 * meter being used and agree on the sign convention in use at any given utility.
			 */
			VPerVAr,
			/**
			 * Electric resistance per length in ohm per metre ((V/A)/m).
			 */
			ohmPerm
		};

	}

}
#endif // DERUNITSYMBOL_H
