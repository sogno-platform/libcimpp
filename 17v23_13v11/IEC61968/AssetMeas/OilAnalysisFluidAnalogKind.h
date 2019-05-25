///////////////////////////////////////////////////////////
//  OilAnalysisFluidAnalogKind.h
//  Implementation of the Class OilAnalysisFluidAnalogKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISFLUIDANALOGKIND_H
#define OILANALYSISFLUIDANALOGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Analogs representing oil fluid test analysis result.
		 */
		enum class OilAnalysisFluidAnalogKind
		{
			/**
			 * Acid neutralization number (in milligram of KOH/gram).
			 */
			 _undef = -1, 	acidNumber,
			/**
			 * Interfacial tension (in dyne/centimetre or milliNewton/metre, which are the
			 * same).
			 */
			interfacialTension,
			/**
			 * Dielectric breakdown, for electrode gap size and temperature specified by
			 * selected standard  (in kV).
			 */
			dielectricBreakdown,
			/**
			 * Fluid power factor at specified temperature (in percent). Commonly used in US.
			 * (Note: Fluid power factor is very similar to fluid dissapation factor, but
			 * fluid power factor is cosine of the phase angle between an AC voltage applied
			 * to oil and the resulting current (where dissipation factor is the tangent). For
			 * values up to 0.005, fluid power factor and dissapation factor are very close.
			 * There is a conversion equation between the two). 
			 */
			powerFactorPercent,
			/**
			 * Fluid dissipation factor in absolute value, not a percentage. (Multiplying this
			 * value by 100 would result in dissipation factor percent).
			 */
			dissipationFactor,
			/**
			 * Fluid dissipation factor (in percent). Commonly used in Asia. Dissipation
			 * factor is also known as loss factor or tan delta.
			 */
			dissipationFactorPercent,
			/**
			 * 2,6-ditertiary-butyl phenol (DBP) oxidation inhibitor concentration (in percent
			 * by weight).
			 */
			oxidationInhibitorDBP,
			/**
			 * 2,6-ditertiarybutyl para-cresol (DBPC) oxidation inhibitor concentration (in
			 * percent by weight).
			 */
			oxidationInhibitorDBPC,
			/**
			 * 2,6-ditertiary-butyl para-cresol and 2,6-ditertiary-butyl phenol concentration
			 * (in percent by weight).
			 */
			oxidationInhibitorD2668,
			/**
			 * Dibenzyl disulfide (DBDS) concentration (in ppm, specificially in
			 * milligram/kilogram).
			 */
			additiveDBDS,
			/**
			 * Specific gravity corrected to 15°C. Also known as relative density. It is a
			 * ratio of density of tested oil to density of water at a specific temperature.
			 */
			specificGravity,
			/**
			 * Density (in gram/millilitre).
			 */
			density,
			/**
			 * Fire point (in °C). Fire point is when fire is sustained (oil catches fire).
			 * Can only be done by means of open cup test, which is commonly used in US.
			 */
			firePoint,
			/**
			 * Flash point (in °C) determined via open cup test. Flash point occurs when
			 * enough vapors have accumulated to sustain a flash. Open cup is used in US.
			 */
			flashPointOpenCup,
			/**
			 * Flash point (in °C) determined via closed cup test. Flash point occurs when
			 * enough vapors have accumulated to sustain a flash. Closed cup is used in Europe.
			 */
			flashPointClosedCup,
			/**
			 * Pour point (in °C). The pour point of a liquid is the temperature at which it
			 * becomes semi solid and loses its flow characteristics.
			 */
			pourPoint,
			/**
			 * Pour point (in °C) determined by automatic method. The pour point of a liquid
			 * is the temperature at which it becomes semi solid and loses its flow
			 * characteristics.
			 */
			pourPointAutomatic,
			/**
			 * Kinematic viscosity (in millimetre2/second). Kinematic viscosity is the ratio
			 * of - absolute (or dynamic) viscosity to density. 
			 */
			kinematicViscosity,
			/**
			 * Static electrification tendency (in microcoulombs per metre3). Also called
			 * static charging tendency and electrostatic charging tendency (ECT).
			 */
			staticElectrification,
			/**
			 * Resistivity at 90°C (in gigohm-metre).
			 */
			resistivity,
			/**
			 * Total passivator content (in milligram/kilogram).
			 */
			passivatorContent,
			/**
			 * Irgamet 39 metal passivator content (in ppm, specifically milligram/kilogram).
			 */
			passivatorIrgamet39,
			/**
			 * Metal passivator TTA (Irgamet39 in solid form) content (in milligram/kilogram).
			 */
			passivatorTTA,
			/**
			 * Metal passivator BTA content (in milligram/kilogram).
			 */
			passivatorBTA,
			/**
			 * Sediment and sludge (in percent).
			 */
			sedimentAndSludgePercent,
			/**
			 * Concentration of carbonyl compounds (aldehydes and ketones) determined using
			 * infrared spectroscopy (in percent).
			 */
			carbonyl,
			/**
			 * Concentration of aromatic compounds determined using infrared spectroscopy (in
			 * percent).
			 */
			aromatics,
			/**
			 * Measure of oxidation stability (in hours).
			 */
			oxidation,
			/**
			 * Sludge (in percent by mass). Typically performed on new oil,but can be done on
			 * used oil.
			 */
			sludge,
			/**
			 * Soluble acids  (in milligram of KOH/gram). Typically performed on new oil,but
			 * can be done on used oil.
			 */
			solubleAcids,
			/**
			 * Volatile acids (in milligram of KOH/gram). Typically performed on new oil,but
			 * can be done on used oil.
			 */
			volatileAcids,
			/**
			 * Total acids (soluble plus volatile) (in milligram of KOH/gram). Typically
			 * performed on new oil,but can be done on used oil.
			 */
			totalAcids,
			/**
			 * Oxidation induction time (in hours). Typically performed on new oil,but can be
			 * done on used oil.
			 */
			inductionTime,
			/**
			 * Amount of inhibitor used in oxidation stablity test performed according to IEC
			 * 61125, method C. This value should accompany values resulting from testing
			 * according to IEC 61125, method  C to allow interpretation.
			 */
			inhibitor61125MethodC,
			/**
			 * Duration of oxidation stablity test performed according to IEC 61125, method C.
			 * This value should accompany values resulting from testing according to IEC
			 * 61125, method C to allow interpretation. Standard specified values are: 164,
			 * 332, and 500, but others can be used if agreed upon.
			 */
			duration61125MethodC,
			/**
			 * Characterization of the carbon-type composition of insulating oils by petroleum
			 * origin.
			 */
			petroleumOrigin
		};

	}

}
#endif // OILANALYSISFLUIDANALOGKIND_H
