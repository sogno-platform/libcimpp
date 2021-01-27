///////////////////////////////////////////////////////////
//  IECStandardKind.h
//  Implementation of the Class IECStandardKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef IECSTANDARDKIND_H
#define IECSTANDARDKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * List of IEC standards.
		 */
		enum class IECStandardKind
		{
			/**
			 * Insulating liquids - Determination of the breakdown voltage at power frequency -
			 * Test method.
			 */
			 _undef = -1, 	_60156,
			/**
			 * Electric strength of insulating materials - Test methods - Part 1: Tests at
			 * power frequencies.
			 */
			_60243_1,
			/**
			 * Electric strength of insulating materials - Test methods - Part 2: Additional
			 * requirements for tests using direct voltage.
			 */
			_60243_2,
			/**
			 * Electric strength of insulating materials - Test methods - Part 3: Additional
			 * requirements for 1,2/50 µs impulse tests.
			 */
			_60243_3,
			/**
			 * Insulating liquids - Measurement of relative permittivity, dielectric
			 * dissipation factor (tan d) and d.c. resistivity  -or-
			 * Measurement of relative permittivity, dielectric dissipation factor and d.c.
			 * resistivity of insulating liquids  -or-
			 * Recommended test cells for measuring the resistivity of insulating liquids and
			 * methods of cleaning the cells.
			 */
			_60247,
			/**
			 * Mineral insulating oils in electrical equipment - Supervision and maintenance
			 * guidance.
			 */
			_60422,
			/**
			 * Measurement of the average viscometric degree of polymerization of new and aged
			 * cellulosic electrically insulating materials.
			 */
			_60450,
			/**
			 * Oil-filled electrical equipment - Sampling of gases and analysis of free and
			 * dissolved gasses - Guidance  -or-
			 * Oil-filled electrical equipment - Sampling of gases and of oil for analysis of
			 * free and dissolved gases - Guidance  -or-
			 * Guide for the sampling of gases and of oil form oil-filled electrical equipment
			 * and for the analysis of free and dissolved gases.
			 */
			_60567,
			/**
			 * Detection and determination of specified additives in mineral insulating oils  -
			 * or-
			 * Detection and determination of specified anti-oxidant additives in insulating
			 * oils.
			 */
			_60666,
			/**
			 * Insulating liquids - Oil-impregnated paper and pressboard - Determination of
			 * water by automatic coulometric Karl Fischer titration.
			 */
			_60814,
			/**
			 * Insulating liquids - Methods for counting and sizing particles  -or-
			 * Methods for counting and sizing particles in insulating liquids.
			 */
			_60970,
			_60997,
			/**
			 * Unused hydrocarbon based insulating liquids - Test methods for evaluating the
			 * oxidation stability.
			 */
			_61125,
			/**
			 * Mineral insulating oils - Methods for the determination of 2-furfural and
			 * related compounds.
			 */
			_61198,
			/**
			 * Insulating liquids - Contamination by polychlorinated biphenyls (PCBs) - Method
			 * of determination by capillary column gas chromatography.
			 */
			_61619,
			/**
			 * Mineral insulating oils – Determination of kinematic viscosity at very low
			 * temperatures.
			 */
			_61868,
			/**
			 * Insulating liquids – Test method for detection of potentially corrosive sulphur
			 * in used and unused insulating oil.
			 */
			_62535,
			/**
			 * Test methods for quantitative determination of corrosive sulfur compounds in
			 * unused and used insulating liquids - Part 1: Test method for quantitative
			 * determination of dibenzyldisulfide (DBDS).
			 */
			_62697_1,
			/**
			 * Fluids for electrotechnical applications – Unused natural esters for
			 * transformers and similar electrical equipment.
			 */
			_62770
		};

	}

}
#endif // IECSTANDARDKIND_H
