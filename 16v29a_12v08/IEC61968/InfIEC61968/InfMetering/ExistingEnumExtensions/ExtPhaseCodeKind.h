///////////////////////////////////////////////////////////
//  ExtPhaseCodeKind.h
//  Implementation of the Class ExtPhaseCodeKind
///////////////////////////////////////////////////////////

#ifndef EXTPHASECODEKIND_H
#define EXTPHASECODEKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfMetering
		{
			namespace ExistingEnumExtensions
			{
				/**
				 * Enumeration of phase identifiers. Allows designation of phases for both
				 * transmission and distribution equipment, circuits and loads.
				 * Residential and small commercial loads are often served from single-phase, or
				 * split-phase, secondary circuits. Phases 1 and 2 refer to hot wires that are 180
				 * degrees out of phase, while N refers to the neutral wire. Through single-phase
				 * transformer connections, these secondary circuits may be served from one or two
				 * of the primary phases A, B, and C. For three-phase loads, use the A, B, C phase
				 * codes instead of s12N.
				 */
				enum class ExtPhaseCodeKind
				{
					/**
					 * ABC to Neutral
					 */
					ABCN = 225,
					/**
					 * Involving all phases
					 */
					ABC = 224,
					/**
					 * AB to Neutral
					 */
					ABN = 193,
					/**
					 * Phases A, C and neutral.
					 */
					ACN = 97,
					/**
					 * BC to neutral.
					 */
					BCN = 97,
					/**
					 * Phases A to B
					 */
					AB = 132,
					/**
					 * Phases A and C
					 */
					AC = 96,
					/**
					 * Phases B to C
					 */
					BC = 66,
					/**
					 * Phases A to neutral.
					 */
					AN = 129,
					/**
					 * Phases B to neutral.
					 */
					BN = 65,
					/**
					 * Phases C to neutral.
					 */
					CN = 33,
					/**
					 * Phase A.
					 */
					A = 128,
					/**
					 * Phase B.
					 */
					B = 64,
					/**
					 * Phase C.
					 */
					C = 32,
					/**
					 * Neutral
					 */
					N = 16,
					/**
					 * Phase S2 to neutral.
					 */
					S2N = 272,
					/**
					 * Phase S1, S2 to neutral.
					 */
					S12N = 784,
					/**
					 * Phase S1 to Neutral
					 */
					S1N = 528,
					/**
					 * Phase S2.
					 */
					S2 = 256,
					/**
					 * Phase S1 to S2
					 */
					S12 = 768,
					/**
					 * Not applicable to any phase
					 */
					none = 0,
					/**
					 * Phase A current relative to Phase A voltage
					 */
					AtoAv = 136,
					/**
					 * Phase B current or voltage relative to Phase A voltage
					 */
					BAv = 72,
					/**
					 * CA to Neutral
					 */
					CAN = 41,
					/**
					 * hase C current or voltage relative to Phase A voltage
					 */
					CAv = 40,
					/**
					 * Neutral to ground
					 */
					NG = 17,
					/**
					 * Phase S1
					 */
					S1 = 512
				};

			}

		}

	}

}
#endif // EXTPHASECODEKIND_H
