#ifndef ExcHU_H
#define ExcHU_H
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
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Hungarian Excitation System Model, with built-in voltage transducer. */
	class ExcHU : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcHU();
		~ExcHU() override;

		/** \brief Major loop PI tag gain factor (Ae).  Typical Value = 3. Default: nullptr */
		CIMPP::PU ae;

		/** \brief Minor loop PI tag gain factor (Ai).  Typical Value = 22. Default: nullptr */
		CIMPP::PU ai;

		/** \brief AVR constant (Atr).  Typical Value = 2.19. Default: nullptr */
		CIMPP::PU atr;

		/** \brief Field voltage control signal upper limit on AVR base (Emax).  Typical Value = 0.996. Default: nullptr */
		CIMPP::PU emax;

		/** \brief Field voltage control signal lower limit on AVR base (Emin).  Typical Value = -0.866. Default: nullptr */
		CIMPP::PU emin;

		/** \brief Major loop PI tag output signal upper limit (Imax).  Typical Value = 2.19. Default: nullptr */
		CIMPP::PU imax;

		/** \brief Major loop PI tag output signal lower limit (Imin).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU imin;

		/** \brief Voltage base conversion constant (Ke).  Typical Value = 4.666. Default: nullptr */
		CIMPP::Simple_Float ke;

		/** \brief Current base conversion constant (Ki).  Typical Value = 0.21428. Default: nullptr */
		CIMPP::Simple_Float ki;

		/** \brief Major loop PI tag integration time constant (Te).  Typical Value = 0.154. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Minor loop PI control tag integration time constant (Ti).  Typical Value = 0.01333. Default: nullptr */
		CIMPP::Seconds ti;

		/** \brief Filter time constant (Tr). If a voltage compensator is used in conjunction with this excitation system model, Tr should be set to 0.  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds tr;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* ExcHU_factory();
}
#endif
