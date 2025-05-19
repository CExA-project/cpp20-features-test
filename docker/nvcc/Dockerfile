ARG VERSION=12.0.0
ARG OS_VERSION=22.04
FROM nvidia/cuda:$VERSION-devel-ubuntu$OS_VERSION

RUN apt-get update && \
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

WORKDIR /work
CMD ["bash"]
