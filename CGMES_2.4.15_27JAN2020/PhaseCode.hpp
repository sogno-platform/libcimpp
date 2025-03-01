#ifndef PhaseCode_H
#define PhaseCode_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Enumeration of phase identifiers. Allows designation of phases for both transmission and distribution equipment, circuits and loads. Residential and small commercial loads are often served from single-phase, or split-phase, secondary circuits. For example of s12N, phases 1 and 2 refer to hot wires that are 180 degrees out of phase, while N refers to the neutral wire. Through single-phase transformer connections, these secondary circuits may be served from one or two of the primary phases A, B, and C. For three-phase loads, use the A, B, C phase codes instead of s12N. */
	class PhaseCode
	{
	public:
		enum PhaseCode_ENUM
		{
			/** Phases A, B, C, and N. */
			ABCN,
			/** Phases A, B, and C. */
			ABC,
			/** Phases A, B, and neutral. */
			ABN,
			/** Phases A, C and neutral. */
			ACN,
			/** Phases B, C, and neutral. */
			BCN,
			/** Phases A and B. */
			AB,
			/** Phases A and C. */
			AC,
			/** Phases B and C. */
			BC,
			/** Phases A and neutral. */
			AN,
			/** Phases B and neutral. */
			BN,
			/** Phases C and neutral. */
			CN,
			/** Phase A. */
			A,
			/** Phase B. */
			B,
			/** Phase C. */
			C,
			/** Neutral phase. */
			N,
			/** Secondary phase 1 and neutral. */
			s1N,
			/** Secondary phase 2 and neutral. */
			s2N,
			/** Secondary phases 1, 2, and neutral. */
			s12N,
			/** Secondary phase 1. */
			s1,
			/** Secondary phase 2. */
			s2,
			/** Secondary phase 1 and 2. */
			s12,
		};

		PhaseCode() : value(), initialized(false) {}
		PhaseCode(PhaseCode_ENUM value) : value(value), initialized(true) {}

		PhaseCode& operator=(PhaseCode_ENUM rop);
		operator PhaseCode_ENUM() const;

		PhaseCode_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, PhaseCode& rop);
		friend std::ostream& operator<<(std::ostream& os, const PhaseCode& obj);
	};
}
#endif
