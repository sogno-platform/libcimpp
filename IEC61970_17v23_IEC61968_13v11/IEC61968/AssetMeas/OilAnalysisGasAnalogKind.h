///////////////////////////////////////////////////////////
//  OilAnalysisGasAnalogKind.h
//  Implementation of the Class OilAnalysisGasAnalogKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISGASANALOGKIND_H
#define OILANALYSISGASANALOGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Analogs representing oil dissolved gas analysis result.
		 */
		enum class OilAnalysisGasAnalogKind
		{
			/**
			 * H2 concentration (in ppm, specifically in microlitre/litre).
			 */
			 _undef = -1, 	hydrogen,
			/**
			 * CH4 concentration (in ppm, specifically in microlitre/litre).
			 */
			methane,
			/**
			 * C2H6 concentration (in ppm, specifically in microlitre/litre).
			 */
			ethane,
			/**
			 * C2H4 concentration (in ppm, specifically in microlitre/litre).
			 */
			ethylene,
			/**
			 * C2H2 concentration (in ppm, specifically in microlitre/litre).
			 */
			acetylene,
			/**
			 * CO concentration (in ppm, specifically in microlitre/litre).
			 */
			carbonMonoxide,
			/**
			 * C3H8 concentration (in ppm, specifically in microlitre/litre).
			 */
			propane,
			/**
			 * C3H6 concentration (in ppm, specifically in microlitre/litre). 
			 */
			propene,
			/**
			 * CO2 concentration (in ppm, specifically in microlitre/litre).
			 */
			carbonDioxide,
			/**
			 * O2 concentration (in ppm, specifically in microlitre/litre).
			 */
			oxygen,
			/**
			 * N2 concentration (in ppm, specifically in microlitre/litre).
			 */
			nitrogen,
			/**
			 * Total dissolved gas in oil (in percent by volume). Derived from the total area
			 * of all the gas peaks in the chromatogram.
			 */
			totalDissolvedGasPercent,
			/**
			 * Total Combustible Gas (TCG) measured in headspace (in percent by volume).
			 */
			totalCombustibleGasPercent,
			/**
			 * C4H10 concentration (in ppm, specifically in microlitre/litre).
			 */
			butane,
			/**
			 * C? concentration (in ppm, specifically in microlitre/litre).
			 */
			carbon,
			/**
			 * C3 concentration (in ppm, specifically in microlitre/litre).
			 */
			carbon3,
			/**
			 * C4 concentration (in ppm, specifically in microlitre/litre).
			 */
			carbon4,
			/**
			 * isoC4 (C4H10) concentration (in ppm, specifically in microlitre/litre).
			 * Isobutane is also known as methylpropane.
			 */
			isobutane,
			/**
			 * Equivalent Total Combustible Gas (ETCG) percent.
			 * An estimate, calculated from the dissolved-gas concentrations and the oil
			 * sample temperature, of what the TCG would be in a gas space in equilibrium with
			 * the oil. ETCG reflects what the TCG would be in air spaces near the oil.
			 */
			equivalentTCGPercent,
			/**
			 * Sum of concentrations of methane, ethane, and ethylene (in ppm, specifically in
			 * microlitre/litre). Used in some diagnostic gas ratios, especially THG/acetylene,
			 * which compares “heat gas” to “arcing gas.”
			 */
			totalHeatGas,
			/**
			 * Total dissolved combustible gas concentration (in ppm, specifically in
			 * microlitre/litre). Calculated by adding the ppm of combustible gasses: hydrogen
			 * (H2), methane (CH4), ethane (C2H6), ethylene (C2H4), acetylene (C2H2), and
			 * carbon monoxide (CO).
			 */
			totalDissolvedCombustibleGas,
			/**
			 * Total partial pressure (in Pa).
			 * Calculated value reflecting total of partial pressures of all combustible
			 * gasses.
			 */
			totalPartialPressure,
			/**
			 * Estimated Safe Handling Limit (ESHL) (in percent). Estimated safe handling
			 * limit is an estimate of the lower flammability limit (LFL) of the combustible
			 * gas mixture which the dissolved gas in the oil would give off by the oil if
			 * exposed to air.
			 * Expressed in percent like the equivalent total combustible gas percent, it is
			 * calculated from the dissolved-gas concentrations, the oil sample temperature,
			 * and the lower flammability limits of the individual combustible gases. 
			 */
			estimatedSafeHandlingLimit,
			/**
			 * Measured composite of dissolved fault gas concentrations (in ppm, specifically
			 * in microlitre/litre). Relative sensitivity
			 * - H2: 100 % of concentration
			 * - CO: 15 ± 4 % of concentration
			 * - C2H2: 8 ± 2 % of concentration
			 * - C2H4: 1.5 ± 0.5 % of concentration.
			 */
			hydran,
			/**
			 * Predicted hydran value (in ppm, specifically in microlitre/litre), calculated
			 * based on individual measured dissolved gas concentrations.
			 * - H2: 100 % of concentration
			 * - CO: 15 ± 4 % of concentration
			 * - C2H2: 8 ± 2 % of concentration
			 * - C2H4: 1.5 ± 0.5 % of concentration
			 */
			hydranPredicted
		};

	}

}
#endif // OILANALYSISGASANALOGKIND_H
