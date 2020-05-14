#ifndef GenericNonLinearLoadModelKind_H
#define GenericNonLinearLoadModelKind_H

namespace CIMPP {
	/*
	Type of generic non-linear load model.
	*/
	enum class GenericNonLinearLoadModelKind
	{
		/**
		 * Exponential recovery model.
		 */
		exponentialRecovery,
		/**
		 * Load adaptive model.
		 */
		loadAdaptive,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::GenericNonLinearLoadModelKind& rop);
}
#endif
