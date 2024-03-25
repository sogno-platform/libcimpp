FROM ubuntu:latest

LABEL \
	org.label-schema.schema-version = "2.1.0" \
	org.label-schema.name = "libcimpp" \
	org.label-schema.license = "MPL" \
	org.label-schema.vcs-url = "https://github.com/sogno-platform/libcimpp"

RUN apt-get update

# Toolchain
RUN DEBIAN_FRONTEND=noninteractive \
	apt-get -y install \
			cmake \
			curl \
			doxygen \
			git \
			graphviz \
			g++ \
			libxml2-dev \
			make \
			python3-pip \
			rpm

RUN pip3 install xmltodict chevron

RUN curl -L https://github.com/RWTH-ACS/arabica/releases/download/release%2Fv0.1.0/libarabica-2016-Linux.deb > libarabica.deb
RUN dpkg -i libarabica.deb

entrypoint [ "package/entrypoint.sh" ]
