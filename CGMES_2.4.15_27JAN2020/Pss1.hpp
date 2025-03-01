#ifndef Pss1_H
#define Pss1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Italian PSS - three input PSS (speed, frequency, power). */
	class Pss1 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss1();
		~Pss1() override;

		/** \brief Frequency power input gain (K).  Typical Value = 5. Default: nullptr */
		CIMPP::Simple_Float kf;

		/** \brief Electric power input gain (K).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Simple_Float kpe;

		/** \brief PSS gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float ks;

		/** \brief Shaft speed power input gain (K).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float kw;

		/** \brief Minimum power PSS enabling (P).  Typical Value = 0.25. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t10;

		/** \brief Washout (T).  Typical Value = 3.5. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Filter time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t8;

		/** \brief Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t9;

		/** \brief Electric power filter time constant (T).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tpe;

		/** \brief  Default: false */
		CIMPP::Boolean vadat;

		/** \brief Stabilizer output max limit (V).  Typical Value = -0.06. Default: nullptr */
		CIMPP::PU vsmn;

		/** \brief Stabilizer output min limit (V).  Typical Value = 0.06. Default: nullptr */
		CIMPP::PU vsmx;

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

	BaseClass* Pss1_factory();
}
#endif
