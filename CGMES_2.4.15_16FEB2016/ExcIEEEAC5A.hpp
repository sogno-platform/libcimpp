#ifndef ExcIEEEAC5A_H
#define ExcIEEEAC5A_H
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

	/** \brief The class represents IEEE Std 421.5-2005 type AC5A model. The model represents a simplified model for brushless excitation systems. The regulator is supplied from a source, such as a permanent magnet generator, which is not affected by system disturbances.  Unlike other ac models, this model uses loaded rather than open circuit exciter saturation data in the same way as it is used for the dc models.  Because the model has been widely implemented by the industry, it is sometimes used to represent other types of systems when either detailed data for them are not available or simplified models are required.   Reference: IEEE Standard 421.5-2005 Section 6.5. */
	class ExcIEEEAC5A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEAC5A();
		~ExcIEEEAC5A() override;

		/** \brief Exciter voltage at which exciter saturation is defined (E).  Typical Value = 5.6. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (E).  Typical Value = 4.2. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief Voltage regulator gain (K).  Typical Value = 400. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (K).  Typical Value = 0.03. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.86. Default: nullptr */
		CIMPP::Simple_Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Simple_Float seefd2;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf1;

		/** \brief Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf2;

		/** \brief Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf3;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 7.3. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -7.3. Default: nullptr */
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

	BaseClass* ExcIEEEAC5A_factory();
}
#endif
