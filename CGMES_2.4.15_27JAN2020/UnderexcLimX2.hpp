#ifndef UnderexcLimX2_H
#define UnderexcLimX2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	class UnderexcLimX2 : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLimX2();
		~UnderexcLimX2() override;

		CIMPP::PU kf2;  /* Differential gain (Kf2). Default: nullptr */
		CIMPP::PU km;  /* Minimum excitation limit gain (Km). Default: nullptr */
		CIMPP::PU melmax;  /* Minimum excitation limit value (MELMAX). Default: nullptr */
		CIMPP::PU qo;  /* Excitation center setting (Qo). Default: nullptr */
		CIMPP::PU r;  /* Excitation radius (R). Default: nullptr */
		CIMPP::Seconds tf2;  /* Differential time constant (Tf2) (&gt;0). Default: nullptr */
		CIMPP::Seconds tm;  /* Minimum excitation limit time constant (Tm). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* UnderexcLimX2_factory();
}
#endif
