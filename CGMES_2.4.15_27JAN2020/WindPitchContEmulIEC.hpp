#ifndef WindPitchContEmulIEC_H
#define WindPitchContEmulIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class WindGenTurbineType2IEC;

	/** \brief Pitch control emulator model.  Reference: IEC Standard 61400-27-1 Section 6.6.5.1. */
	class WindPitchContEmulIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPitchContEmulIEC();
		~WindPitchContEmulIEC() override;

		/** \brief Wind turbine type 2 model with which this Pitch control emulator model is associated. Default: 0 */
		CIMPP::WindGenTurbineType2IEC* WindGenTurbineType2IEC;

		/** \brief Power error gain (). It is case dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kdroop;

		/** \brief Pitch control emulator integral constant (). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kipce;

		/** \brief Aerodynamic power change vs. omegachange (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU komegaaero;

		/** \brief Pitch control emulator proportional constant (). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kppce;

		/** \brief Rotor speed in initial steady state (omega). It is case dependent parameter. Default: nullptr */
		CIMPP::PU omegaref;

		/** \brief Maximum steady state power (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU pimax;

		/** \brief Minimum steady state power (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU pimin;

		/** \brief First time constant in pitch control lag (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Second time constant in pitch control lag (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time constant in generator air gap power lag (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tpe;

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

	BaseClass* WindPitchContEmulIEC_factory();
}
#endif
