#ifndef SynchronousMachineDetailed_H
#define SynchronousMachineDetailed_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "SynchronousMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "CurrentFlow.hpp"
#include "IfdBaseKind.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief All synchronous machine detailed types use a subset of the same data parameters and input/output variables.   The several variations differ in the following ways:   It is not necessary for each simulation tool to have separate models for each of the model types.  The same model can often be used for several types by alternative logic within the model.  Also, differences in saturation representation may not result in significant model performance differences so model substitutions are often acceptable. */
	class SynchronousMachineDetailed : public SynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineDetailed();
		~SynchronousMachineDetailed() override;

		/** \brief Ratio of Efd bases of exciter and generator models.  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float efdBaseRatio;

		/** \brief Excitation base system mode.  Typical Value = ifag. Default: 0 */
		CIMPP::IfdBaseKind ifdBaseType;

		/** \brief Ifd base current if .ifdBaseType = other. Not needed if .ifdBaseType not = other.   Unit = A.  Typical Value = 0. Default: nullptr */
		CIMPP::CurrentFlow ifdBaseValue;

		/** \brief Q-axis saturation factor at 120% of rated terminal voltage (S12q) (&gt;=S1q).  Typical Value = 0.12. Default: nullptr */
		CIMPP::Simple_Float saturationFactor120QAxis;

		/** \brief Q-axis saturation factor at rated terminal voltage (S1q) (&gt;= 0). Typical Value = 0.02. Default: nullptr */
		CIMPP::Simple_Float saturationFactorQAxis;

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

	BaseClass* SynchronousMachineDetailed_factory();
}
#endif
