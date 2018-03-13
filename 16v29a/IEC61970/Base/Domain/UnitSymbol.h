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
				 * Apparent power in volt ampere.
				 */
				 _undef = -1, 	VA,
				/**
				 * Active power in watt.
				 */
				W,
				/**
				 * Reactive power in volt ampere reactive.
				 */
				VAr,
				/**
				 * Apparent energy in volt ampere hours.
				 */
				VAh,
				/**
				 * Real energy in what hours.
				 */
				Wh,
				/**
				 * Reactive energy in volt ampere reactive hours.
				 */
				VArh,
				/**
				 * Voltage in volt.
				 */
				V,
				/**
				 * Resistance in ohm.
				 */
				ohm,
				/**
				 * Current in ampere.
				 */
				A,
				/**
				 * Capacitance in farad.
				 */
				F,
				/**
				 * Inductance in henry.
				 */
				H,
				/**
				 * Relative temperature in degrees Celsius. In the SI unit system the symbol is ºC.
				 * Electric charge is measured in coulomb that has the unit symbol C. To
				 * distinguish degree Celsius form coulomb the symbol used in the UML is degC.
				 * Reason for not using ºC is the special character º is difficult to manage in
				 * software.
				 */
				degC,
				/**
				 * Time in seconds.
				 */
				s,
				/**
				 * Time in minutes.
				 */
				min,
				/**
				 * Time in hours.
				 */
				h,
				/**
				 * Plane angle in degrees.
				 */
				deg,
				/**
				 * Plane angle in radians.
				 */
				rad,
				/**
				 * Energy in joule.
				 */
				J,
				/**
				 * Force in newton.
				 */
				N,
				/**
				 * Conductance in siemens.
				 */
				S,
				/**
				 * Dimension less quantity, e.g. count, per unit, etc.
				 */
				none,
				/**
				 * Frequency in hertz.
				 */
				Hz,
				/**
				 * Mass in gram.
				 */
				g,
				/**
				 * Pressure in pascal (n/m2).
				 */
				Pa,
				/**
				 * Length in meter.
				 */
				m,
				/**
				 * Area in square meters.
				 */
				m2,
				/**
				 * Volume in cubic meters.
				 */
				m3
			};

		}

	}

}
#endif // UNITSYMBOL_H
