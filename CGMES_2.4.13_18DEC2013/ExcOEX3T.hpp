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

	/*
	Modified IEEE Type ST1 Excitation System with semi-continuous and acting terminal voltage limiter.
	*/
	class ExcOEX3T : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcOEX3T();
		~ExcOEX3T() override;

		CIMPP::PU e1;  /* Saturation parameter (E). Default: nullptr */
		CIMPP::PU e2;  /* Saturation parameter (E). Default: nullptr */
		CIMPP::PU ka;  /* Gain (K). Default: nullptr */
		CIMPP::PU kc;  /* Gain (K). Default: nullptr */
		CIMPP::PU kd;  /* Gain (K). Default: nullptr */
		CIMPP::PU ke;  /* Gain (K). Default: nullptr */
		CIMPP::PU kf;  /* Gain (K). Default: nullptr */
		CIMPP::PU see1;  /* Saturation parameter (S(E)). Default: nullptr */
		CIMPP::PU see2;  /* Saturation parameter (S(E)). Default: nullptr */
		CIMPP::Seconds t1;  /* Time constant (T). Default: nullptr */
		CIMPP::Seconds t2;  /* Time constant (T). Default: nullptr */
		CIMPP::Seconds t3;  /* Time constant (T). Default: nullptr */
		CIMPP::Seconds t4;  /* Time constant (T). Default: nullptr */
		CIMPP::Seconds t5;  /* Time constant (T). Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant (T). Default: nullptr */
		CIMPP::Seconds te;  /* Time constant (T). Default: nullptr */
		CIMPP::Seconds tf;  /* Time constant (T). Default: nullptr */
		CIMPP::PU vrmax;  /* Limiter (V). Default: nullptr */
		CIMPP::PU vrmin;  /* Limiter (V). Default: nullptr */

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
