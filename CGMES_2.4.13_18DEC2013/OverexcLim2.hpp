#ifndef OverexcLim2_H
#define OverexcLim2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "OverexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/** \brief Different from LimIEEEOEL, LimOEL2 has a fixed pickup threshold and reduces the excitation set-point by mean of non-windup integral regulator. Irated is the rated machine excitation current (calculated from nameplate conditions: V, P, CosPhi). */
	class OverexcLim2 : public OverexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		OverexcLim2();
		~OverexcLim2() override;

		/** \brief Limit value of rated field current (I).  Typical Value = 1.05. Default: nullptr */
		CIMPP::PU ifdlim;

		/** \brief Gain Over excitation limiter (K).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU koi;

		/** \brief Maximum error signal (V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU voimax;

		/** \brief Minimum error signal (V).  Typical Value = -9999. Default: nullptr */
		CIMPP::PU voimin;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* OverexcLim2_factory();
}
#endif
