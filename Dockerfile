FROM fedora:36

LABEL \
	org.label-schema.schema-version = "2.1.0" \
	org.label-schema.name = "libcimpp" \
	org.label-schema.license = "Apache-2.0" \
	org.label-schema.vcs-url = "https://github.com/sogno-platform/libcimpp"

RUN dnf -y update

# Toolchain
RUN dnf -y install \
	git \
	gcc-c++ \
	make \
	cmake \
	doxygen \
	graphviz \
	python3-pip \
	rpmdevtools \
	libxml2-devel
