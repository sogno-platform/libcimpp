#ifndef BASECLASS_HPP
#define BASECLASS_HPP

#ifndef CGMES_BUILD
#define CGMES_BUILD
#endif

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

class BaseClass;
typedef bool (*class_get_function)(const BaseClass*, std::list<const BaseClass*>&);
typedef bool (*get_function)(const BaseClass*, std::stringstream&);

class BaseClass
{
	std::string rdfid;
public:
	virtual ~BaseClass();

	void setRdfid(const std::string& id) { rdfid = id; }
	std::string getRdfid() const { return rdfid; }

	static const char debugName[];
	virtual const char* debugString() const;

	virtual const std::list<std::string>& getAttributeNames() const;

	virtual const std::string& getClassNamespaceUrl() const;
	virtual const std::string& getAttributeNamespaceUrl(const std::string& attrName) const;

	virtual const std::list<CGMESProfile>& getPossibleProfiles() const;
	virtual const CGMESProfile& getRecommendedProfile() const;
	virtual const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const;
	virtual const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const;

	static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
	static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
	static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
	virtual void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const;
	virtual void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const;
	virtual void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const;

	virtual bool isAssignableFrom(BaseClass* otherObject) const { return false; }
	static const CIMPP::BaseClassDefiner declare();

protected:
	friend class CimClassDetails;
	virtual std::map<std::string, AttrDetails> allAttrDetailsMap() const;
};
#endif // BASECLASS_HPP
