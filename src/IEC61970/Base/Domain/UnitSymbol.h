///////////////////////////////////////////////////////////
//  UnitSymbol.h
//  Implementation of the Class UnitSymbol
///////////////////////////////////////////////////////////

#ifndef UNITSYMBOL_H
#define UNITSYMBOL_H

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * The units defined for usage in the CIM.
			 */
			enum class UnitSymbol
			{
				/**
				 * Dimension less quantity, e.g. count, per unit, etc.
				 */
				none = 0,
				/**
				 * Length in meter.
				 */
				m = 2,
				/**
				 * Mass in kilogram.  Note: multiplier “k” is included in this unit symbol for
				 * compatibility with IEC 61850-7-3.
				 */
				kg = 3,
				/**
				 * Time in seconds.
				 */
				s = 4,
				/**
				 * Current in Ampere.
				 */
				A = 5,
				/**
				 * Temperature in Kelvin.
				 */
				K = 6,
				/**
				 * Amount of substance in mole.
				 */
				mol = 7,
				/**
				 * Luminous intensity in candela.
				 */
				cd = 8,
				/**
				 * Plane angle in degrees.
				 */
				deg = 9,
				/**
				 * Plane angle in radian (m/m).
				 */
				rad = 10,
				/**
				 * Solid angle in steradian (m2/m2).
				 */
				sr = 11,
				/**
				 * Absorbed dose in Gray (J/kg).
				 */
				Gy = 21,
				/**
				 * Radioactivity in Becquerel (1/s).
				 */
				Bq = 22,
				/**
				 * Relative temperature in degrees Celsius.
				 * In the SI unit system the symbol is ºC. Electric charge is measured in coulomb
				 * that has the unit symbol C. To distinguish degree Celsius form coulomb the
				 * symbol used in the UML is degC. Reason for not using ºC is the special
				 * character º is difficult to manage in software.
				 */
				degC = 23,
				/**
				 * Dose equivalent in Sievert (J/kg).
				 */
				Sv = 24,
				/**
				 * Electric capacitance in Farad (C/V).
				 */
				F = 25,
				/**
				 * Electric charge in Coulomb (A·s).
				 */
				C = 26,
				/**
				 * Conductance in Siemens.
				 */
				S = 27,
				/**
				 * Electric inductance in Henry (Wb/A).
				 */
				H = 28,
				/**
				 * Electric potential in Volt (W/A).
				 */
				V = 29,
				/**
				 * Electric resistance in ohm (V/A).
				 */
				ohm = 30,
				/**
				 * Energy in joule (N·m = C·V = W·s).
				 */
				J = 31,
				/**
				 * Force in Newton (kg·m/s²).
				 */
				N = 32,
				/**
				 * Frequency in Hertz (1/s).
				 */
				Hz = 33,
				/**
				 * Illuminance in lux (lm/m²).
				 */
				lx = 34,
				/**
				 * Luminous flux in lumen (cd·sr).
				 */
				lm = 35,
				/**
				 * Magnetic flux in Weber (V·s).
				 */
				Wb = 36,
				/**
				 * Magnetic flux density in Tesla (Wb/m2).
				 */
				T = 37,
				/**
				 * Real power in Watt (J/s). Electrical power may have real and reactive
				 * components. The real portion of electrical power (I²R or VIcos(phi)), is
				 * expressed in Watts. (See also apparent power and reactive power.)
				 */
				W = 38,
				/**
				 * Pressure in Pascal (N/m²). Note: the absolute or relative measurement of
				 * pressure is implied with this entry. See below for more explicit forms.
				 */
				Pa = 39,
				/**
				 * Area in square metre (m²).
				 */
				m2 = 41,
				/**
				 * Volume in cubic metre (m³).
				 */
				m3 = 42,
				/**
				 * Velocity in metre per second (m/s).
				 */
				mPers = 43,
				/**
				 * Acceleration in metre per second squared (m/s²).
				 */
				mPers2 = 44,
				/**
				 * Volumetric flow rate in cubic metres per second (m³/s).
				 */
				m3Pers = 45,
				/**
				 * Fuel efficiency in metre per cubic metre (m/m³).
				 */
				mPerm3 = 46,
				/**
				 * Moment of mass in kilogram metre (kg·m) (first moment of mass). Note:
				 * multiplier “k” is included in this unit symbol for compatibility with IEC 61850-
				 * 7-3.
				 */
				kgm = 47,
				/**
				 * Density in kilogram/cubic metre (kg/m³). Note: multiplier “k” is included in
				 * this unit symbol for compatibility with IEC 61850-7-3.
				 */
				kgPerm3 = 48,
				/**
				 * Thermal conductivity in Watt/metre Kelvin.
				 */
				WPermK = 50,
				/**
				 * Heat capacity in Joule/Kelvin.
				 */
				JPerK = 51,
				/**
				 * Concentration in parts per million.
				 */
				ppm = 52,
				/**
				 * Rotations per second (1/s). See also Hz (1/s).
				 */
				rotPers = 53,
				/**
				 * Angular velocity in radians per second (rad/s).
				 */
				radPers = 54,
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
				 * Power factor, dimensionless.
				 * Note 1: This definition of power factor only holds for balanced systems. See
				 * the alternative definition under code 153.
				 * Note 2 : Beware of differing sign conventions in use between the IEC and EEI.
				 * It is assumed that the data consumer understands the type of meter in use and
				 * the sign convention in use by the utility.
				 */
				cosPhi = 65,
				/**
				 * Volt second (Ws/A).
				 */
				Vs = 66,
				/**
				 * Volt squared (W²/A²).
				 */
				V2 = 67,
				/**
				 * Ampere seconds (A·s).
				 */
				As = 68,
				/**
				 * Ampere squared (A²).
				 */
				A2 = 69,
				/**
				 * Ampere squared time in square ampere (A²s).
				 */
				A2s = 70,
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
				 * Magnetic flux in Volt per Hertz.
				 */
				VPerHz = 74,
				/**
				 * Rate of change of frequency in Hertz per second.
				 */
				HzPers = 75,
				/**
				 * Number of characters.
				 */
				character = 76,
				/**
				 * Data rate (baud) in characters per second.
				 */
				charPers = 77,
				/**
				 * Moment of mass in kilogram square metre (kg·m²) (Second moment of mass,
				 * commonly called the moment of inertia). Note: multiplier “k” is included in
				 * this unit symbol for compatibility with IEC 61850-7-3.
				 */
				kgm2 = 78,
				/**
				 * Sound pressure level in decibel. Note:  multiplier “d” is included in this unit
				 * symbol for compatibility with IEC 61850-7-3.
				 */
				dB = 79,
				/**
				 * Ramp rate in Watt per second.
				 */
				WPers = 81,
				/**
				 * Volumetric flow rate in litre per second.
				 */
				lPers = 82,
				/**
				 * Power level (logrithmic ratio of signal strength , Bel-mW), normalized to 1mW.
				 * Note:  multiplier “d” is included in this unit symbol for compatibility with
				 * IEC 61850-7-3.
				 */
				dBm = 83,
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
				 * A/m, magnetic field strength, Ampere per metre.
				 */
				APerm = 103,
				/**
				 * volt-squared hour, Volt-squared-hours.
				 */
				V2h = 104,
				/**
				 * ampere-squared hour, Ampere-squared hour.
				 */
				A2h = 105,
				/**
				 * Ampere-hours, Ampere-hours.
				 */
				Ah = 106,
				/**
				 * Amount of substance, Counter value.
				 */
				count = 111,
				/**
				 * Volume, cubic foot.
				 */
				ft3 = 119,
				/**
				 * Volumetric flow rate, cubic metre per hour.
				 */
				m3Perh = 125,
				/**
				 * Volume, US gallon (1 gal = 231 in3 = 128 fl ounce).
				 */
				gal = 128,
				/**
				 * Energy, British Thermal Unit.
				 */
				Btu = 132,
				/**
				 * Volume, litre = dm3 = m3/1000.
				 */
				l = 134,
				/**
				 * Volumetric flow rate, litre per hour.
				 */
				lPerh = 137,
				/**
				 * Concentration, The ratio of the volume of a solute divided by the volume of
				 * the solution. Note: Users may need use a prefix such a ‘µ’ to express a
				 * quantity such as ‘µL/L’.
				 */
				lPerl = 143,
				/**
				 * Concentration, The ratio of the mass of a solute divided by the mass of  the
				 * solution. Note: Users may need use a prefix such a ‘µ’ to express a quantity
				 * such as ‘µg/g’.
				 */
				gPerg = 144,
				/**
				 * Concentration, The amount of substance concentration, (c), the amount of
				 * solvent in moles divided by the volume of solution in m³.
				 */
				molPerm3 = 145,
				/**
				 * Concentration, Molar fraction (?), the ratio of the molar amount of a solute
				 * divided by the molar amount of the solution.
				 */
				molPermol = 146,
				/**
				 * Concentration, Molality, the amount of solute in moles and the amount of
				 * solvent in kilograms.
				 */
				molPerkg = 147,
				/**
				 * Time, Ratio of time Note: Users may need to supply a prefix such as ‘µ’ to show
				 * rates such as ‘µs/s’
				 */
				sPers = 149,
				/**
				 * Frequency, Rate of frequency change  Note: Users may need to supply a prefix
				 * such as ‘m’ to show rates such as ‘mHz/Hz’.
				 */
				HzPerHz = 150,
				/**
				 * Voltage, Ratio of voltages Note: Users may need to supply a prefix such as ‘m’
				 * to show rates such as ‘mV/V’.
				 */
				VPerV = 151,
				/**
				 * Current, Ratio of Amperages  Note: Users may need to supply a prefix such as
				 * ‘m’ to show rates such as ‘mA/A’.
				 */
				APerA = 152,
				/**
				 * Power factor, PF, the ratio of the active power to the apparent power. Note:
				 * The sign convention used for power factor will differ between IEC meters and
				 * EEI (ANSI) meters. It is assumed that the data consumers understand the type of
				 * meter being used and agree on the sign convention in use at any given utility.
				 */
				VPerVA = 153,
				/**
				 * Amount of rotation, Revolutions.
				 */
				rev = 154,
				/**
				 * Catalytic activity, katal = mol / s.
				 */
				kat = 158,
				/**
				 * Specific energy, Joule / kg.
				 */
				JPerkg = 165,
				/**
				 * Volume, cubic metre, with the value uncompensated for weather effects.
				 */
				m3Uncompensated = 166,
				/**
				 * Volume, cubic metre, with the value compensated for weather effects.
				 */
				m3Compensated = 167,
				/**
				 * Signal Strength, Ratio of power  Note: Users may need to supply a prefix such
				 * as ‘m’ to show rates such as ‘mW/W’.
				 */
				WPerW = 168,
				/**
				 * Energy, Therm.
				 */
				therm = 169,
				/**
				 * Wavenumber, reciprocal metre,  (1/m).
				 */
				onePerm = 173,
				/**
				 * Specific volume, cubic metre per kilogram, v.
				 */
				m3Perkg = 174,
				/**
				 * Dynamic viscosity, Pascal second.
				 */
				Pas = 175,
				/**
				 * Moment of force, Newton metre.
				 */
				Nm = 176,
				/**
				 * Surface tension, Newton per metre.
				 */
				NPerm = 177,
				/**
				 * Angular acceleration, radian per second squared.
				 */
				radPers2 = 178,
				/**
				 * Heat flux density, irradiance, Watt per square metre.
				 */
				WPerm2 = 55,
				/**
				 * Specific heat capacity, specific entropy, Joule per kilogram Kelvin.
				 */
				JPerkgK = 60,
				/**
				 * energy density, Joule per cubic metre.
				 */
				JPerm3 = 181,
				/**
				 * electric field strength, Volt per metre.
				 */
				VPerm = 182,
				/**
				 * electric charge density, Coulomb per cubic metre.
				 */
				CPerm3 = 183,
				/**
				 * surface charge density, Coulomb per square metre.
				 */
				CPerm2 = 184,
				/**
				 * permittivity, Farad per metre.
				 */
				FPerm = 185,
				/**
				 * permeability, Henry per metre.
				 */
				HPerm = 186,
				/**
				 * molar energy, Joule per mole.
				 */
				JPermol = 187,
				/**
				 * molar entropy, molar heat capacity, Joule per mole kelvin.
				 */
				JPermolK = 188,
				/**
				 * exposure (x rays), Coulomb per kilogram.
				 */
				CPerkg = 189,
				/**
				 * absorbed dose rate, Gray per second.
				 */
				GyPers = 190,
				/**
				 * Radiant intensity, Watt per steradian.
				 */
				WPersr = 191,
				/**
				 * radiance, Watt per square metre steradian.
				 */
				WPerm2sr = 192,
				/**
				 * catalytic activity concentration, katal per cubic metre.
				 */
				katPerm3 = 193,
				/**
				 * Time, day = 24 h = 86400 s.
				 */
				d = 195,
				/**
				 * Plane angle, minute.
				 */
				anglemin = 196,
				/**
				 * Plane angle, second.
				 */
				anglesec = 197,
				/**
				 * Area, hectare.
				 */
				ha = 198,
				/**
				 * mass, “tonne” or “metric  ton” (1000 kg = 1 Mg).
				 */
				tonne = 199,
				/**
				 * Pressure, bar (1 bar = 100 kPa).
				 */
				bar = 214,
				/**
				 * Pressure, millimeter of mercury (1 mmHg is approximately 133.3 Pa).
				 */
				mmHg = 215,
				/**
				 * Length, nautical mile (1 M = 1852 m).
				 */
				M = 217,
				/**
				 * Speed, knot (1 kn = 1852/3600) m/s.
				 */
				kn = 219,
				/**
				 * Volt-hour, Volt hours.
				 */
				Vh = 280,
				/**
				 * Magnetic flux, Maxwell (1 Mx = 10-8 Wb).
				 */
				Mx = 276,
				/**
				 * Magnetic flux density, Gauss (1 G = 10-4 T).
				 */
				G = 277,
				/**
				 * Magnetic field, Œrsted (1 Oe = (103/4p) A/m).
				 */
				Oe = 278,
				/**
				 * Active power per current flow, watt per Ampere.
				 */
				WPerA,
				/**
				 * Conductance per length (F/m).
				 */
				SPerm = 57,
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
				ohmPerm,
				/**
				 * Weigh per energy in kilogram/joule (kg/J). Note: multiplier “k” is included in
				 * this unit symbol for compatibility with IEC 61850-7-3.
				 */
				kgPerJ,
				/**
				 * Energy rate joule per second (J/s),
				 */
				JPers,
				/**
				 * Viscosity in metre square / second (m²/s).
				 */
				m2Pers = 49,
				/**
				 * Insulation energy density, Joule per square metre or watt second per square
				 * metre.
				 */
				JPerm2 = 56,
				/**
				 * Temperature change rate in Kelvin per second.
				 */
				KPers = 58,
				/**
				 * Pressure change rate in Pascal per second.
				 */
				PaPers = 59
			};

		}

	}

}
#endif // UNITSYMBOL_H
