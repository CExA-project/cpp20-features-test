ARG VERSION=5.3.3
ARG OS_VERSION=20.04
FROM rocm/dev-ubuntu-$OS_VERSION:$VERSION

# ignore apt-get error, old images may not be aple to refresh amd repos
RUN apt-get update ; \
        apt-get install -qq -y \
        wget && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

ARG CMAKE_VERSION=4.0.1
RUN CMAKE_SCRIPT="cmake-$CMAKE_VERSION-linux-x86_64.sh" && \
    wget --quiet "https://github.com/Kitware/CMake/releases/download/v$CMAKE_VERSION/$CMAKE_SCRIPT" && \
    mkdir /opt/cmake -p && \
    bash "./$CMAKE_SCRIPT" --skip-license --prefix=/opt/cmake && \
    rm "$CMAKE_SCRIPT"

ENV PATH="/opt/cmake/bin:$PATH"

# reset rocm directories for old images
ENV PATH="$PATH:/opt/rocm/bin"
ENV LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/opt/rocm/lib"
ENV CPATH="$CPATH:/opt/rocm/include"

WORKDIR /work
CMD ["bash"]
