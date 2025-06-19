#ifndef UnitSymbol_H
#define UnitSymbol_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief The derived units defined for usage in the CIM. In some cases, the derived unit is equal to an SI unit. Whenever possible, the standard derived symbol is used instead of the formula for the derived unit. For example, the unit symbol Farad is defined as "F" instead of "CPerV". In cases where a standard symbol does not exist for a derived unit, the formula for the unit is used as the unit symbol. For example, density does not have a standard symbol and so it is represented as "kgPerm3". With the exception of the "kg", which is an SI unit, the unit symbols do not contain multipliers and therefore represent the base derived unit to which a multiplier can be applied as a whole.  Every unit symbol is treated as an unparseable text as if it were a single-letter symbol. The meaning of each unit symbol is defined by the accompanying descriptive text and not by the text contents of the unit symbol. To allow the widest possible range of serializations without requiring special character handling, several substitutions are made which deviate from the format described in IEC 80000-1. The division symbol "/" is replaced by the letters "Per". Exponents are written in plain text after the unit as "m3" instead of being formatted as "m" with a superscript of 3  or introducing a symbol as in "m^3". The degree symbol "[SYMBOL REMOVED]" is replaced with the letters "deg". Any clarification of the meaning for a substitution is included in the description for the unit symbol. Non-SI units are included in list of unit symbols to allow sources of data to be correctly labelled with their non-SI units (for example, a GPS sensor that is reporting numbers that represent feet instead of meters). This allows software to use the unit symbol information correctly convert and scale the raw data of those sources into SI-based units.  The integer values are used for harmonization with IEC 61850. */
	class UnitSymbol
	{
	public:
		enum UnitSymbol_ENUM
		{
			/** Dimension less quantity, e.g. count, per unit, etc. */
			none,
			/** Length in metres. */
			m,
			/** Mass in kilograms.  Note: multiplier &quot;k&quot; is included in this unit symbol for compatibility with IEC 61850-7-3. */
			kg,
			/** Time in seconds. */
			s,
			/** Current in amperes. */
			A,
			/** Temperature in kelvins. */
			K,
			/** Amount of substance in moles. */
			mol,
			/** Luminous intensity in candelas. */
			cd,
			/** Plane angle in degrees. */
			deg,
			/** Plane angle in radians (m/m). */
			rad,
			/** Solid angle in steradians (m2/m2). */
			sr,
			/** Absorbed dose in grays (J/kg). */
			Gy,
			/** Radioactivity in becquerels (1/s). */
			Bq,
			/** Relative temperature in degrees Celsius. In the SI unit system the symbol is [SYMBOL REMOVED]C. Electric charge is measured in coulomb that has the unit symbol C. To distinguish degree Celsius from coulomb the symbol used in the UML is degC. The reason for not using [SYMBOL REMOVED]C is that the special character [SYMBOL REMOVED] is difficult to manage in software. */
			degC,
			/** Dose equivalent in sieverts (J/kg). */
			Sv,
			/** Electric capacitance in farads (C/V). */
			F,
			/** Electric charge in coulombs (A·s). */
			C,
			/** Conductance in siemens. */
			S,
			/** Electric inductance in henrys (Wb/A). */
			H,
			/** Electric potential in volts (W/A). */
			V,
			/** Electric resistance in ohms (V/A). */
			ohm,
			/** Energy in joules (N·m = C·V = W·s). */
			J,
			/** Force in newtons (kg·m/s²). */
			N,
			/** Frequency in hertz (1/s). */
			Hz,
			/** Illuminance in lux (lm/m²). */
			lx,
			/** Luminous flux in lumens (cd·sr). */
			lm,
			/** Magnetic flux in webers (V·s). */
			Wb,
			/** Magnetic flux density in teslas (Wb/m2). */
			T,
			/** Real power in watts (J/s). Electrical power may have real and reactive components. The real portion of electrical power (I&amp;#178;R or VIcos(phi)), is expressed in Watts. See also apparent power and reactive power. */
			W,
			/** Pressure in pascals (N/m²). Note: the absolute or relative measurement of pressure is implied with this entry. See below for more explicit forms. */
			Pa,
			/** Area in square metres (m²). */
			m2,
			/** Volume in cubic metres (m³). */
			m3,
			/** Velocity in metres per second (m/s). */
			mPers,
			/** Acceleration in metres per second squared (m/s²). */
			mPers2,
			/** Volumetric flow rate in cubic metres per second (m³/s). */
			m3Pers,
			/** Fuel efficiency in metres per cubic metres (m/m³). */
			mPerm3,
			/** Moment of mass in kilogram metres (kg·m) (first moment of mass). Note: multiplier &quot;k&quot; is included in this unit symbol for compatibility with IEC 61850-7-3. */
			kgm,
			/** Density in kilogram/cubic metres (kg/m³). Note: multiplier &quot;k&quot; is included in this unit symbol for compatibility with IEC 61850-7-3. */
			kgPerm3,
			/** Viscosity in square metres / second (m²/s). */
			m2Pers,
			/** Thermal conductivity in watt/metres kelvin. */
			WPermK,
			/** Heat capacity in joules/kelvin. */
			JPerK,
			/** Concentration in parts per million. */
			ppm,
			/** Rotations per second (1/s). See also Hz (1/s). */
			rotPers,
			/** Angular velocity in radians per second (rad/s). */
			radPers,
			/** Heat flux density, irradiance, watts per square metre. */
			WPerm2,
			/** Insulation energy density, joules per square metre or watt second per square metre. */
			JPerm2,
			/** Conductance per length (F/m). */
			SPerm,
			/** Temperature change rate in kelvins per second. */
			KPers,
			/** Pressure change rate in pascals per second. */
			PaPers,
			/** Specific heat capacity, specific entropy, joules per kilogram Kelvin. */
			JPerkgK,
			/** Apparent power in volt amperes. See also real power and reactive power. */
			VA,
			/** Reactive power in volt amperes reactive. The &quot;reactive&quot; or &quot;imaginary&quot; component of electrical power (VIsin(phi)). (See also real power and apparent power). Note: Different meter designs use different methods to arrive at their results. Some meters may compute reactive power as an arithmetic value, while others compute the value vectorially. The data consumer should determine the method in use and the suitability of the measurement for the intended purpose. */
			VAr,
			/** Power factor, dimensionless. Note 1: This definition of power factor only holds for balanced systems. See the alternative definition under code 153. Note 2 : Beware of differing sign conventions in use between the IEC and EEI. It is assumed that the data consumer understands the type of meter in use and the sign convention in use by the utility. */
			cosPhi,
			/** Volt seconds (Ws/A). */
			Vs,
			/** Volt squared (W²/A²). */
			V2,
			/** Ampere seconds (A·s). */
			As,
			/** Amperes squared (A²). */
			A2,
			/** Ampere squared time in square amperes (A²s). */
			A2s,
			/** Apparent energy in volt ampere hours. */
			VAh,
			/** Real energy in watt hours. */
			Wh,
			/** Reactive energy in volt ampere reactive hours. */
			VArh,
			/** Magnetic flux in volt per hertz. */
			VPerHz,
			/** Rate of change of frequency in hertz per second. */
			HzPers,
			/** Number of characters. */
			character,
			/** Data rate (baud) in characters per second. */
			charPers,
			/** Moment of mass in kilogram square metres (kg·m²) (Second moment of mass, commonly called the moment of inertia). Note: multiplier &quot;k&quot; is included in this unit symbol for compatibility with IEC 61850-7-3. */
			kgm2,
			/** Sound pressure level in decibels. Note:  multiplier &quot;d&quot; is included in this unit symbol for compatibility with IEC 61850-7-3. */
			dB,
			/** Ramp rate in watts per second. */
			WPers,
			/** Volumetric flow rate in litres per second. */
			lPers,
			/** Power level (logarithmic ratio of signal strength , Bel-mW), normalized to 1mW. Note:  multiplier &quot;d&quot; is included in this unit symbol for compatibility with IEC 61850-7-3. */
			dBm,
			/** Time in hours, hour = 60 min = 3600 s. */
			h,
			/** Time in minutes, minute  = 60 s. */
			min,
			/** Quantity power, Q. */
			Q,
			/** Quantity energy, Qh. */
			Qh,
			/** Resistivity, ohm metres, (rho). */
			ohmm,
			/** A/m, magnetic field strength, amperes per metre. */
			APerm,
			/** Volt-squared hour, volt-squared-hours. */
			V2h,
			/** Ampere-squared hour, ampere-squared hour. */
			A2h,
			/** Ampere-hours, ampere-hours. */
			Ah,
			/** Amount of substance, Counter value. */
			count,
			/** Volume, cubic feet. */
			ft3,
			/** Volumetric flow rate, cubic metres per hour. */
			m3Perh,
			/** Volume in gallons, US gallon (1 gal = 231 in3 = 128 fl ounce). */
			gal,
			/** Energy, British Thermal Units. */
			Btu,
			/** Volume in litres, litre = dm3 = m3/1000. */
			l,
			/** Volumetric flow rate, litres per hour. */
			lPerh,
			/** Concentration, The ratio of the volume of a solute divided by the volume of  the solution. Note: Users may need use a prefix such a ‘µ' to express a quantity such as ‘µL/L'. */
			lPerl,
			/** Concentration, The ratio of the mass of a solute divided by the mass of  the solution. Note: Users may need use a prefix such a ‘µ' to express a quantity such as ‘µg/g'. */
			gPerg,
			/** Concentration, The amount of substance concentration, (c), the amount of solvent in moles divided by the volume of solution in m³. */
			molPerm3,
			/** Concentration, Molar fraction, the ratio of the molar amount of a solute divided by the molar amount of the solution. */
			molPermol,
			/** Concentration, Molality, the amount of solute in moles and the amount of solvent in kilograms. */
			molPerkg,
			/** Time, Ratio of time.  Note: Users may need to supply a prefix such as ‘&amp;#181;' to show rates such as ‘&amp;#181;s/s'. */
			sPers,
			/** Frequency, rate of frequency change.   Note: Users may need to supply a prefix such as ‘m' to show rates such as ‘mHz/Hz'. */
			HzPerHz,
			/** Voltage, ratio of voltages.  Note: Users may need to supply a prefix such as ‘m' to show rates such as ‘mV/V'. */
			VPerV,
			/** Current, ratio of amperages.   Note: Users may need to supply a prefix such as ‘m' to show rates such as ‘mA/A'. */
			APerA,
			/** Power factor, PF, the ratio of the active power to the apparent power.  Note: The sign convention used for power factor will differ between IEC meters and EEI (ANSI) meters. It is assumed that the data consumers understand the type of meter being used and agree on the sign convention in use at any given utility. */
			VPerVA,
			/** Amount of rotation, revolutions. */
			rev,
			/** Catalytic activity, katal = mol / s. */
			kat,
			/** Specific energy, Joules / kg. */
			JPerkg,
			/** Volume, cubic metres, with the value uncompensated for weather effects. */
			m3Uncompensated,
			/** Volume, cubic metres, with the value compensated for weather effects. */
			m3Compensated,
			/** Signal Strength, ratio of power.   Note: Users may need to supply a prefix such as ‘m' to show rates such as ‘mW/W'. */
			WPerW,
			/** Energy, therms. */
			therm,
			/** Wavenumber, reciprocal metres,  (1/m). */
			onePerm,
			/** Specific volume, cubic metres per kilogram, v. */
			m3Perkg,
			/** Dynamic viscosity, pascal seconds. */
			Pas,
			/** Moment of force, newton metres. */
			Nm,
			/** Surface tension, newton per metre. */
			NPerm,
			/** Angular acceleration, radians per second squared. */
			radPers2,
			/** Energy density, joules per cubic metre. */
			JPerm3,
			/** Electric field strength, volts per metre. */
			VPerm,
			/** Electric charge density, coulombs per cubic metre. */
			CPerm3,
			/** Surface charge density, coulombs per square metre. */
			CPerm2,
			/** Permittivity, farads per metre. */
			FPerm,
			/** Permeability, henrys per metre. */
			HPerm,
			/** Molar energy, joules per mole. */
			JPermol,
			/** Molar entropy, molar heat capacity, joules per mole kelvin. */
			JPermolK,
			/** Exposure (x rays), coulombs per kilogram. */
			CPerkg,
			/** Absorbed dose rate, grays per second. */
			GyPers,
			/** Radiant intensity, watts per steradian. */
			WPersr,
			/** Radiance, watts per square metre steradian. */
			WPerm2sr,
			/** Catalytic activity concentration, katals per cubic metre. */
			katPerm3,
			/** Time in days, day = 24 h = 86400 s. */
			d,
			/** Plane angle, minutes. */
			anglemin,
			/** Plane angle, seconds. */
			anglesec,
			/** Area, hectares. */
			ha,
			/** Mass in tons, &quot;tonne&quot; or &quot;metric  ton&quot; (1000 kg = 1 Mg). */
			tonne,
			/** Pressure in bars, (1 bar = 100 kPa). */
			bar,
			/** Pressure, millimetres of mercury (1 mmHg is approximately 133.3 Pa). */
			mmHg,
			/** Length, nautical miles (1 M = 1852 m). */
			M,
			/** Speed, knots (1 kn = 1852/3600) m/s. */
			kn,
			/** Magnetic flux, maxwells (1 Mx = 10-8 Wb). */
			Mx,
			/** Magnetic flux density, gausses (1 G = 10-4 T). */
			G,
			/** Magnetic field in oersteds, (1 Oe = (103/4p) A/m). */
			Oe,
			/** Volt-hour, Volt hours. */
			Vh,
			/** Active power per current flow, watts per Ampere. */
			WPerA,
			/** Reciprocal of frequency (1/Hz). */
			onePerHz,
			/** Power factor, PF, the ratio of the active power to the apparent power. Note: The sign convention used for power factor will differ between IEC meters and EEI (ANSI) meters. It is assumed that the data consumers understand the type of meter being used and agree on the sign convention in use at any given utility. */
			VPerVAr,
			/** Electric resistance per length in ohms per metre ((V/A)/m). */
			ohmPerm,
			/** Weight per energy in kilograms per joule (kg/J). Note: multiplier &quot;k&quot; is included in this unit symbol for compatibility with IEC 61850-7-3. */
			kgPerJ,
			/** Energy rate in joules per second (J/s). */
			JPers,
		};

		UnitSymbol() : value(), initialized(false) {}
		UnitSymbol(UnitSymbol_ENUM value) : value(value), initialized(true) {}

		UnitSymbol& operator=(UnitSymbol_ENUM rop);
		operator UnitSymbol_ENUM() const;

		UnitSymbol_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, UnitSymbol& rop);
		friend std::ostream& operator<<(std::ostream& os, const UnitSymbol& obj);
	};
}
#endif
