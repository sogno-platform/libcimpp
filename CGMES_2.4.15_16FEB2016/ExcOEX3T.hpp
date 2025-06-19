#ifndef ExcOEX3T_H
#define ExcOEX3T_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE Type ST1 Excitation System with semi-continuous and acting terminal voltage limiter. */
	class ExcOEX3T : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcOEX3T();
		~ExcOEX3T() override;

		/** \brief Saturation parameter (E). Default: nullptr */
		CIMPP::PU e1;

		/** \brief Saturation parameter (E). Default: nullptr */
		CIMPP::PU e2;

		/** \brief Gain (K). Default: nullptr */
		CIMPP::PU ka;

		/** \brief Gain (K). Default: nullptr */
		CIMPP::PU kc;

		/** \brief Gain (K). Default: nullptr */
		CIMPP::PU kd;

		/** \brief Gain (K). Default: nullptr */
		CIMPP::PU ke;

		/** \brief Gain (K). Default: nullptr */
		CIMPP::PU kf;

		/** \brief Saturation parameter (S(E)). Default: nullptr */
		CIMPP::PU see1;

		/** \brief Saturation parameter (S(E)). Default: nullptr */
		CIMPP::PU see2;

		/** \brief Time constant (T). Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Time constant (T). Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time constant (T). Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Time constant (T). Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Time constant (T). Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Time constant (T). Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Time constant (T). Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Time constant (T). Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Limiter (V). Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Limiter (V). Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* ExcOEX3T_factory();
}
#endif
