#ifndef ExcPIC_H
#define ExcPIC_H
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

namespace CIMPP
{

	/** \brief Proportional/Integral Regulator Excitation System Model.  This model can be used to represent excitation systems with a proportional-integral (PI) voltage regulator controller. */
	class ExcPIC : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcPIC();
		~ExcPIC() override;

		/** \brief Field voltage value 1 (E1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU e1;

		/** \brief Field voltage value 2 (E2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU e2;

		/** \brief Exciter maximum limit (Efdmax).  Typical Value = 8. Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Exciter minimum limit (Efdmin).  Typical Value = -0.87. Default: nullptr */
		CIMPP::PU efdmin;

		/** \brief PI controller gain (Ka).  Typical Value = 3.15. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter regulation factor (Kc).  Typical Value = 0.08. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Exciter constant (Ke).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Rate feedback gain (Kf).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Current source gain (Ki).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Potential source gain (Kp).  Typical Value = 6.5. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Saturation factor at E1 (Se1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU se1;

		/** \brief Saturation factor at E2 (Se2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU se2;

		/** \brief PI controller time constant (Ta1).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds ta1;

		/** \brief Voltage regulator time constant (Ta2).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds ta2;

		/** \brief Lead time constant (Ta3).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta3;

		/** \brief Lag time constant (Ta4).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta4;

		/** \brief Exciter time constant (Te).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Rate feedback time constant (Tf1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tf1;

		/** \brief Rate feedback lag time constant (Tf2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tf2;

		/** \brief PI maximum limit (Vr1).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vr1;

		/** \brief PI minimum limit (Vr2).  Typical Value = -0.87. Default: nullptr */
		CIMPP::PU vr2;

		/** \brief Voltage regulator maximum limit (Vrmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Voltage regulator minimum limit (Vrmin).  Typical Value = -0.87. Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* ExcPIC_factory();
}
#endif
