///////////////////////////////////////////////////////////
//  PhaseCode.h
//  Implementation of the Class PhaseCode
///////////////////////////////////////////////////////////

#ifndef PHASECODE_H
#define PHASECODE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * An unordered enumeration of phase identifiers.  Allows designation of phases
			 * for both transmission and distribution equipment, circuits and loads.   The
			 * enumeration, by itself, does not describe how the phases are connected together
			 * or connected to ground.  Ground is not explicitly denoted as a phase.
			 * Residential and small commercial loads are often served from single-phase, or
			 * split-phase, secondary circuits. For example of s12N, phases 1 and 2 refer to
			 * hot wires that are 180 degrees out of phase, while N refers to the neutral wire.
			 * Through single-phase transformer connections, these secondary circuits may be
			 * served from one or two of the primary phases A, B, and C. For three-phase loads,
			 * use the A, B, C phase codes instead of s12N.
			 */
			enum class PhaseCode
			{
				/**
				 * Phases A, B, C, and N.
				 */
				 _undef = -1, 	ABCN = 225,
				/**
				 * Phases A, B, and C.
				 */
				ABC = 224,
				/**
				 * Phases A, B, and neutral.
				 */
				ABN = 193,
				/**
				 * Phases A, C and neutral.
				 */
				ACN = 41,
				/**
				 * Phases B, C, and neutral.
				 */
				BCN = 97,
				/**
				 * Phases A and B.
				 */
				AB = 132,
				/**
				 * Phases A and C.
				 */
				AC = 96,
				/**
				 * Phases B and C.
				 */
				BC = 66,
				/**
				 * Phases A and neutral.
				 */
				AN = 129,
				/**
				 * Phases B and neutral.
				 */
				BN = 65,
				/**
				 * Phases C and neutral.
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
				 * Neutral phase.
				 */
				N = 16,
				/**
				 * Secondary phase 1 and neutral.
				 */
				s1N = 528,
				/**
				 * Secondary phase 2 and neutral.
				 */
				s2N = 272,
				/**
				 * Secondary phases 1, 2, and neutral.
				 */
				s12N = 784,
				/**
				 * Secondary phase 1.
				 */
				s1 = 512,
				/**
				 * Secondary phase 2.
				 */
				s2 = 256,
				/**
				 * Secondary phase 1 and 2.
				 */
				s12 = 768,
				/**
				 * No phases specified.
				 */
				none = 0,
				/**
				 * Unknown non-neutral phase.
				 */
				X = 1024,
				/**
				 * Two unknown non-neutral phases.
				 */
				XY = 3072,
				/**
				 * Unknown non-neutral phase plus neutral.
				 */
				XN = 1040,
				/**
				 * Two unknown non-neutral phases plus neutral.
				 */
				XYN = 3088
			};

		}

	}

}
#endif // PHASECODE_H
