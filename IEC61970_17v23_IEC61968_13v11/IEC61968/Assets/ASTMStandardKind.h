///////////////////////////////////////////////////////////
//  ASTMStandardKind.h
//  Implementation of the Class ASTMStandardKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASTMSTANDARDKIND_H
#define ASTMSTANDARDKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * List of ASTM standards.
		 */
		enum class ASTMStandardKind
		{
			/**
			 * Standard Test Method for Specific Resistance (Resistivity) of Electrical
			 * Insulating Liquids.
			 */
			 _undef = -1, 	D1169,
			/**
			 * Standard Test Method for Corrosive Sulfur in Electrical Insulating Oils.
			 */
			D1275,
			/**
			 * Standard Test Method for Density, Relative Density, or API Gravity of Crude
			 * Petroleum and Liquid Petroleum Products by Hydrometer Method  -or-
			 * Standard Test Method for Density, Relative Density (Specific Gravity), or API
			 * Gravity of Crude Petroleum and Liquid Petroleum Products by Hydrometer Method.
			 */
			D1298,
			/**
			 * Standard Test Method for Dielectric Breakdown Voltage and Dielectric Strength
			 * of Solid Electrical Insulating Materials at Commercial Power Frequencies.
			 */
			D149,
			/**
			 * Standard Test Method for ASTM Color of Petroleum Products (ASTM Color Scale).
			 */
			D1500,
			/**
			 * Standard Test Method for Visual Examination of Used Electrical Insulating Oils
			 * of Petroleum Origin in the Field.
			 */
			D1524,
			/**
			 * Standard Test Method for Water in Insulating Liquids by Coulometric Karl
			 * Fischer Titration.
			 */
			D1533,
			/**
			 * Standard Test Method for Dielectric Breakdown Voltage of Insulating Liquids
			 * Using VDE Electrodes.
			 */
			D1816,
			/**
			 * Standard Test Methods for Water Vapor Content of Electrical Insulating Gases by
			 * Measurement of Dew Point.
			 */
			D2029,
			/**
			 * Standard Test Method for Oxidation Stability of Inhibited Mineral Insulating
			 * Oil by Pressure Vessel.
			 */
			D2112,
			/**
			 * Standard Test Method for Color of Clear Electrical Insulating Liquids (Platinum-
			 * Cobalt Scale).
			 */
			D2129,
			/**
			 * Standard Practice for Calculating Carbon-Type Composition of Insulating Oils of
			 * Petroleum Origin  -or-
			 * Standard Test Method for Carbon-Type Composition of Insulating Oils of
			 * Petroleum Origin.
			 */
			D2140,
			/**
			 * Standard Practices for Examination of Electrical Insulating Oils by Infrared
			 * Absorption  -or-
			 * Standard Test Methods for Examination of Electrical Insulating Oils by Infrared
			 * Absorption.
			 */
			D2144,
			/**
			 * Standard Test Method for 2,6-di-tert-Butyl- p-Cresol and 2,6-di-tert-Butyl
			 * Phenol in Electrical Insulating Oil by Infrared Absorption  -or-
			 * Standard Test Method for 2,6-Ditertiary-Butyl Para Cresol and 2,6-Ditertiary-
			 * Butyl Phenol in Electrical Insulating Oil by Infrared Absorption.
			 */
			D2668,
			/**
			 * Standard Test Method for Analysis of Gases Dissolved in Electrical Insulating
			 * Oil by Gas Chromatography.
			 */
			D3612,
			/**
			 * Standard Test Method for Density, Relative Density, and API Gravity of Liquids
			 * by Digital Density Meter  -or-
			 * Standard Test Method for Density and Relative Density of Liquids by Digital
			 * Density Meter.
			 */
			D4052,
			/**
			 * Standard Test Method for Analysis of Polychlorinated Biphenyls in Insulating
			 * Liquids by Gas Chromatography.
			 */
			D4059,
			/**
			 * Standard Test Method of Measuring Humidity with Cooled-Surface Condensation
			 * (Dew-Point) Hygrometer.
			 */
			D4230,
			/**
			 * Standard Test Method for Measurement of Average Viscometric Degree of
			 * Polymerization of New and Aged Electrical Papers and Boards.
			 */
			D4243,
			/**
			 * Standard Test Method for Kinematic Viscosity of Transparent and Opaque Liquids
			 * (and Calculation of Dynamic Viscosity)  -or-
			 * Standard Method Of Test For Viscosity Of Transparent And Opaque Liquids
			 * (Kinematic And Dynamic Viscosities).
			 */
			D445,
			/**
			 * Standard Test Method for Analysis of 2,6-Ditertiary-Butyl Para-Cresol and 2,6-
			 * Ditertiary-Butyl Phenol in Insulating Liquids by Gas Chromatography.
			 */
			D4768,
			/**
			 * Standard Test Method for Furanic Compounds in Electrical Insulating Liquids by
			 * High-Performance Liquid Chromatography (HPLC).
			 */
			D5837,
			/**
			 * Standard Test Method for Pour Point of Crude Oils.
			 */
			D5853,
			/**
			 * Standard Test Method for Pour Point of Petroleum Products (Automatic Pressure
			 * Pulsing Method).
			 */
			D5949,
			/**
			 * Standard Test Method for Pour Point of Petroleum Products (Automatic Tilt
			 * Method).
			 */
			D5950,
			/**
			 * Standard Test Method for Pour Point of Petroleum Products (Rotational Method).
			 */
			D5985,
			/**
			 * Standard Test Method for Determination of Water in Petroleum Products,
			 * Lubricating Oils, and Additives by Coulometric Karl Fischer Titration.
			 */
			D6304,
			/**
			 * Standard Test Method for Pour Point of Petroleum Products (Automatic Air
			 * Pressure Method).
			 */
			D6749,
			/**
			 * Standard Test Method for Particle Count in Mineral Insulating Oil Using
			 * Automatic Optical Particle Counters.
			 */
			D6786,
			/**
			 * Standard Test Method for Pour Point of Petroleum Products (Robotic Tilt Method).
			 */
			D6892,
			/**
			 * Standard Test Method for Determination of Elements in Insulating Oils by
			 * Inductively Coupled Plasma Atomic Emission Spectrometry (ICP-AES).
			 */
			D7151,
			/**
			 * Standard Test Method for No Flow Point and Pour Point of Petroleum Products and
			 * Liquid Fuels  -or-
			 * Standard Test Method for No Flow Point and Pour Point of Petroleum Products  -
			 * or-
			 * Standard Test Method for No Flow Point of Petroleum Products.
			 */
			D7346,
			/**
			 * Standard Test Method for Tensile Properties of Paper and Paperboard Using
			 * Constant-Rate-of-Elongation Apparatus (Withdrawn 2009).
			 */
			D828,
			/**
			 * Standard Test Method for Dielectric Breakdown Voltage of Insulating Liquids
			 * Using Disk Electrodes.
			 */
			D877,
			/**
			 * Standard Test Method for Dielectric Breakdown Voltage of Insulating Liquids
			 * Using Disk Electrodes.
			 */
			D877_D877M,
			/**
			 * Standard Test Method for Flash and Fire Points by Cleveland Open Cup Tester  -
			 * or-
			 * Standard Test Method for Flash and Fire Points by Cleveland Open Cup.
			 */
			D92,
			/**
			 * Standard Test Method for Dissipation Factor (or Power Factor) and Relative
			 * Permittivity (Dielectric Constant) of Electrical Insulating Liquids.
			 */
			D924,
			/**
			 * Standard Test Methods for Flash Point by Pensky-Martens Closed Cup Tester  -or-
			 * 
			 * Standard Test Method for Flash Point by Pensky-Martens Closed Tester  -or-
			 * Standard Method Of Test For Flash Point by Pensky-Martens Closed Tester.
			 */
			D93,
			/**
			 * Standard Test Method for Pour Point of Petroleum Products  -or-
			 * Standard Test Method for Pour Point of Petroleum Oils.
			 */
			D97,
			/**
			 * Standard Test Method for Acid and Base Number by Color-Indicator Titration.
			 */
			D974
		};

	}

}
#endif // ASTMSTANDARDKIND_H
