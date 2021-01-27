///////////////////////////////////////////////////////////
//  OilAnalysisPaperAnalogKind.h
//  Implementation of the Class OilAnalysisPaperAnalogKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPAPERANALOGKIND_H
#define OILANALYSISPAPERANALOGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Analogs representing oil paper degradation analysis result.
		 */
		enum class OilAnalysisPaperAnalogKind
		{
			/**
			 * 5-hydroxymethyl-2-furaldehyde (5H2F) (in ppb). Also known as: 5-hydroxymethyl-2-
			 * furfural, 5-hydroxymethyl-2-furaldehyde, 5-hydroxymethylfurfuraldehyde, and 5-
			 * hydroxymethylfurfural.
			 */
			 _undef = -1, 	hydroxymethylfurfural,
			/**
			 * Furfuryl alcohol (2FOL) (in ppb). Also known as: 2-furyl alcohol, 2-furfurol, 2-
			 * furylmethanol, 2-hydroxymethylfuran, 2-furancarbinol, furancarbinol, 2-
			 * furanmethanol, furanmethanol, furfural alcohol, and alpha-furylcarbinol.
			 */
			furfurylAlcohol,
			/**
			 * 2-furaldehyde (2FAL) (in ppb). Also known as: 2-furfural, 2-furaldehyde, 2-
			 * furanaldehyde, fural, furfuraldehyde, furaldehyde, and 2-furancarboxaldehyde.
			 */
			furfural,
			/**
			 * 5-methyl-2-furaldehyde (5M2F) (in ppb). Also known as: 5-methyl-2-furfural, 5-
			 * methyl-2-furaldehyde, 5-methyl-2-furfuraldehyde, and 5-methylfurfural.
			 */
			methylfurfural,
			/**
			 * Total furan (in ppb). Is the total of the concentrations of 5-hydroxymethyl-2-
			 * furaldehyde (5H2F), furfuryl alcohol (2FOL), 2-furaldehyde (2FAL), 2-
			 * acetylfuran (2ACF), 5-methyl-2-furaldehyde (5M2F).
			 */
			totalFuran,
			/**
			 * Direct measurement of degree of polymerization (DP) (unitless).
			 */
			degreeOfPolymerization,
			/**
			 * Calculated degree of polymerization (DP) calculated using the Chendong equation
			 * (unitless).
			 */
			degreeOfPolymerizationCalculated,
			/**
			 * Concentration of methanol (in ppb, specifically microgram/kilogram).
			 */
			methanol,
			/**
			 * Concentration of ethanol (in ppb, specifically microgram/kilogram).
			 */
			ethanol,
			/**
			 * Tensile strength (in kilonewtons/metre).
			 */
			tensileStrength,
			/**
			 * Dielectric breakdown of solid electrical insulating materials (in kV).
			 */
			solidInsulationDielectricStrength,
			/**
			 * 2-acetylfuran (2ACF) (in ppb). Also known as: 2-acetylfuran, furyl methyl
			 * ketone, 2-furyl methyl ketone, methyl 2-furyl ketone, and 1-(2-furanyl)ethanone.
			 */
			acetylfuran
		};

	}

}
#endif // OILANALYSISPAPERANALOGKIND_H
