Package: python3:x64-linux@3.11.8#4

**Host Environment**

- Host: x64-linux
- Compiler: GNU 11.4.0
-    vcpkg-tool version: 2024-06-10-02590c430e4ed9215d27870138c2e579cc338772
    vcpkg-scripts version: 57637915 2024-07-05 (3 days ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
CMake Warning at ports/python3/portfile.cmake:7 (message):
  python3 currently requires the following programs from the system package
  manager:

      autoconf automake autoconf-archive

  On Debian and Ubuntu derivatives:

      sudo apt-get install autoconf automake autoconf-archive

  On recent Red Hat and Fedora derivatives:

      sudo dnf install autoconf automake autoconf-archive

  On Arch Linux and derivatives:

      sudo pacman -S autoconf automake autoconf-archive

  On Alpine:

      apk add autoconf automake autoconf-archive

  On macOS:

      brew install autoconf automake autoconf-archive

Call Stack (most recent call first):
  scripts/ports.cmake:192 (include)


-- Downloading https://github.com/python/cpython/archive/v3.11.8.tar.gz -> python-cpython-v3.11.8.tar.gz...
-- Extracting source /home/vcpkg/downloads/python-cpython-v3.11.8.tar.gz
-- Applying patch 0001-only-build-required-projects.patch
-- Applying patch 0003-use-vcpkg-zlib.patch
-- Applying patch 0004-devendor-external-dependencies.patch
-- Applying patch 0005-dont-copy-vcruntime.patch
-- Applying patch 0008-python.pc.patch
-- Applying patch 0010-dont-skip-rpath.patch
-- Applying patch 0012-force-disable-modules.patch
-- Applying patch 0014-fix-get-python-inc-output.patch
-- Applying patch 0015-dont-use-WINDOWS-def.patch
-- Applying patch 0016-undup-ffi-symbols.patch
-- Applying patch 0018-fix-sysconfig-include.patch
-- Applying patch 0002-static-library.patch
-- Applying patch 0011-gcc-ldflags-fix.patch
-- Using source at /home/vcpkg/buildtrees/python3/src/v3.11.8-fe0ac5827a.clean
-- Getting CMake variables for x64-linux-dbg
-- Getting CMake variables for x64-linux-rel
CMake Error at scripts/cmake/vcpkg_configure_make.cmake:721 (message):
  python3 requires autoconf from the system package manager (example: "sudo
  apt-get install autoconf")
Call Stack (most recent call first):
  ports/python3/portfile.cmake:274 (vcpkg_configure_make)
  scripts/ports.cmake:192 (include)



```

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "playground",
  "version": "1.0.0",
  "dependencies": [
    "boost",
    "boost-interprocess"
  ]
}

```
</details>
