<h1 align="center">TMXL</h1>

<div align="center">
 <a href="https://travis-ci.com/eSkry/TMXL"><img src="https://travis-ci.com/eSkry/TMXL.svg?branch=TMXL_V1" /></a>
 <a href="https://ci.appveyor.com/project/eSkry/tmxl"><img src="https://ci.appveyor.com/api/projects/status/vgkpvw4dda3ykqia?svg=true" /></a>
 <a href="https://coveralls.io/github/eSkry/TMXL?branch=TMXL_V1"><img src="https://coveralls.io/repos/github/eSkry/TMXL/badge.svg?branch=TMXL_V1" /></a>
 <a href="https://github.com/eSkry/TMXL/blob/TMXL_V1/LICENSE.md"><img src="https://img.shields.io/badge/License-MIT-blue.svg" /></a>
</div>

## Build
Project uses [CMake](https://cmake.org) to generate platform and compiler-specific build files.

### Dependencies
- `optional` [pugixml](https://pugixml.org)

### CMake options
| Options              | Description                        | Default |
|----------------------|------------------------------------|---------|
| BUILD_EXAMPLES       | Build example projects             | ON      |
| BUILD_TESTS          | Build all test existing in project | OFF     |
| BUILD_TMXL_TEST_ONLY | Build test only for TMXL lib       | OFF     |
| BUILD_SHARED_LIBS    | Build shared libs                  | ON      |

### Building on Linux (Unix Makefiles)
1. Clone repository, enter to TMXL directory: `git clone https://github.com/eSkry/TMXL && cd ./TMXL`
1. Run init submodules script: `chmod +x ./initsubmodules.sh && ./initsubmodules.sh`
1. Build TMXL:
    - Run script: `chmod +x ./build.sh && ./build.sh` or create build dir: `mkdir build && cd build` and generate Makefile and build: `cmake -G "Unix Makefiles" .. -DCMAKE_BUILD_TYPE=Release && cmake --build .`
1. For install lib and include files run: `make install`

### Building on Window (Visual Studio)
1. CMake build list:
    - Visual Studio 2019: `cmake .. -G "Visual Studio 16 2019"`
    - Visual Studio 2017: `cmake .. -G "Visual Studio 15 2017 Win64"`
    - Visual Studio 2015: `cmake .. -G "Visual Studio 14 2015 Win64"`
1. Open TMXL.sln project
1. Run build

## Contributing
Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

## License
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details