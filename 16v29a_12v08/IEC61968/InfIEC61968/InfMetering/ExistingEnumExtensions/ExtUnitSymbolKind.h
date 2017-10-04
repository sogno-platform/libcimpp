///////////////////////////////////////////////////////////
//  ExtUnitSymbolKind.h
//  Implementation of the Class ExtUnitSymbolKind
///////////////////////////////////////////////////////////

#ifndef EXTUNITSYMBOLKIND_H
#define EXTUNITSYMBOLKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfMetering
		{
			namespace ExistingEnumExtensions
			{
				/**
				 * The units defiend for usage in the CIM.
				 */
				enum class ExtUnitSymbolKind
				{
					/**
					 * Apparent power, Volt Ampere (See also real power and reactive power.), VA
					 */
					VA = 61,
					/**
					 * Real power, Watt. By definition, one Watt equals oneJoule per second.
					 * Electrical power may have real and reactive components. The real portion of
					 * electrical power (I²R) or VIcos?, is expressed in Watts. (See also apparent
					 * power and reactive power.), W
					 */
					W = 38,
					/**
					 * Reactive power, Volt Ampere reactive. The “reactive” or “imaginary” component
					 * of electrical power (VISin?). (See also real power and apparent power)., VAr
					 */
					VAr = 63,
					/**
					 * Apparent energy, Volt Ampere hours, VAh
					 */
					VAh = 71,
					/**
					 * Real energy, Watt hours, Wh
					 */
					Wh = 72,
					/**
					 * Reactive energy, Volt Ampere reactive hours, VArh
					 */
					VArh = 73,
					/**
					 * Electric potential, Volt (W/A), V
					 */
					V = 29,
					/**
					 * Electric resistance, Ohm (V/A), O
					 */
					ohm = 30,
					/**
					 * Current, ampere, A
					 */
					A = 5,
					/**
					 * Electric capacitance, Farad (C/V), °C
					 */
					F = 25,
					/**
					 * Electric inductance, Henry (Wb/A), H
					 */
					H = 28,
					/**
					 * Relative temperature in degrees Celsius. In the SI unit system the symbol is ºC.
					 * Electric charge is measured in coulomb that has the unit symbol C. To
					 * destinguish degree Celsius form coulomb the symbol used in the UML is degC.
					 * Reason for not using ºC is the special character º is difficult to manage in
					 * software.
					 */
					degC = 23,
					/**
					 * Time,  seconds, s
					 */
					sec = 27,
					/**
					 * Time, minute  = s * 60, min
					 */
					min = 159,
					/**
					 * Time, hour = minute * 60, h
					 */
					h = 160,
					/**
					 * Plane angle, degrees, deg
					 */
					deg = 9,
					/**
					 * Plane angle, Radian (m/m), rad
					 */
					rad = 10,
					/**
					 * Energy joule, (N·m = C·V = W·s), J
					 */
					J = 31,
					/**
					 * Force newton, (kg m/s²), N
					 */
					n = 32,
					/**
					 * Electric conductance, Siemens (A / V = 1 / O), S
					 */
					siemens = 53,
					/**
					 * N/A, None
					 */
					none = 0,
					/**
					 * Frequency hertz, (1/s), Hz
					 */
					Hz = 33,
					/**
					 * Mass in gram, g
					 */
					g = 3,
					/**
					 * Pressure, Pascal (N/m²)
					 * (Note: the absolute or relative measurement of pressure is implied with this
					 * entry. See below for more explicit forms.), Pa
					 */
					pa = 39,
					/**
					 * Length, meter, m
					 */
					m = 2,
					/**
					 * Area, square meter, m²
					 */
					m2 = 41,
					/**
					 * Volume, cubic meter, m³
					 */
					m3 = 42,
					/**
					 * Amps squared,  amp squared, A2
					 */
					A2 = 69,
					/**
					 * ampere-squared, Ampere-squared hour, A²h
					 */
					A2h = 105,
					/**
					 * Amps squared time, square amp second, A²s
					 */
					A2s = 70,
					/**
					 * Ampere-hours, Ampere-hours, Ah
					 */
					Ah = 106,
					/**
					 * Current, Ratio of Amperages, A/A
					 */
					APerA = 152,
					/**
					 * A/m, magnetic field strength, Ampere per metre, A/m
					 */
					aPerM = 103,
					/**
					 * Amp seconds, amp seconds, As
					 */
					As = 68,
					/**
					 * Sound pressure level, Bel, acoustic, Combine with multiplier prefix “d” to form
					 * decibels of Sound Pressure Level
					 * “dB (SPL).”, B (SPL)
					 */
					b = 79,
					/**
					 * Signal Strength, Bel-mW, normalized to 1mW. Note: to form “dBm” combine “Bm”
					 * with multiplier “d”. Bm
					 */
					bm = 113,
					/**
					 * Radioactivity, Becquerel (1/s), Bq
					 */
					bq = 22,
					/**
					 * Energy, British Thermal Units, BTU
					 */
					btu = 132,
					/**
					 * Power, BTU per hour, BTU/h
					 */
					btuPerH = 133,
					/**
					 * Luminous intensity, candela, cd
					 */
					cd = 8,
					/**
					 * Number of characters, characters, char
					 */
					characters = 76,
					/**
					 * Rate of change of frequency, hertz per second, Hz/s
					 */
					HzPerSec = 75,
					/**
					 * Application Value, encoded value, code
					 */
					code = 114,
					/**
					 * Power factor, Dimensionless <img src="HTS_1.PNG" width="64" height="29"
					 * border="0" alt="graphic"/>, cos?
					 */
					cosTheta = 65,
					/**
					 * Amount of substance, counter value, count
					 */
					count = 111,
					/**
					 * Volume, cubic feet, ft³
					 */
					ft3 = 119,
					/**
					 * Volume, cubic feet, ft³(compensated)
					 */
					ft3compensated = 120,
					/**
					 * Volumetric flow rate, compensated cubic feet per hour, ft³(compensated)/h
					 */
					ft3compensatedPerH = 123,
					/**
					 * Turbine inertia, gram·meter2 (Combine with multiplier prefix “k” to form kg·m2.
					 * ), gm²
					 */
					gM2 = 78,
					/**
					 * Concentration, The ratio of the mass of a solute divided by the mass of the
					 * solution., g/g
					 */
					gPerG = 144,
					/**
					 * Absorbed dose, Gray (J/kg), GY
					 */
					gy = 21,
					/**
					 * Frequency, Rate of frequency change, Hz/Hz
					 */
					HzPerHz = 150,
					/**
					 * Data rate, characters per second, char/s
					 */
					charPerSec = 77,
					/**
					 * Volume, imperial gallons, ImperialGal
					 */
					imperialGal = 130,
					/**
					 * Volumetric flow rate, Imperial gallons per hour, ImperialGal/h
					 */
					imperialGalPerH = 131,
					/**
					 * Heat capacity, Joule/Kelvin, J/K
					 */
					jPerK = 51,
					/**
					 * Specific energy, Joules / kg, J/kg
					 */
					jPerKg = 165,
					/**
					 * Temperature, Kelvin, K
					 */
					K = 6,
					/**
					 * Catalytic activity, katal = mol / s, kat
					 */
					kat = 158,
					/**
					 * Moment of mass ,kilogram meter (kg·m), M
					 */
					kgM = 47,
					/**
					 * Density, gram/cubic meter (combine with prefix multiplier “k” to form kg/ m³),
					 * g/m³
					 */
					kgPerM3 = 48,
					/**
					 * Volume, litre = dm3 = m3/1000., L
					 */
					litre = 134,
					/**
					 * Volume, litre, with the value compensated for weather effects, L(compensated)
					 */
					litreCompensated = 157,
					/**
					 * Volumetric flow rate, litres (compensated) per hour, L(compensated)/h
					 */
					litreCompensatedPerH = 138,
					/**
					 * Volumetric flow rate, litres per hour, L/h
					 */
					litrePerH = 137,
					/**
					 * Concentration, The ratio of the volume of a solute divided by the volume of
					 * the solution., L/L
					 */
					litrePerLitre = 143,
					/**
					 * Volumetric flow rate, Volumetric flow rate, L/s
					 */
					litrePerSec = 82,
					/**
					 * Volume, litre, with the value uncompensated for weather effects.,
					 * L(uncompensated)
					 */
					litreUncompensated = 156,
					/**
					 * Volumetric flow rate, litres (uncompensated) per hour, L(uncompensated)/h
					 */
					litreUncompensatedPerH = 139,
					/**
					 * Luminous flux, lumen (cd sr), Lm
					 */
					lm = 35,
					/**
					 * Illuminance lux, (lm/m²), L(uncompensated)/h
					 */
					lx = 34,
					/**
					 * Viscosity, meter squared / second, m²/s
					 * m³/h
					 */
					m2PerSec = 49,
					/**
					 * Volume, cubic meter, with the value compensated for weather effects.,
					 * m3(compensated)
					 */
					m3compensated = 167,
					/**
					 * Volumetric flow rate, compensated cubic meters per hour, ³(compensated)/h
					 */
					m3compensatedPerH = 126,
					/**
					 * Volumetric flow rate, cubic meters per hour, m³/h
					 */
					m3PerH = 125,
					/**
					 * m3PerSec, cubic meters per second, m³/s
					 */
					m3PerSec = 45,
					/**
					 * m3uncompensated, cubic meter, with the value uncompensated for weather effects.,
					 * m3(uncompensated)
					 */
					m3uncompensated = 166,
					/**
					 * Volumetric flow rate, uncompensated cubic meters per hour, m³(uncompensated)/h
					 */
					m3uncompensatedPerH = 127,
					/**
					 * EndDeviceEvent, value to be interpreted as a EndDeviceEventCode, meCode
					 */
					meCode = 118,
					/**
					 * Amount of substance, mole, mol
					 */
					mol = 7,
					/**
					 * Concentration, Molality, the amount of solute in moles and the amount of
					 * solvent in kilograms., mol/kg
					 */
					molPerKg = 147,
					/**
					 * Concentration, The amount of substance concentration, (c), the amount of
					 * solvent in moles divided by the volume of solution in m³., mol/ m³
					 */
					molPerM3 = 145,
					/**
					 * Concentration, Molar fraction (?), the ratio of the molar amount of a solute
					 * divided by the molar amount of the solution.,mol/mol
					 */
					molPerMol = 146,
					/**
					 * Monetary unit, Generic money (Note: Specific monetary units are identified the
					 * currency class)., ¤
					 */
					money = 80,
					/**
					 * Length, Ratio of length, m/m
					 */
					mPerM = 148,
					/**
					 * Fuel efficiency, meters / cubic meter, m/m³
					 */
					mPerM3 = 46,
					/**
					 * Velocity, meters per second (m/s), m/s
					 */
					mPerSec = 43,
					/**
					 * Acceleration, meters per second squared, m/s²
					 */
					mPerSec2 = 44,
					/**
					 * resistivity, ? (rho), ?m
					 */
					ohmM = 102,
					/**
					 * Pressure, Pascal, absolute pressure, PaA
					 */
					paA = 155,
					/**
					 * Pressure, Pascal, gauge pressure, PaG
					 */
					paG = 140,
					/**
					 * Pressure, Pounds per square inch, absolute, psiA
					 */
					psiA = 141,
					/**
					 * Pressure, Pounds per square inch, gauge, psiG
					 */
					psiG = 142,
					/**
					 * Quantity power, Q, Q
					 */
					q = 100,
					/**
					 * Quantity power, Q measured at 45º, Q45
					 */
					q45 = 161,
					/**
					 * Quantity energy, Q measured at 45º, Q45h
					 */
					q45h = 163,
					/**
					 * Quantity power, Q measured at 60º, Q60
					 */
					q60 = 162,
					/**
					 * Quantity energy, Qh measured at 60º, Q60h
					 */
					q60h = 164,
					/**
					 * Quantity energy, Qh, Qh
					 */
					qh = 101,
					/**
					 * Angular velocity, radians per second, rad/s
					 */
					radPerSec = 54,
					/**
					 * Amount of rotation, Revolutions, rev
					 */
					rev = 154,
					/**
					 * Rotational speed, Rotations per second, rev/s
					 */
					revPerSec = 4,
					/**
					 * Time, Ratio of time (can be combined with an multiplier prefix to show rates
					 * such as a clock drift rate, e.g. “µs/s”), s/s
					 */
					secPerSec = 149,
					/**
					 * Solid angle, Steradian (m2/m2), sr
					 */
					sr = 11,
					/**
					 * State, "1" = "true", "live", "on", "high", "set";
					 * "0" = "false", "dead", "off", "low", "cleared"
					 * Note: A Boolean value is preferred but other values may be supported, status
					 */
					status = 109,
					/**
					 * Doe equivalent, Sievert (J/kg), Sv
					 */
					sv = 24,
					/**
					 * Magnetic flux density, Tesla (Wb/m2), T
					 */
					t = 37,
					/**
					 * Energy, Therm, therm
					 */
					therm = 169,
					/**
					 * Timestamp, time and date per ISO 8601 format, timeStamp
					 */
					timeStamp = 108,
					/**
					 * Volume, US gallons, <u>Gal</u>
					 */
					usGal = 128,
					/**
					 * Volumetric flow rate, US gallons per hour, USGal/h
					 */
					usGalPerH = 129,
					/**
					 * Volts squared, Volt squared (W2/A2), V²
					 */
					V2 = 67,
					/**
					 * volt-squared hour, Volt-squared-hours, V²h
					 */
					V2h = 104,
					/**
					 * Kh-Vah, apparent energy metering constant, VAh/rev
					 */
					VAhPerRev = 117,
					/**
					 * Kh-VArh, reactive energy metering constant, VArh/rev
					 */
					VArhPerRev = 116,
					/**
					 * Magnetic flux, Volts per Hertz, V/Hz
					 */
					VPerHz = 74,
					/**
					 * Voltage, Ratio of voltages (e.g. mV/V), V/V
					 */
					VPerV = 151,
					/**
					 * Volt seconds, Volt seconds (Ws/A), Vs
					 */
					Vs = 66,
					/**
					 * Magnetic flux, Weber (V s)<b>, Wb</b>
					 */
					wb = 36,
					/**
					 * Wh/m3, energy per volume, Wh/m³
					 */
					WhPerM3 = 107,
					/**
					 * Kh-Wh, active energy metering constant, Wh/rev
					 */
					WhPerRev = 115,
					/**
					 * Thermal conductivity, Watt/meter Kelvin, W/m K
					 */
					wPerMK = 50,
					/**
					 * Ramp rate, Watts per second, W/s
					 */
					WPerSec = 81,
					/**
					 * Power Factor, PF, W/VA
					 */
					WPerVA = 153,
					/**
					 * Signal Strength, Ratio of power, W/W
					 */
					WPerW = 168
				};

			}

		}

	}

}
#endif // EXTUNITSYMBOLKIND_H
