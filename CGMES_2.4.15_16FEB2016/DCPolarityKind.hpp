#ifndef DCPolarityKind_H
#define DCPolarityKind_H

namespace CIMPP {
	/*
	Polarity for DC circuits.
	*/
	enum class DCPolarityKind
	{
		/**
		 * Positive pole.
		 */
		positive,
		/**
		 * Middle pole, potentially grounded.
		 */
		middle,
		/**
		 * Negative pole.
		 */
		negative,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::DCPolarityKind& rop);
}
#endif
