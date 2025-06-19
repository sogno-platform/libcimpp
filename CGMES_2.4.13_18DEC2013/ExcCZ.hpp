#ifndef ExcCZ_H
#define ExcCZ_H
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

	/** \brief Czech Proportion/Integral Exciter. */
	class ExcCZ : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcCZ();
		~ExcCZ() override;

		/** \brief Exciter output maximum limit (Efdmax). Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Exciter output minimum limit (Efdmin). Default: nullptr */
		CIMPP::PU efdmin;

		/** \brief Regulator gain (Ka). Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter constant related to self-excited field (Ke). Default: nullptr */
		CIMPP::PU ke;

		/** \brief Regulator proportional gain (Kp). Default: nullptr */
		CIMPP::PU kp;

		/** \brief Regulator time constant (Ta). Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Regulator integral time constant (Tc). Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (Te). Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Voltage regulator maximum limit (Vrmax). Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Voltage regulator minimum limit (Vrmin). Default: nullptr */
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

	BaseClass* ExcCZ_factory();
}
#endif
