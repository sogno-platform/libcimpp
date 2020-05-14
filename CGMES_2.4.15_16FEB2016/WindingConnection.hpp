#ifndef WindingConnection_H
#define WindingConnection_H

namespace CIMPP {
	/*
	Winding connection type.
	*/
	enum class WindingConnection
	{
		/**
		 * Delta
		 */
		D,
		/**
		 * Wye
		 */
		Y,
		/**
		 * ZigZag
		 */
		Z,
		/**
		 * Wye, with neutral brought out for grounding.
		 */
		Yn,
		/**
		 * ZigZag, with neutral brought out for grounding.
		 */
		Zn,
		/**
		 * Autotransformer common winding
		 */
		A,
		/**
		 * Independent winding, for single-phase connections
		 */
		I,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::WindingConnection& rop);
}
#endif
