#ifndef WindGenUnitKind_H
#define WindGenUnitKind_H

namespace CIMPP {
	/*
	Kind of wind generating unit.
	*/
	enum class WindGenUnitKind
	{
		/**
		 * The wind generating unit is located offshore.
		 */
		offshore,
		/**
		 * The wind generating unit is located onshore.
		 */
		onshore,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::WindGenUnitKind& rop);
}
#endif
