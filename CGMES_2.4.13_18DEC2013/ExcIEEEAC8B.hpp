#ifndef ExcIEEEAC8B_H
#define ExcIEEEAC8B_H
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

	/** \brief The class represents IEEE Std 421.5-2005 type AC8B model. This model represents a PID voltage regulator with either a brushless exciter or dc exciter. The AVR in this model consists of PID control, with separate constants for the proportional (), integral (), and derivative () gains. The representation of the brushless exciter (, , , , ) is similar to the model Type AC2A. The Type AC8B model can be used to represent static voltage regulators applied to brushless excitation systems. Digitally based voltage regulators feeding dc rotating main exciters can be represented with the AC Type AC8B model with the parameters  and  set to 0.  For thyristor power stages fed from the generator terminals, the limits  and  should be a function of terminal voltage:  * and  * .     Reference: IEEE Standard 421.5-2005 Section 6.8. */
	class ExcIEEEAC8B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEAC8B();
		~ExcIEEEAC8B() override;

		/** \brief Voltage regulator gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (K). Typical Value = 0.55. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (K).    Typical Value = 1.1. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Voltage regulator derivative gain (K).  Typical Value = 10. Default: nullptr */
		CIMPP::PU kdr;

		/** \brief Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Voltage regulator integral gain (K).  Typical Value = 5. Default: nullptr */
		CIMPP::PU kir;

		/** \brief Voltage regulator proportional gain (K).  Typical Value = 80. Default: nullptr */
		CIMPP::PU kpr;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Simple_Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 3. Default: nullptr */
		CIMPP::Simple_Float seve2;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Lag time constant (T).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tdr;

		/** \brief Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 1.2. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (V) equals V (V).  Typical Value = 6.5. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (V).  Typical Value = 9. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Minimum exciter voltage output (V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vemin;

		/** \brief Exciter field current limit reference (V).  Typical Value = 6. Default: nullptr */
		CIMPP::PU vfemax;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 35. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = 0. Default: nullptr */
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

	BaseClass* ExcIEEEAC8B_factory();
}
#endif
