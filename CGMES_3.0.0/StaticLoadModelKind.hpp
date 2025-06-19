#ifndef StaticLoadModelKind_H
#define StaticLoadModelKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Type of static load model. */
	class StaticLoadModelKind
	{
	public:
		enum StaticLoadModelKind_ENUM
		{
			/** This model is an exponential representation of the load. Exponential equations for active and reactive power are used and the following attributes are required: kp1, kp2, kp3, kpf, ep1, ep2, ep3 kq1, kq2, kq3, kqf, eq1, eq2, eq3. */
			exponential,
			/** This model integrates the frequency-dependent load (primarily motors).  ZIP1 equations for active and reactive power are used and the following attributes are required: kp1, kp2, kp3, kpf kq1, kq2, kq3, kqf. */
			zIP1,
			/** This model separates the frequency-dependent load (primarily motors) from other load.  ZIP2 equations for active and reactive power are used and the following attributes are required: kp1, kp2, kp3, kq4, kpf kq1, kq2, kq3, kq4, kqf. */
			zIP2,
			/** The load is represented as a constant impedance.  ConstantZ equations are used  for active and reactive power and no attributes are required. */
			constantZ,
		};

		StaticLoadModelKind() : value(), initialized(false) {}
		StaticLoadModelKind(StaticLoadModelKind_ENUM value) : value(value), initialized(true) {}

		StaticLoadModelKind& operator=(StaticLoadModelKind_ENUM rop);
		operator StaticLoadModelKind_ENUM() const;

		StaticLoadModelKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, StaticLoadModelKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const StaticLoadModelKind& obj);
	};
}
#endif
