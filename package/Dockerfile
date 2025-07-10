FROM ubuntu:latest

LABEL \
	org.label-schema.schema-version = "2.2.0" \
	org.label-schema.name = "libcimpp" \
	org.label-schema.license = "Apache-2.0" \
	org.label-schema.vcs-url = "https://github.com/sogno-platform/libcimpp"

RUN apt-get update

# Toolchain
RUN DEBIAN_FRONTEND=noninteractive \
	apt-get -y install \
			cmake \
			g++ \
			libxml2-dev \
			make \
			rpm \
			libboost-filesystem-dev \
			libboost-system-dev \
			libboost-test-dev

# Starts on github with workdir /github/workspace which is bind mount to libcimpp.
ENTRYPOINT [ "package/entrypoint.sh" ]
